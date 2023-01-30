#ifndef _MORE_SINGLY_LINKED_LISTS_
#define _MORE_SINGLY_LINKED_LISTS_

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
size_t print_listint(const listint_t *h);

#endif
