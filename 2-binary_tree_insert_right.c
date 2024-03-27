#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts the created node as the right-child
 *                           of the parent node.
 * @parent: points to the node where we insert the right-child.
 * @value: the node's value.
 *
 * Return: the inserted node.
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
