#include "binary_trees.h"
/**
 * binary_tree_nodes - count nodes with a least one child
 * @tree: a pointer to the root node.
 * Return: node count.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
