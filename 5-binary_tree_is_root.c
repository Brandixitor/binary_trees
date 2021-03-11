#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if the node is a root or not
 * @node: pointer to the node to check
 * Return: 0 if it's not a root or 1 if it is
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
