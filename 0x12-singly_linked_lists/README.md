# 0x12-singly_linked_lists
## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

- When and why using linked lists vs arrays
- How to build and use linked lists
## Requirements
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

Please use this data structure for this project:
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

## Files
0. Write a function that prints all the elements of a list_t list.

- Prototype: size_t print_list(const list_t *h);
- Return: the number of nodes
- Format: see example
- If str is NULL, print [0] (nil)
- You are allowed to use printf
- File: 0-print_list.c

1. Write a function that returns the number of elements in a linked list_t list.

- Prototype: size_t list_len(const list_t *h);
- File: 1-list_len.c

2. Write a function that adds a new node at the beginning of a list_t list.

- Prototype: list_t *add_node(list_t **head, const char *str);
- Return: the address of the new element, or NULL if it failed
str needs to be duplicated
- You are allowed to use strdup
- File: 2-add_node.c

3. Write a function that adds a new node at the end of a list_t list.

- Prototype: list_t *add_node_end(list_t **head, const char *str);
- Return: the address of the new element, or NULL if it failed
- str needs to be duplicated
- You are allowed to use strdup
- File: 3-add_node_end.c

4. Write a function that frees a list_t list.

- Prototype: void free_list(list_t *head);
- File: 4-free_list.c

5. Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

- You are allowed to use the printf function
- File: 100-first.c

6. Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.

- You are only allowed to use the printf function
- You are not allowed to use interrupts
- Your program will be compiled using nasm and gcc:
- File: 101-hello_holberton.asm
