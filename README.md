# LinkedList (C++)

A basic implementation of a singly linked list in C++.  
This project demonstrates dynamic memory management, object-oriented design, and custom copy/move constructors and assignment operators.

---

## 🧠 What is a Linked List?

Unlike arrays, which store elements in contiguous memory, a linked list stores data in separate nodes connected via pointers.  
This makes it easier to add and remove elements, especially at the beginning.

---

## ✅ Features

- `push_front()` and `push_back()` — add elements to the front or back
- `pop_back()` — remove the last element
- `remove(index)` — remove an element by position
- `find(index)` — find element by index
- `get_all()` — print all values in the list
- `size()` — count total elements
- **Copy constructor**
- **Move constructor**
- **Copy assignment operator**

---

## 🛠️ Build Instructions

### Compile with g++:
```bash
g++ -std=c++17 -Wall -Wextra main.cpp -o taskManager
./linkedlist
