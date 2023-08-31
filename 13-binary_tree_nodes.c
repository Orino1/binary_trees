#include "binary_trees.h"

/**
 * binary_tree_nodes - Calculate the number of nodes in a binary
 * tree with children
 * @tree: Pointer to the root node of the tree
 *
 * Return: Number of nodes in the binary tree with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		nodes += ((tree->left || tree->right) ? 1 : 0);
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
		return (nodes);
	}
}
