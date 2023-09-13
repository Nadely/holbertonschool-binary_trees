#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 *
 * @node: pointer on parent's adress
 *
 * Return: the sibling of a node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (parent->left == node)
	{
		if (parent->right)
			return (parent->right);
	}
	else
	{
		if (parent->left)
			return (parent->left);
	}

	return (NULL);
}
