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
 * binary_tree_flevel - apply func to each element of the level
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 * @l: the level of the tree to apply func
 */

void binary_tree_flevel(const binary_tree_t *tree, void (*func)(int), size_t l)
{
	if (tree)
	{
		if (l == 1)
			func(tree->n);
		else if (l > 1)
		{
			binary_tree_flevel(tree->left, func, l - 1);
			binary_tree_flevel(tree->right, func, l - 1);
		}
	}
}

/**
 * binary_tree_levelorder - goes through binary tree using levelorder traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height = binary_tree_height(tree);
	size_t i = 1;

	if (tree && func)
	{
		while (i <= height)
			binary_tree_flevel(tree, func, i++);
	}
}
