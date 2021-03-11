#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: tree is a pointer to the root node
 * of the tree to count the number of nodes
 * Return: 0 if tree is NULL or numbers of nodes with at least 1 child-node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
	else
		return (0);
}
