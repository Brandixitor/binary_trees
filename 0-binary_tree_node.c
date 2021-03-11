#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (node)
	{
		node->n = value;
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
	}

	return (node);
}
