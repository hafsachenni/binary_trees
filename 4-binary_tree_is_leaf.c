#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: node to be checked
 * Return: return 1 if node is a leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	/* checks if both left and right pointers are null */
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}

	return (0);
}
