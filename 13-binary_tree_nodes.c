#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes in a binary tree with at least 1 child.
 * @tree: Points to the root node of the tre for which we count the number of nodes.
 *
 * Return: 0 if the tree is NULL, return the node count otherwise.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	count += 1;
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
