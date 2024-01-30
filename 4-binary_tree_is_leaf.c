#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - ...
 *
 * @node: ...
 *
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!(node->left) && !(node->right))
		return (1);
	return (0);
}
