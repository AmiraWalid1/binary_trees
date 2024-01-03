#include "binary_trees.h"

/**
 * binary_tree_height_t - calculate height of Binary Tree.
 * @tree: is a pointer to the root node of the tree.
 * Return: height of Binary Tree.
*/
size_t binary_tree_height_t(const binary_tree_t *tree)
{
	size_t h_left;
	size_t h_right;

	if ((tree == NULL) || (tree->left == NULL && tree->right == NULL))
		return (0);

	h_left = binary_tree_height_t(tree->left);
	h_right = binary_tree_height_t(tree->right);

	if (h_left > h_right)
		return (h_left + 1);
	else
		return (h_right + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * by subtract height of left subtree fom height of right subtree.
 * @tree: is a pointer to the root node of the tree.
 * Return: balance factor of a binary tree.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left;
	int h_right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	if (tree->left == NULL)
		h_left = 0;
	else
		h_left = binary_tree_height_t(tree->left) + 1;
	if (tree->right == NULL)
		h_right = 0;
	else
		h_right = binary_tree_height_t(tree->right) + 1;
	return (h_left - h_right);
}
