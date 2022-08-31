#include "binary_tree.h"

/**
 * binary_tree_preorder -
 *
 *
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	
	func(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, func(tree->n));
}
