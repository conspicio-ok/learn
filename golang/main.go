package main

import (
	"fmt"
	"net/http"
	"encoding/json"
	"strings"
	"strconv"
)

type Item struct {
	ID		int		`json:"id"`
	Name	string	`json:"name"`
}

var items = []Item{
	{ID: 1, Name: "foo1"},
	{ID: 2, Name: "foo2"},
}

func	getId(r *http.Request) int {
	parts := strings.Split(r.URL.Path, "/")
	id, err := strconv.Atoi(parts[len(parts)-1])
	if (err != nil) {
		return (-1)
	}
	return (id)
}

func	checkMethod(method string, w http.ResponseWriter, r *http.Request) bool {
	if (r.Method != method) {
		http.Error(w, "Invalid request method", http.StatusMethodNotAllowed)
		return (false)
	}
	return (true)
}

func	getItems(w http.ResponseWriter, r *http.Request) {
	if (!checkMethod("GET", w, r)) {
		return
	}
	w.Header().Set("Content-Type", "application/json")
	json.NewEncoder(w).Encode(items)
}

func	getItem(w http.ResponseWriter, r *http.Request) {
	if (!checkMethod("GET", w, r)) {
		return
	}
	id := getId(r)
	if (id == -1) {
		http.Error(w, "Invalid ID format", http.StatusBadRequest)
        return
	}
	for _, item := range items {
		if (item.ID == id) {
			w.Header().Set("Content-Type", "application/json")
			json.NewEncoder(w).Encode(item)
			return
		}
	}
	http.Error(w, "Item not found", http.StatusNotFound)
}

var port = ":8080"

func	main() {
	http.HandleFunc("/items", getItems)
	http.HandleFunc("/items/{id}", getItem)
	http.ListenAndServe(":8080", nil)
	fmt.Println("Server listen on port 8080")
}

