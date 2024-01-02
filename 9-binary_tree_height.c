#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: height, If tree is NULL -> 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_h;
	size_t left_h;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	right_h = binary_tree_height(tree->right);
	left_h =  binary_tree_height(tree->left);

	if (left_h >= right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}
