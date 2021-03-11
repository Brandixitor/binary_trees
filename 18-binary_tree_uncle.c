#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: a pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node, or NULL if node has no uncle or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *l_uncle = NULL, *r_uncle = NULL;

	if (node && node->parent && node->parent->parent)
	{
		l_uncle = node->parent->parent->left;
		if (l_uncle && l_uncle != node->parent)
			return (node->parent->parent->left);

		r_uncle = node->parent->parent->right;
		if (r_uncle && r_uncle != node->parent)
			return (node->parent->parent->right);
	}

	return (NULL);
}
