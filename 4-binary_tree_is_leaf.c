#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf of a binary
 * @node: A pointer to the to check.
 * Return: 1 or 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL || node->left != NULL || node->right != NULL)
return (0);
return (1);
}
