#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * bth_balance - ....
 * @tree: ...
 *
 * Return: ...
 * 
 */

size_t bth_balance(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_left = 1 + bth_balance(tree->left);
	if (tree->right)
		height_right = 1 + bth_balance(tree->right);

	if (height_left > height_right)
		return (height_left);
	return (height_right);
}

/**
 * binary_tree_balance - ...
 *
 * @tree: ...
 * 
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		height_left = 1 + bth_balance(tree->left);
	if (tree->right)
		height_right = 1 + bth_balance(tree->right);
	return (height_left - height_right);
}
