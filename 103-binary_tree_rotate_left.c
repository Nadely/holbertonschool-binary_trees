#include "binary_trees.h"

/**
 * binary_tree_rotate_left - function that performs a left-rotation on
 * a binary tree
 *
 * @tree: pointer on parent's adress
 *
 * Return: pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root = tree->right;

	if (tree == NULL)
		return (NULL);

	if (tree->right == NULL || new_root == NULL)
		return (tree);

	tree->right = new_root->left;

	if (new_root->left != NULL)
		new_root->left->parent = tree;

	new_root->parent = tree->parent;

	if (tree->parent != NULL)
	{
		if (new_root->parent->left == tree)
			tree->parent->left = new_root;
		else
			tree->parent->right = new_root;
	}

	new_root->left = tree;
	tree->parent = new_root;

	return (new_root);
}
