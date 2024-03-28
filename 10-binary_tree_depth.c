#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: 0 if tree is NULL, otherwise return the tree depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree || !tree->parent)
		return (count);

	count = 1 + binary_tree_depth(tree->parent);

	return (count);
}
