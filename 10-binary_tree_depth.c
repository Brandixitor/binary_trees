#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: a pointer to the node to measures the depth
 *
 * Return: the depth of the node in the binary tree, or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree)
	{
		while (tree->parent)
		{
			depth++;
			tree = tree->parent;
		}
	}

	return (depth);
}
