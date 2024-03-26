#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a tree is a leaf or not.
 *
 * @node:  the node to check.
 *
 * Return: if node is null we return 0 otherwise node is a leaf return 1. 
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
        return(0);

    if (node->parent != NULL && node->left == NULL && node->right == NULL)
        return (1);
    else
        return (0);
}