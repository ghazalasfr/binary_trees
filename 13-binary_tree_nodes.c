#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - ...
 *
 * @tree: ...
 *
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nb = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		nb = 1;

	nb += binary_tree_nodes(tree->left);
	nb += binary_tree_nodes(tree->right);

	return (nb);
}
