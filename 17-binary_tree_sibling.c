#include "binary_trees.h"

/**
 * binary_tree_t - function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: must return a pointer to the sibling node, otherwise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *aux;

	if (!node || !node->parent)
		return (NULL);
	aux = node->parent;
	if (aux->left == node)
	{
		if (!aux->right)
			return (NULL);
		return (aux->right);
	}
	else
	{
		if (!aux->left)
			return (NULL);
		return (aux->left);
	}
}
