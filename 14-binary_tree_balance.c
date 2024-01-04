#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: tree to be measured
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t depth_left, depth_right;

	if (tree == NULL)
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

/**
 * binary_tree_balance - function that measures the balance factor
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is null
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_subtree, right_subtree;

	if (tree == NULL)
	{
		return (0);
	}

	left_subtree = binary_tree_height(tree->left);
	right_subtree = binary_tree_height(tree->right);

	return (left_subtree - right_subtree);
}
