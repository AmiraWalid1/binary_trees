#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * by subtract height of left subtree fom height of right subtree.
 * @tree: is a pointer to the root node of the tree.
 * Return: balance factor of a binary tree.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	return (cal_height_BT(tree->left) - cal_height_BT(tree->right));
}

/**
 * cal_height_BT - calculate height of Binary Tree.
 * @tree: is a pointer to the root node of the tree.
 * Return: height of Binary Tree.
*/
int cal_height_BT(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	int h_left = cal_height_BT(tree->left);
	int h_right = cal_height_BT(tree->right);

	if (h_left > h_right)
		return (h_left + 1);
	else
		return (h_right + 1);
}
