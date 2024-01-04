#include "binary_trees.h"

/**
 * binary_tree_is_full -  function that checks if a binary tree is full
 * @tree: pointer to the root node
 * Return: 0 if tree is null
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	/* checks if node is a leaf. meaning its full*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* recursively checks if both trees are full */
	/* checks if node has children */
	if ((tree->right) && (tree->left))
		return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));
	return (0);
}
