#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer on parent's adress
 *
 * Return: measures the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;
	size_t height = 1;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
	{
		height = left_height + 1;
	}
	else
	{
		height = right_height + 1;
	}

	return (height);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @node: pointer on parent's adress
 *
 * Return: 1 for true or 0 for false
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
		return (1);
	else
		return (0);

	return (0);
}
