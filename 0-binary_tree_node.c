#include "binary_trees.h"

/**
 * binary_tree_node - a function that create a binary tree node.
 * @parent: is a pointer to the parent node of the node created.
 * @value: is the value to put in the new node.
 * Return: abinary tree node or null in case of failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *N_node;

	N_node = malloc(sizeof(binary_tree_t));
	if (N_node == NULL)
		return (NULL);
	N_node->left = NULL;
	N_node->right = NULL;
	N_node->n = value;
	N_node->parent = parent;
	return (N_node);
}
