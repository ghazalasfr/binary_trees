#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - ...
 *
 * @tree: ...
 *
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t y = 0;

	if (tree == NULL)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);

	y += binary_tree_leaves(tree->left);
	y += binary_tree_leaves(tree->right);

	return (y);
}
