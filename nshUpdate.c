#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "defines.h"

void nshUpdate (struct node *updateIt, char *newValue){
	strcpy(updateIt->value, newValue);
}