#include "binary_trees.h"
/**
 * isBSTUtil - Vérifie si un arbre binaire satisfait la propriété du BST
 *
 * @tree: pointeur vers le nœud de l'arbre
 * @min: valeur minimale autorisée (limite inférieure)
 * @max: valeur maximale autorisée (limite supérieure)
 *
 * Return: 1 si l'arbre est un BST, 0 sinon
 */
int is_bst(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);

	return (is_bst(tree->left, min, tree->n) &&
			is_bst(tree->right, tree->n, max));
}

/**
 * binary_tree_is_bst -checks if a binary tree is a valid Binary Search Tree
 *
 * @tree: pointer on parent's adress
 *
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (!binary_tree_is_bst(tree->left) && !binary_tree_is_bst(tree->right))
		return (1);

	return (is_bst (tree, INT_MIN, INT_MAX));
}
