#ifndef TDLINKEDLIST_H
#define TDLINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct _lista TDLinkedList;
/**
 * Cria uma lista dupla
 */
TDLinkedList* TDLinkedList_create();
/**
 * Insere um elemento inteiro na lista dupla
 */
bool TDLinkedList_insert(TDLinkedList*, int);
/**
 * Imprime a lista dupla
 */
void TDLlinkedList_print(TDLinkedList*);

bool TDLinkedList_remove(TDLinkedList*, int);

#endif
