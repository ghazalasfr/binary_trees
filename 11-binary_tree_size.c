#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_size - ...
 *
 * @tree: ...
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t x = 1;

	if (!tree)
		return (0);

	x += binary_tree_size(tree->left);
	x += binary_tree_size(tree->right);

	return (x);
}
