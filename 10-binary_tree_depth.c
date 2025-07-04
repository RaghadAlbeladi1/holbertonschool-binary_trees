#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 * Return: If tree is NULL, your function must return 0,
 *         else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
if (tree && tree->parent)
return (1 + binary_tree_depth(tree->parent));
return (0);
}
