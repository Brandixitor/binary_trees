#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left rotation on a binary tree
 *
 * @tree: a pointer to the root node of the tree to rotate
 *
 * Return: a pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree && tree->right)
	{
		tree->parent = tree->right;

		if (tree->right->left)
			tree->right = tree->parent->left;
		else
			tree->right = NULL;

		tree->parent->left = tree;
		tree->parent->parent = NULL;
		return (tree->parent);
	}

	return (NULL);
}
