#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree : a pointer to the root node of the binary tree
 *
 * Return: the balance factor, an int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int qty_level = 0;

	if (!tree)
		return (0);
	return (rec_bin_tree_balance(qty_level, tree));
}

/**
 * rec_bin_tree_balance - Calculates the balance factor of a binary tree
 * @qty_level : quantity of nodes
 * @tree : a pointer to the node of the binary tree
 *
 * Return: the balance factor, an int
 */

int rec_bin_tree_balance(int qty_level, const binary_tree_t *tree)
{
	int left = 0, right = 0, result = 0;

	if (tree->left)
		left = rec_bin_tree_balance(qty_level + 1, tree->left);
	if (tree->right)
		right = rec_bin_tree_balance(qty_level + 1, tree->right);

	result = left - right;

	if (qty_level > 0)
		result++;
	return (result);
}
