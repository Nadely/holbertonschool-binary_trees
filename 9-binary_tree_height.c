#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a binary
 * tree using pre-order traversal
 *
 * @tree: pointer on parent's adress
 * @func: for go in tree
 *
 * Return: nothing
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;
	size_t height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		height = left_height + 1;
	}
	else
	{
		height = right_height + 1;
	}

	return height;
}
