#include "binary_trees.h"

/**
 * mul - The opcode mul multiplies the second top element of the stack with the
 * top element of the stack.
 * @stack: double pointer to the top of the stack
 * @line_number: line number of the current opcode
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
