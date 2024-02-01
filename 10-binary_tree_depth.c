#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - ...
 * @tree: ...
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		i = 1 + binary_tree_depth(tree->parent);
	return (i);
}
