#include "binary_trees.h"

/**
 * binary_tree_node - function for create a new node for a tree
 *
 * @parent: pointer on parent's adress
 * @value: value in new node
 *
 * Return: new node or null on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)

{
	binary_tree_t *new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
	return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);
}
