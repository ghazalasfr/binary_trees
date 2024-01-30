#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - ...
 *
 * @parent: ...
 * @value: ...
 * Return: ...
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnode = NULL, *NewNode = NULL;

	if (parent == NULL)
		return (NULL);
	NewNode = malloc(sizeof(binary_tree_t));

	if (NewNode == NULL)
		return (NULL);

	NewNode->parent = parent;
	NewNode->left = NULL;
	NewNode->right = NULL;
	NewNode->n = value;

	leftnode = parent->left;
	parent->left = NewNode;

	if (leftnode)
	{
		leftnode->parent = NewNode;
		NewNode->left = leftnode;
	}

	return (NewNode);
}

