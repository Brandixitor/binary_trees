#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: node is a pointer to the node to find the sibling
 * Return: if node is NULL or the parent is NULL, return NULL
 * if node has no sibling, return NULL
 * if node have a sibling return the pointer of the sibling of the node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->right && node->parent->left)
		return (node->parent->left);
	else if (node == node->parent->left && node->parent->right)
		return (node->parent->right);
	else
		return (NULL);
}
