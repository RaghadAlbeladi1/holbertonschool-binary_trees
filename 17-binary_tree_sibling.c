#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * A sibling is a node that shares the same parent.
 *
 * @node: Pointer to the node to find the sibling of.
 *
 * Return: Pointer to the sibling node, or NULL if no sibling exists
 *         or if node is NULL or has no parent.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	else
		return (node->parent->left);
}
