#include "binary_trees.h"

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

	if (parent == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

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
