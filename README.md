# doubly-linked-creation-and-insertion
# Doubly Linked List in C

This project demonstrates the implementation of a **Doubly Linked List** in C.  
It supports the following operations:
- Create a doubly linked list dynamically
- Traverse and print elements (forward and backward)
- Insert at the **start**
- Insert at the **end**
- Insert at a **specific position (middle)**

---

## 📌 Features
- Each node contains:
  - `data` (integer)
  - `next` (pointer to the next node)
  - `prev` (pointer to the previous node)
- Traversal is supported in **both directions**.
- Insertion is safe with `NULL` checks.

---

## 🛠️ How It Works
1. **Node Structure**
   ```c
   struct node {
       int data;
       struct node *next;
       struct node *prev;
   };
enter the data:
10
do u want to continue(0/1)
1
enter the data:
20
do u want to continue(0/1)
0

linked list (forward):
10 20 

linked list (backward):
20 10 

insert at start
enter the data:
5
list: 5 10 20 

insert at end
enter the data:
25
list: 5 10 20 25 

insert at middle
enter pos: 3
enter the data:
15
list: 5 10 15 20 25
