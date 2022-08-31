#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent : a pointer to the node to insert the right-child in
 * @value : the value to store in the new node
 *
 * Return:a pointer to the created node, or NULL on failure or if
 * parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (parent->right == NULL)
		parent->right = newnode;
	else if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right = newnode;
		newnode->right->parent = newnode;
	}

	return (newnode);
}
