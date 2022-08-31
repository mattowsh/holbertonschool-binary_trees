#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent : a pointer to the node to insert the left-child in
 * @value : the value to store in the new node
 *
 * Return:a pointer to the created node, or NULL on failure or if
 * parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (parent->left == NULL)
		parent->left = newnode;
	else if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left = newnode;
		newnode->left->parent = newnode;
	}

	return (newnode);
}
