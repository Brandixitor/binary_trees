#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right rotation on a binary tree
 *
 * @tree: a pointer to the root node of the tree to rotate
 *
 * Return: a pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (tree && tree->left)
	{
		tree->parent = tree->left;

		if (tree->left->right)
		{
			tree->left = tree->parent->right;
			tree->left->parent = tree;
		}
		else
			tree->left = NULL;

		tree->parent->right = tree;
		tree->parent->parent = NULL;
		return (tree->parent);
	}

	return (NULL);
}
