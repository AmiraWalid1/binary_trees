#include "binary_trees.h"
/**
 * array_to_bst - builds a Binary Search Tree from an array.
 * @array: a pointer to the first element of the array to be converted.
 * @size: is the number of element in the array.
 * Return: pointer to the root node of the created BST, or NULL on failure.
*/
bst_t *array_to_bst(int *array, size_t size)
{
	size_t idx;
	bst_t *root;

	if (array == NULL || size <= 0)
		return (NULL);

	root = NULL;
	for (idx = 0; idx < size ; idx++)
	{
		bst_insert(&root, *(array + idx));
	}
	return (root);
}
