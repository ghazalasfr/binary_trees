#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - ...
 *
 * @parent: ...
 * @value: ...
 * Return: a pointer to the created node,
 *	or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode = NULL;

	if (parent == NULL)
		return (NULL);

	NewNode = malloc(sizeof(binary_tree_t));

	if (NewNode == NULL)
		return (NULL);

	NewNode->n = value;
	NewNode->left = NULL;

	if (parent->right == NULL)
	{
		NewNode->parent = parent;
		NewNode->right = NULL;
		parent->right = NewNode;
	}
	else
	{
		NewNode->parent = parent;
		NewNode->right = parent->right;
		parent->right = NewNode;
		NewNode->right->parent = NewNode;
	}
	return (NewNode);
}
