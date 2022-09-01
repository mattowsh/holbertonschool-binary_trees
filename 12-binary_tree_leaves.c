#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree : a pointer to the root node of the binary tree
 *
 * Return: the quantity of leaves in the binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t qty_leaves = 0;

	if (!tree)
		return (0);
	return (rec_bin_tree_leaves(qty_leaves, tree));
}

/**
 * rec_bin_tree_leaves - Calculates the quantity of leaves of a binary tree
 * @qty_leaves : quantity of leaves
 * @tree : a pointer to the node of the binary tree
 *
 * Return: the quantity of leaves
 */

size_t rec_bin_tree_leaves(size_t qty_leaves, const binary_tree_t *tree)
{
	size_t left = 0, right = 0, result = 0;

	if (tree->left)
		left = rec_bin_tree_leaves(qty_leaves, tree->left);
	if (tree->right)
		right = rec_bin_tree_leaves(qty_leaves, tree->right);

	result = left + right;

	if (!tree->left && !tree->right)
		result++;

	return (result);
}
