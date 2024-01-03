#include "binary_trees.h"
/**
 * bst_insert - inserts a value in a Binary Search Tree.
 * @tree: double pointer to the root node of the BST to insert the value.
 * @value: the value to store in the node to be inserted.
 * Return: pointer to the created node, or NULL on failure.
*/
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *curr_node;

	if (!tree)
		return (NULL);

	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}

	curr_node = *tree;
	while (curr_node)
	{
		if (value < curr_node->n)
		{
			if (curr_node->left == NULL)
			{
				curr_node->left = binary_tree_node(curr_node, value);
				return (curr_node->left);
			}
			else
				curr_node = curr_node->left;
		}
		else if (value > curr_node->n)
		{
			if (curr_node->right == NULL)
			{
				curr_node->right = binary_tree_node(curr_node, value);
				return (curr_node->right);
			}
			else
				curr_node = curr_node->right;
		}
		else
			return (NULL);
	}
	return (NULL);
}
