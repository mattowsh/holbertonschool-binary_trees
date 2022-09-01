#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;
	int balance;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 50);
	root->right = binary_tree_node(root, 100);
	root->left->left = binary_tree_node(root->left, 40);
	root->left->right = binary_tree_node(root->left, 60);
	/*root->right->left = binary_tree_node(root->right, 99);*/
	/*root->right->right = binary_tree_node(root->right, 110);*/

	balance = binary_tree_balance(root);
	printf("Balance factor for tree with root node (%d): %+d\n", root->n, balance);

	binary_tree_print(root);
	binary_tree_delete(root);
	return (0);
}
