#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of
 * a node in a binary tree
 *
 * @tree: pointer on parent's adress
 *
 * Return: measures the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		return (1 + binary_tree_depth(tree->parent));

	else
	return (0);
}
