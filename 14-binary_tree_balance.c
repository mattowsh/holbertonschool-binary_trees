#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree : a pointer to the root node of the binary tree
 *
 * Return: the balance factor, an int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int qty_level = 1;

	if (!tree)
		return (0);
	return (balance(qty_level, tree->left) - balance(qty_level, tree->right));
}

/**
 * balance - Calculates the balance factor of a binary tree
 * @qty_level : quantity of nodes
 * @tree : a pointer to the node of the binary tree
 *
 * Return: the balance factor, an int
 */

int balance(int qty_level, const binary_tree_t *tree)
{
	int left = 0, right = 0, result = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = balance(qty_level + 1, tree->left);
	if (tree->right)
		right = balance(qty_level + 1, tree->right);

	if (left > right)
		result = left + 1;
	else
		result = right + 1;

	return (result);
}
