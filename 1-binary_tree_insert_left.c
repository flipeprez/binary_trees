#include "binary_trees.h"

/**
 * binary_tree_t *binary_tree_insert_left - a function that inserts
 * a node as the left-child of another node.
 * @parent: pointer to a parent node.
 * @value: value to store in the nnew node.
 * Return: return a pointer to the created node,
 * or NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *N_node;

	if (parent == NULL)
		return (NULL);

	N_node = binary_tree_node(parent, value);
		if (N_node == NULL)
			return (NULL);
	if (parent->left == NULL)
		parent->left = N_node;
	else
	{
		N_node->left = parent->left;
		parent->left = N_node;
		N_node->left->parent = N_node;
	}
	return (N_node);
}

