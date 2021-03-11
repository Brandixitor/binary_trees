#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes.
 *
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: a pointer to the lowest common ancestor, otherwise NULL
 */

binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *f_astr = NULL, *s_astr = NULL;

	if (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);

		f_astr = first->parent;
		s_astr = second->parent;

		if (!f_astr || first == s_astr || (!f_astr->parent && s_astr))
			return (binary_trees_ancestor(first, s_astr));
		if (!s_astr || second == f_astr || (!s_astr->parent && f_astr))
			return (binary_trees_ancestor(f_astr, second));
		return (binary_trees_ancestor(f_astr, s_astr));
	}

	return (NULL);
}
