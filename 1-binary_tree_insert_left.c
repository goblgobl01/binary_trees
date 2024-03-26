#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the newly inserted node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent->left != NULL)
	{
		binary_tree_t *new_node_2 = malloc(sizeof(binary_tree_t));

		if (new_node_2 == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node_2->n = parent->left->n;
		new_node_2->left = NULL;
		new_node_2->right = NULL;
		new_node_2->parent = new_node;
		new_node->left = new_node_2;
		free(parent->left);
	}

	parent->left = new_node;

	return (new_node);
}
