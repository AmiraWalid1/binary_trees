#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: is a pointer to the root node of the tree.
 * Return: (1) True or (0) False.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left && !tree->right) ||
	 (!tree->left && tree->right))
		return (0);
	if (tree != NULL && (!tree->left && !tree->right))
		return (1);
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
