#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function  that checks if a node is a leaf
 *
 * @node: pointer on parent's adress
 *
 * Return: 1 for true or 0 for false
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}

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

	if (left_height >= right_height)
	{
		height = left_height + 1;
	}
	else
	{
		height = right_height + 1;
	}

	return (height);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: pointer on parent's adress
 *
 * Return: 1 for true or 0 for false
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
	return (1);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left != right)
	return (0);

	return (binary_tree_is_perfect(tree->left) &&
	binary_tree_is_perfect(tree->right));

}



/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer on parent's adress
 *
 * Return: measures the balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}

/**
 * binary_tree_is_complete - function that checks if a binary tree is complete
 *
 * @tree: pointer on parent's adress
 *
 * Return: 1 for true or 0 for false
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int balance;
	int result;

	if (tree == NULL)
		return (0);

	balance = binary_tree_balance(tree);

	if (balance < 0 || balance > 1)
		return (0);

	if (tree->left == NULL || tree->right == NULL)
		return (1);

	if (balance == 0)
		if (binary_tree_is_perfect(tree->left) == 0)
			return (0);

	result = binary_tree_is_perfect(tree);
	printf("result of binary tree is full:%d n = %d\n", result, tree->n);

	return (binary_tree_is_complete(tree->left) &&
		binary_tree_is_complete(tree->right));
}
