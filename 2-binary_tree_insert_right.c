#include "binary_trees.h"


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);
	if (parent->right)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
		parent->right = newNode;

	return (newNode);
}
