#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "linkedlist.h"

static Node* _head = NULL;
static Node* _tail = NULL;
static Node* _cur_node = NULL;

bool empty() {
	if(_cur_node == NULL)	return true;
	else return false;
}

size_t size() {
	Node* ptr;
	ptr = _head;
	ptr = ptr->next;
	int count=0;
	while(ptr != NULL) {
			ptr = ptr->next;
			count++;
		}
	return count;
}

void print() {
	
}

void print_file(FILE* stream) {
	
}

void clear() {
	
}

Node* append_left(size_t n, char new_data[n]) {
	
}

Node* insert_after(Node* cur_node, Node* new_node) {
	
}

Node* append(size_t n, char new_data[n]) {
	
}

Node* delete_node(Node* _cur_node) {
	
}

Node* delete(char* data) {
	
}

Node* get_node(size_t index) {
	
}

Node* first() {
	
}

Node* last() {
	
}

Node* next() {
	return _cur_node->next;
}

Node* prev() {
	return _cur_node->prev;
}
