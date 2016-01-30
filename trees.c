#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "trees.h"

Bi_node *getBi_node ( int key ) {
	Bi_node *node = ( Bi_node * ) malloc ( sizeof ( Bi_node ));
	if ( node == NULL ) {
		printf ( "NO SPACE ALLOCATED\n");
		exit ( EXIT_FAILURE );
	}
	node -> key = key;
	node -> left = node -> right = NULL;
	return node;
}

Mu_node *getMu_node ( int key ) {
	Mu_node *node = ( Mu_node * ) malloc ( sizeof ( Mu_node ));
	if ( node == NULL ) {
		printf ( "NO SPACE ALLOCATED\n");
		exit ( EXIT_FAILURE );
	}
	node -> key = key;
	node -> right_sibling = node -> children = NULL;
	return node;
}

void inoder_bi( Bi_node * root ) {
	if ( root != NULL ) {
		inoder_bi ( root -> left );
		printf ( "%i ", root -> key );
		inoder_bi ( root -> right );
	}
}
