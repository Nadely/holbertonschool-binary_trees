#include "binary_trees.h"

/**
 * bst_insert - function that performs a right-rotation on
 * a binary tree
 *
 * @tree: double pointer to the root node of the BST to insert the value
 * @value: value to store in the node to be inserted
 *
 * Return: a pointer to the created node, or NULL on failure
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		if (*tree == NULL)
		{
			return (NULL);
		}
		return (*tree);
	}

	if (value < (*tree)->n)
	{
		if ((*tree)->left == NULL)
			return (binary_tree_insert_left(*tree, value));
		return (bst_insert(&(*tree)->left, value));
	}
	else if (value > (*tree)->n)
	{
		if ((*tree)->right == NULL)
			return (binary_tree_insert_right(*tree, value));
		return (bst_insert(&(*tree)->right, value));
	}

	return (NULL);
}

/**
 * binary_tree_insert_left - function for create a new node for a tree at left
 *
 * @parent: pointer on parent's adress
 * @value: value in new node
 *
 * Return: new node or null on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (parent == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->parent = parent->left->parent;
		parent->left->parent = new_node;
	}

	parent->left = new_node;
	new_node->parent = parent->left->parent;

	return (new_node);
}

/**
 * *binary_tree_insert_right - function for create a new node for a tree at
 *  right
 *
 * @parent: pointer on parent's adress
 * @value: value in new node
 *
 * Return: new node or null on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (parent == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->parent = parent->right->parent;
		parent->right->parent = new_node;
	}

	parent->right = new_node;
	new_node->parent = parent->right->parent;

	return (new_node);
}
