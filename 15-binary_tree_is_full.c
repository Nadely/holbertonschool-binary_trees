#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function  that checks if a node is a leaf
 *
 * @node: pointer on parent's adress
 *
 * Return: 1 for true or 0 for false
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 * @tree: pointer on parent's adress
 *
 * Return: counts the nodes
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (left == 0 || right == 0)
		return (0);

	return (1);
}
