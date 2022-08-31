#include "binary_trees.h"
/**
 *
 *
 *
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	while (tree->parent)
	{
		tree = tree->parent;
		height++;
	}
	return (height);
}
