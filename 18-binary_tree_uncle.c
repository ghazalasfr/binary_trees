#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * function_search - ...
 * @node: ...
 * Return: ...
 */
binary_tree_t *function_search(binary_tree_t *node)
{
	binary_tree_t *gp = NULL;
	if (node == NULL || node->parent == NULL)
		return (NULL);
	gp = node->parent;
	
	if (gp->left && (gp->left != node))
		return (gp->left);
	else if (gp->right && (gp->right != node))
		return (gp->right);
	return (NULL);
}

/**
 * binary_tree_uncle - binary tree
 * @node: ...
 * Return: ...
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	return (function_search(node->parent));
}

