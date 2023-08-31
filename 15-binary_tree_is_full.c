#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if a binary tree is full
 * A binary tree is full if every node has either zero or two children.
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full = 0, right_full = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
			left_full = binary_tree_is_full(tree->left);
			right_full = binary_tree_is_full(tree->right);
			if (left_full == 0 || right_full == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!tree->left && !tree->right)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
