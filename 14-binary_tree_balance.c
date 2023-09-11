#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer on parent's adress
 *
 * Return: measures the balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;
	int result = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_balance(tree->left);
	right_height = binary_tree_balance(tree->right);

	if (tree->left != NULL && tree->right != NULL)
	{
		result = left_height - right_height;
	}
	else if (tree->left != NULL)
	{
		result = left_height + 1;
	}
	else if (tree->right != NULL)
	{
		result = right_height - 1;
	}
	else
	return (0);

	return (result);
}
