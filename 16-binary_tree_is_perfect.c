#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * comparaison - ...
 *
 * @tree: ...
 * Return: ...
 */
int comparaison(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (comparaison(tree->left) + 1 + comparaison(tree->right));
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: ...
 * Return: ...
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

	if (tree == NULL)
		return (0);

	if (tree && (!tree->left && !tree->right))
		return (1);

	height_left = comparaison(tree->left);
	height_right = comparaison(tree->right);

	if ((height_left - height_right) == 0)
		return (1);

	return (0);
}
