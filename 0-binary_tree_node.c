#include "binary_trees.h"
/**
 * binary_tree_node -function that return the a node if it succed.
 *
 * @parent : is the parent node.
 * @value : is the value that the new will contain.
 *
 * Return: Null if failed new_node if succeded.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);
}