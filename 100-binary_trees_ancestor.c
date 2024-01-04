#include "binary_trees.h"

/**
 * binary_trees_ancestor - a function that finds the lowest common
 * ancestor of two nodes
 * @f: is a pointer to the first node
 * @s: is a pointer to the second node
 * Return: a pointer to the lowest common ancestor node of
 * the two given nodes
 * If no common ancestor was found, your function must return NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *f,
		const binary_tree_t *s)
{
	binary_tree_t *ancestor;

	if (f == NULL || s == NULL)
		return (NULL);

	ancestor = (binary_tree_t *)f;

	while (ancestor != NULL)
	{
		if (binary_tree_is_ancestor(ancestor, s))
			return (ancestor);
		ancestor = ancestor->parent;
	}
	return (NULL);
}

/**
 * binary_tree_is_ancestor - Checks if a node is an ancestor of another node
 * @a: Pointer to the potential ancestor node
 * @node: Pointer to the potential descendant node
 * Return: 1 if ancestor is an ancestor of node, 0 otherwise
 */

int binary_tree_is_ancestor(const binary_tree_t *a, const binary_tree_t *node)
{
	while (node)
	{
		if (node == a)
			return (1);
		node = node->parent;
	}

	return (0);
}
