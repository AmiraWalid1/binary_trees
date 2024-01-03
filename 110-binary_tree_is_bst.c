#include "binary_trees.h"
#include <limits.h>

/**
 * binary_tree_is_bst - a function that checks if a binary tree
 * is a valid Binary Search Tree
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if tree is a valid BST, and 0 otherwise
 * If tree is NULL, return 0
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
	return (1);
	if ((tree->left && tree->n <= maxValue(tree->left))
			|| (tree->right && tree->n >= minValue(tree->right))
			|| (!binary_tree_is_bst(tree->right)
				|| !binary_tree_is_bst(tree->left)))
		return (0);
	return (1);
}

/**
 * maxValue - get max value in tree
 * @node: root node of tree
 * Return: max value
 */

int maxValue(const binary_tree_t *node)
{
	int maxRight, maxLeft;

	if (!node)
		return (INT_MIN);

	maxRight = maxValue(node->right);
	maxLeft = maxValue(node->left);

	if (node->n >= maxRight && node->n >= maxLeft)
		return (node->n);
	else if (maxRight >= node->n && maxRight >= maxLeft)
		return (maxRight);
	else
		return (maxLeft);
}

/**
 * minValue - get min value in tree
 * @node: root node of tree
 * Return: min value
 */

int minValue(const binary_tree_t *node)
{
	int minRight, minLeft;

	if (!node)
		return (INT_MAX);

	minRight = minValue(node->right);
	minLeft = minValue(node->left);

	if (node->n < minRight && node->n < minLeft)
		return (node->n);
	else if (minRight <= node->n && minRight <= minLeft)
		return (minRight);
	else
		return (minLeft);
}
