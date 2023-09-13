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
	const binary_tree_t *second_parent;
	const binary_tree_t *first_parent;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (first->parent == second)
		return ((binary_tree_t *)second);

	if (second->parent == first)
		return ((binary_tree_t *)first);

	first_parent = first->parent;

	while (first_parent)
	{
		second_parent = second;
		while (second_parent)
		{
			if (first_parent == second_parent)
				return ((binary_tree_t *)first_parent);
			second_parent = second_parent->parent;
		}
		first_parent = first_parent->parent;
	}

	return (NULL);
}
