#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * A full binary tree is a tree in which every node has either
 * 0 or 2 children.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise. If tree is NULL, returns 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);


	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
