#include "binary_trees.h"

/**
 * binary_tree_leaves -  function that counts the leaves in a binary tree
 *
 * @tree: pointer on parent's adress
 *
 * Return: counts the leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves = 0;
	size_t right_leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves + right_leaves);
}
