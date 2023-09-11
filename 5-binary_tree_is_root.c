#include "binary_trees.h"

/**
 * binary_tree_is_root - function  that checks if a node is a leaf
 *
 * @node: pointer on parent's adress
 *
 * Return: 1 for true or 0 for false
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
