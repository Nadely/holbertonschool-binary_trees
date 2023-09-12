#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 * @tree: pointer on parent's adress
 *
 * Return: counts the nodes
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if ((tree->left != NULL && tree->right != NULL) &&
		binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right))
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL && tree->right != NULL)
		return (0);

	if (tree->right == NULL && tree->left != NULL)
		return (1);
		
	return (0);
}