#include "binary_trees.h"

/**
 * binary_tree_preorder_bis - function that goes through a binary
 * tree using pre-order traversal
 *
 * @tree: pointer on parent's adress
 * @func: for go in tree
 *
 * Return: nothing
 */

void binary_tree_preorder_bis(const binary_tree_t *tree, void (*func)(int),
size_t i)
{
	binary_tree_t *tree_bis = (binary_tree_t *)tree;
	size_t j = 0;

	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_preorder_bis(tree->left, func, i);
	binary_tree_preorder_bis(tree->right, func, i);

	while (tree_bis->parent != NULL)
	{
		tree_bis = tree_bis->parent;
		j++;
	}

	if (j == i)
		func(tree->n);
}

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

	if (tree->left != NULL && tree->right != NULL)
	{
		if (left_height > right_height)
		{
			height = left_height + 1;
		}
		else
		{
			height = right_height + 1;
		}
	}

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	return (height);
}

/**
 * binary_tree_levelorder - function that goes through a binary tree
 * using level-order traversal
 *
 * @tree: pointer on parent's adress
 * @func: pointer to one function
 *
 * Return: nothings
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height;
	size_t i = 0;

	height = binary_tree_height(tree);

	while (i <= height)
	{
		binary_tree_preorder_bis(tree, func, i);
		i++;
	}
}
