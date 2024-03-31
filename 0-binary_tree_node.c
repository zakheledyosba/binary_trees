#include "binary_trees.h"


/**
 * binary_tree_node - creates a binary tree node.
 * @parent: Pointer to the parent node.
 * @value: The value to put in the new node
 * Return: NULL - if an error occurs
 * else -a pointer to a new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (new);
}
