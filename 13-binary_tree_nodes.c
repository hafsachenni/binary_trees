#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with 1 child
 * @tree: pointer to the root node of the tree
 * Return: num of nodes with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_side, right_side;

	if (tree == NULL || (!tree->left && !tree->right))
	{
		return (0);
	}

	left_side = binary_tree_nodes(tree->left);
	right_side = binary_tree_nodes(tree->right);

	return (left_side + 1 + right_side);
}
