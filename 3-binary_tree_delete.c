#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes a binary tree
 * @tree: tree to be deleted
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	/** deletion of left subtree **/
	binary_tree_delete(tree->left);

	/** deletion of right subtree **/
	binary_tree_delete(tree->right);

	/** delete the current node **/
	free(tree);
}
