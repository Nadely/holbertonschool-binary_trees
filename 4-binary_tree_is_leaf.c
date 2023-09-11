#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function  that checks if a node is a leaf
 *
 * @node: pointer on parent's adress
 *
 * Return: new node or null on failure
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
