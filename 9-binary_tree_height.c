#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: tree is a pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL or height of tree if he's not empty
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_height(tree->left) > binary_tree_height(tree->right))
		return (binary_tree_height(tree->left) + 1);
	
	else
		return (binary_tree_height(tree->right) + 1);
}
