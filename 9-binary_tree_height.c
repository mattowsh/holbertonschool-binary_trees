#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree - a pointer to the root node of the tree to measure the height
 *
 * Return: the height of the node, 0 if the binary tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (!tree)
		return (0);
	return (rec_bin_tree_height(height, tree));
}

/**
 * rec_bin_tree_height - Calculates the height of a binary tree
 * @depth : depth of the node
 * @tree : a pointer to the node of the binary tree
 *
 * Return: the height of the node
 */

size_t rec_bin_tree_height(size_t depth, const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0, result = 0;

	if (tree->left)
		height_left = rec_bin_tree_height(depth + 1, tree->left);

	if (tree->right)
		height_right = rec_bin_tree_height(depth + 1, tree->right);

	if (height_right > height_left)
		result = height_right;
	else
		result = height_left;

	if (depth > 0)
		result++;
	return (result);
}
