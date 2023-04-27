# 0x12. C - Singly linked lists
## Concepts
For this project, we expect you to look at this concept:
+ [Data Structures](https://intranet.alxswe.com/concepts/120)

## Resources
Read or watch:
+ [Linked Lists](https://www.youtube.com/watch?v=udapt4FGY20&t=130s)

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:### General
+ When and why using linked lists vs arrays
+ How to build and use linked lists

## More Info
Please use this data structure for this project:
```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

# Tasks

## 0. Print list
### [0-print_list.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x12-singly_linked_lists/0-print_list.c)
Write a function that prints all the elements of a list_t list.

+ Prototype: size_t print_list(const list_t *h);
+ Return: the number of nodes
+ Format: see example
+ If str is NULL, print [0] (nil)
+ You are allowed to use printf

## 1. List length
### [1-list_len.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x12-singly_linked_lists/1-list_len.c)
Write a function that returns the number of elements in a linked list_t list.

+ Prototype: size_t list_len(const list_t *h);

## 2. Add node
### [2-add_node.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x12-singly_linked_lists/2-add_node.c)
Write a function that adds a new node at the beginning of a list_t list.

+ Prototype: list_t *add_node(list_t **head, const char *str);
+ Return: the address of the new element, or NULL if it failed
+ str needs to be duplicated
+ You are allowed to use strdup

## 3. Add node at the end
### [3-add_node_end.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x12-singly_linked_lists/3-add_node_end.c)
Write a function that adds a new node at the end of a list_t list.

+ Prototype: list_t *add_node_end(list_t **head, const char *str);
+ Return: the address of the new element, or NULL if it failed
+ str needs to be duplicated
+ You are allowed to use strdup

## 4. Free list
### [4-free_list.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x12-singly_linked_lists/4-free_list.c)
Write a function that frees a list_t list.

+ Prototype: void free_list(list_t *head);

## 5. The Hare and the Tortoise
### [100-first.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x12-singly_linked_lists/100-first.c)
Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

+ You are allowed to use the printf function
