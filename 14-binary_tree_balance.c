#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: the height of the binary tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree)
	{
		left_height = tree->left ? binary_tree_height(tree->left) + 1 : 1;
		right_height = tree->right ? binary_tree_height(tree->right) + 1 : 1;

		return (MAX(left_height, right_height));
	}

	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: the balance factor of the binary tree, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left)
				- binary_tree_height(tree->right));
	}

	return (0);
}
