#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: must return a pointer to the uncle node, otherwise NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *aux;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	aux = node->parent->parent;
	node = node->parent;
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
