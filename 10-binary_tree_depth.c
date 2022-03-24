#include "binary_trees.h"
/**
 * binary_tree_depth - a fuction that measures the depth
 * of a node in a binary tree.
 * @tree: a pointer to the node to measure the depth.
 * Return: depth node.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;


	if (tree == NULL)
		return (0);
	for (depth = 0; tree->parent != NULL; depth++)
		tree = tree->parent;
	return (depth);
}
