#include <string.h>
#include <stdio.h>
#include "node.h"
#include "defines.h"
#include <stdlib.h>


void sortList(struct node *head){

	struct node *sort[3];
	sort[0] = head;
	sort[1] = (node*) nshNext(head);
	//sort[2] = (node*) nshMalloc(sizeof(struct node));
	sort[2] = (node*) malloc (sizeof(struct node));
	while (TRUE){
		if (strcmp(sort[0]->name,sort[1]->name) > 0) {			
			strcpy(sort[2]->name, sort[0]->name);
			strcpy(sort[2]->value, sort[0]->value);
			strcpy(sort[0]->name, sort[1]->name);
			strcpy(sort[0]->value, sort[1]->value);
			strcpy(sort[1]->name, sort[2]->name);
			strcpy(sort[1]->value, sort[2]->value);
			
			// start again at the beginning of the list
			sort[0] = head;
			sort[1] = (node*) nshNext(head);
		}
		else{
			if (sort[1]->next != NULL){
				sort[0] = sort[1];
				sort[1] = (node*) nshNext(sort[1]);
			}
			else{
				break;
			}
		}		
	}	
}

