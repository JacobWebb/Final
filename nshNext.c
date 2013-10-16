#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "defines.h"


node* nshNext(node *current){
	current = current->next;
}