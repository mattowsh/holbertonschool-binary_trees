#include "binary_trees.h"
#include <math.h>
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if it is true, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0, leaves = 0, must_have = 2, i;

	if (!tree)
		return (0);
	height = _binary_tree_height(tree);
	leaves = _binary_tree_leaves(tree);
	if (height == 0)
		return (1);
	/* calculate the leaves that we must have */
	for (i = 1; i < height; i++)
		must_have *= 2;
	if (leaves ==  must_have)
		return (1);
	else
		return (0);
}
/**
 * _binary_tree_height - Measures the height of a binary tree
 * @tree : a pointer to the root node of the tree to measure the height
 *
 * Return: the height of the node, 0 if the binary tree is NULL
 */

int _binary_tree_height(const binary_tree_t *tree)
{
	int height = 0;

	if (!tree)
		return (0);
	return (_rec_bin_tree_height(height, tree));
}

/**
 * _rec_bin_tree_height - Calculates the height of a binary tree
 * @depth : depth of the node
 * @tree : a pointer to the node of the binary tree
 *
 * Return: the height of the node
 */

int _rec_bin_tree_height(int depth, const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0, result = 0;

	if (tree->left)
		height_left = _rec_bin_tree_height(depth + 1, tree->left);

	if (tree->right)
		height_right = _rec_bin_tree_height(depth + 1, tree->right);

	if (height_right > height_left)
		result = height_right;
	else
		result = height_left;

	if (depth > 0)
		result++;
	return (result);
}
/**
 * _binary_tree_leaves - Counts the leaves in a binary tree
 * @tree : a pointer to the root node of the binary tree
 *
 * Return: the quantity of leaves in the binary tree
 */

int _binary_tree_leaves(const binary_tree_t *tree)
{
	int qty_leaves = 0;

	if (!tree)
		return (0);
	return (_rec_bin_tree_leaves(qty_leaves, tree));
}

/**
 * _rec_bin_tree_leaves - Calculates the quantity of leaves of a binary tree
 * @qty_leaves : quantity of leaves
 * @tree : a pointer to the node of the binary tree
 *
 * Return: the quantity of leaves
 */

int _rec_bin_tree_leaves(int qty_leaves, const binary_tree_t *tree)
{
	int left = 0, right = 0, result = 0;

	if (tree->left)
		left = _rec_bin_tree_leaves(qty_leaves, tree->left);
	if (tree->right)
		right = _rec_bin_tree_leaves(qty_leaves, tree->right);

	result = left + right;

	if (!tree->left && !tree->right)
		result++;

	return (result);
}
