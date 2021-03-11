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
		left_height = tree->left ? binary_tree_height(tree->left) + 1 : 0;
		right_height = tree->right ? binary_tree_height(tree->right) + 1 : 0;

		return (MAX(left_height, right_height));
	}

	return (0);
}

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: the size of the binary tree, or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_size(tree->left)
				+ binary_tree_size(tree->right) + 1);
	}

	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree) + 1;
	size_t size = binary_tree_size(tree);
	size_t res = 1;

	if (tree)
	{
		while (height-- > 0)
			res = res * 2;
		res -= 1;

		if (res == size)
			return (1);
	}
	return (0);
}
