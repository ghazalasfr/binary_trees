#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - ...
 *
 * @tree: ...
 * Return: ...
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	if (!tree->left || !tree->right)
		return (0);

	return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
}
