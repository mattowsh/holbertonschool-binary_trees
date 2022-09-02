#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if is a full tree or 0 if not or is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full = 0;

	if (!tree)
		return (0);
	return (rec_is_full(is_full, tree));
}

/**
 * rec_is_full - binary tree is full recursive
 * @is_full: verificates if a binary tree is full or not
 * @tree: a pointer to the node of the binary tree
 * Return: 1 if it is full, otherwise 0
 */
int rec_is_full(int is_full, const binary_tree_t *tree)
{
	int left = 1, right = 1;

	if (tree->left && !tree->right)
		return (0);
	if (tree->right && !tree->left)
		return (0);
	if (tree->left)
		left = rec_is_full(is_full, tree->left);
	if (tree->right)
		right = rec_is_full(is_full, tree->right);
	if (left != right || left + right == 0)
		return (0);
	else
		return (1);
}
