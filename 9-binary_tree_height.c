#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: tree to be measured
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t depth_left, depth_right;

	if (tree == NULL || (!tree->left && !tree->right))
	{
		return (0);
	}

	depth_left = binary_tree_height(tree->left);
	depth_right = binary_tree_height(tree->right);

	if (depth_left > depth_right)
		return (depth_left + 1);
	else
		return (depth_right + 1);
}
