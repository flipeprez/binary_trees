#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: size.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
