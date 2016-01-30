#ifndef TREES_H
#define TREES_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/* This represent a node of a binary tree */

typedef struct bi_node_t {
	int key;
	struct bi_node_t *left, *right;
} Bi_node;

/* This represent a node in a multiway tree*/

typedef struct mu_node_t {
	int key;
	struct mu_node_t * right_sibling, *children;
} Mu_node;

Bi_node *getBi_node ( int );
Mu_node *getMu_node ( int );
void inoder_bi ( Bi_node * );



#endif
