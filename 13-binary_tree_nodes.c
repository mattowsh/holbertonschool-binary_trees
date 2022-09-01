#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree : a pointer to the root node of the binary tree
 *
 * Return: the quantity of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t qty_nodes = 0;

	if (!tree)
		return (0);
	return (rec_bin_tree_nodes(qty_nodes, tree) - 1);
}

/**
 * rec_bin_tree_nodes - Calculates the quantity of nodes with at least 1 child
 * @qty_nodes : quantity of nodes
 * @tree : a pointer to the node of the binary tree
 *
 * Return: the quantity of nodes
 */

size_t rec_bin_tree_nodes(size_t qty_nodes, const binary_tree_t *tree)
{
	size_t left = 0, right = 0, result = 0;

	if (tree->left)
		left = rec_bin_tree_nodes(qty_nodes, tree->left);
	if (tree->right)
		right = rec_bin_tree_nodes(qty_nodes, tree->right);

	result = left + right;

	if (!tree->left || !tree->right)
		result++;

	return (result);
}
