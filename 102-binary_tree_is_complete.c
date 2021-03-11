#include "binary_trees.h"

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
 * binary_tree_complete - recursive function of binary_tree_is_complete
 *
 * @tree: a pointer to the root node of the tree to check
 * @count: the number of nodes in the tree
 * @index: the number to compare count with
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */

int binary_tree_complete(const binary_tree_t *tree, size_t count, size_t index)
{
	if (tree)
	{
		if (index >= count)
			return (0);
		return (binary_tree_complete(tree->left, count, 2 * index + 1)
				&& binary_tree_complete(tree->right, count, 2 * index + 2));
	}

	return (1);
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 *
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t count = binary_tree_size(tree);
	size_t index = 0;

	if (tree)
		return (binary_tree_complete(tree, count, index));

	return (0);
}
