#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first: pointer on first node
 * @second: pointer on second node
 *
 * Return: pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (first->parent == second)
		return ((binary_tree_t *)second);

	if (second->parent == first)
		return ((binary_tree_t *)first);

	if (first->parent->parent == second)
		return ((binary_tree_t *)second);

	if (second->parent->parent == first)
		return ((binary_tree_t *)first);

	if (first->parent)
		return (binary_trees_ancestor(first->parent, second));

	if (second->parent)
		return (binary_trees_ancestor(first, second->parent));

	return (NULL);
}
