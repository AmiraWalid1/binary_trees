#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a node
 * in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: depth
 * If tree is NULL, your function must return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;
	binary_tree_t *tmp = (binary_tree_t *)tree;

	if (!tree)
		return (0);

	while (tmp->parent)
	{
		count++;
		tmp = tmp->parent;
	}

	return (count);
}
