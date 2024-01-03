#include "binary_trees.h"
/**
 * binary_tree_is_full_t - checks if a binary tree is full.
 * Full Binary tree is a binary tree each node have 0/2 child.
 * @tree: is a pointer to the root node of the tree.
 * Return: (1) True or (0) False.
*/
int binary_tree_is_full_t(const binary_tree_t *tree)
{
	if (!tree || (tree->left && !tree->right) || (!tree->left && tree->right))
		return (0);
	else if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_is_full_t(tree->left) &&
	 binary_tree_is_full_t(tree->right));
}
/**
 * leaves_in_same_level - check if leaves in same levels.
 * @tree: is a pointer to the root node of the tree.
 * Return: (-1) false.
*/
signed int leaves_in_same_level(const binary_tree_t *tree)
{
	signed int left_h;
	signed int right_h;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left_h = leaves_in_same_level(tree->left);
	right_h = leaves_in_same_level(tree->right);

	if (left_h != right_h)
		return (-1);
	else
		return (left_h + 1);

}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * -> Berfect Binary-Tree is Binary-Tree that is full and
 *      each leave in the same level.
 * @tree: is a pointer to the root node of the tree.
 * Return: (1) True or (0) False.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_is_full_t(tree) == 0 || leaves_in_same_level(tree) == -1)
		return (0);
	return (1);
}
