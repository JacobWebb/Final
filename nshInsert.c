#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "defines.h"


void nshInsert(struct node *head, char *name, char *value, int type) 
{
	// create a node to track the place
	node *place;
	place = head;
	
	// if the insert is for variables
	if (type == VARIABLE) {
		// find where to set or reset a node in the linked list
		while (TRUE){
			// if needed to update
			if (strcmp(place->name,name) == 0) {
				nshUpdate(place, value);
				break;
			}
			else if (place->next == NULL) {
				// create new node to insert
				//node *newTemp = (node*) nshMalloc(sizeof(struct node));
				node *newTemp = (node*) malloc (sizeof(struct node));
				newTemp->next == NULL;
				strcpy(newTemp->name, name);
				strcpy(newTemp->value, value);
				place->next = newTemp;
				break;
			}
			else {
				place = (node*) nshNext(place);
			}
		}	
	}
	// if the insert is for aliases
	else if (type == ALIAS){
		while(TRUE){
			// if needed to update node
			if (strcmp(place->name,name)==0 || strcmp(place->value,name)==0){
				nshUpdate(place, value);
				break;
			}
			else if (place->next == NULL) {
				//node *newTemp = (node*) nshMalloc(sizeof(struct node));
				node *newTemp = (node*) malloc(sizeof(struct node));
				newTemp->next == NULL;
				strcpy(newTemp->name, name);
				strcpy(newTemp->value, value);
				place->next = newTemp;
				break;
			}
			else {
				place = (node*) nshNext(place);
			}
		}
	}
	
	// sort the list
	if (head->next != NULL)
		sortList(head);
}


