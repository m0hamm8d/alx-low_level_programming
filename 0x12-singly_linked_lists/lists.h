#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * struct x - our struct
 * @str: first mem
 * @len: secend
 * @next: third
 */
typedef struct x
{
	char *str;
	int len;
	struct x *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void bef_main(void) __attribute__((constructor));
#endif
