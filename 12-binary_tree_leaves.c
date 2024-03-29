#include "binary_trees.h"

/**
 *  binary_tree_leaves - function that counts the leaves
 *  @tree:  is a pointer to the root node of the tree
 *  Return: 0
 */


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves;

	if (tree == NULL)
	{
		return (0);
	}

	/* checking if both kids are null. meaning they're leaves */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves + right_leaves);
}
