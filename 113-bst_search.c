#include "binary_trees.h"
/**
 * bst_search - searches for a value in a Binary Search Tree.
 * @tree: pointer to the root node of the BST to search.
 * @value: he value to search in the tree.
 * Return: pointer to the node containing a value equals to value
 * or if nothing is found return (NULL).
*/
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *curr;

	if (!tree)
		return (NULL);

	curr = (bst_t *)tree;
	while (curr)
	{
		if (value < curr->n)
			curr = curr->left;
		else if (value > curr->n)
			curr = curr->right;
		else
			return (curr);
	}
	return (NULL);
}
