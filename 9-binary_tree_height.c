#include "binary_trees.h"

/**
 * binary_tree_height -  function that measures the height of a binary tree
 * @tree: tree to be measured
 * Return: 0 if tree is null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t depth_left, depth_right, height;

	if (tree == NULL)
	{
		return (0);
	}

	depth_left = binary_tree_height(tree->left);
	depth_right = binary_tree_height(tree->right);

	if (depth_left > depth_right)
	{
		height = depth_left + 1;
	}
	else
	{
		height = depth_right + 1;
	}
	return (height);
}
