#include "binary_trees.h"

/**
 * binary_tree_delete - delete all the node on a tree.
 *
 * @tree: the tree that we want to deletle.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree != NULL)
    {
        binary_tree_delete(tree->left);
        binary_tree_delete(tree->right);
        free(tree);
    }
}
