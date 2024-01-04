#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node:  pointer to the node to find the sibling
 * Return: null if parent or node is null
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	/* checks if current node is left child */
	/* of its a parent */
	/* and returns its sibling */

	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);
	return (NULL);
}
