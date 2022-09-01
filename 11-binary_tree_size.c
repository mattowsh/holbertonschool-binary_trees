#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree : a pointer to the root node of the tree to measure the size
 *
 * Return: the size of the binary tree, 0 if the tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t base_size = 0;

	if (!tree)
		return (0);
	return (rec_bin_tree_size(base_size, tree));
}

/**
 * rec_bin_tree_size - Calculates the size of a binary tree
 * @base_size : size of the node
 * @tree : a pointer to the node of the binary tree
 *
 * Return: the size of the node
 */

size_t rec_bin_tree_size(size_t base_size, const binary_tree_t *tree)
{
	size_t size_left = 0, size_right = 0, result = 0;

	if (tree->left)
		size_left = rec_bin_tree_size(base_size + 1, tree->left);

	if (tree->right)
		size_right = rec_bin_tree_size(base_size + 1, tree->right);

	result = size_left + size_right + 1; /* to contemplated himself */
	return (result);
}
