#include "binary_trees.h"

/**
 * binary_tree_depth - Calculate the depth of a node in a binary tree
 * @tree: Pointer to the node for which to calculate the depth
 *
 * Return: Depth of the node from the root, or 0 if it's the root node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
