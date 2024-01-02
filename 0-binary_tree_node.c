#include "binary_trees.h"
/**
 * binary_tree_node -  function that creates a binarytree node
 * @parent: pointer of the parent node
 * @value: value of that node(that we're putting there)
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		/* handle memory allo failure */
		return (NULL);

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;

	return (newNode);
}
