#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_height - ...
 *
 * @tree:...
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t x = 0, y = 0;

	if (!tree)
		return (0);

	if (tree->left)
		x = 1 + binary_tree_height(tree->left);
	if (tree->right)
		y = 1 + binary_tree_height(tree->right);

	if (x > y)
		return (x);
	return (y);
}
