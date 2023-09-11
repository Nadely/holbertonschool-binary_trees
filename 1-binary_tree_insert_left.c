#include "binary_trees.h"

/**
 * binary_tree_insert_left - function for create a new node for a tree
 *
 * @parent: pointer on parent's adress
 * @value: value in new node
 *
 * Return: new node or null on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (parent->left == NULL)
		parent->left = new_node;

	else
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	new_node->parent = parent;

	return (new_node);
}
