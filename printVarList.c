#include <string.h>
#include <stdio.h>
#include "node.h"
#include "defines.h"
#include <stdlib.h>


void printVarList(struct node *head){
	// create a node to track the place
	struct node *place;
	place = head;
	
	if (place != NULL) {
		printf("%s=%s\n",place->name,place->value);
		while(place->next != NULL){
			place = (node*) nshNext(place);
			printf("%s=%s\n",place->name, place->value);
		}
	}
}
