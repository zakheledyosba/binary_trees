#include "binary_trees.h"


/**
 * binary_tree_insert_left- insert a node as a left-child of a parent.
 * @parent: a pointer ti the node to insert the left-child in.
 * @value: The vaule to store in the new node
 * Return: NULL - error occurs, otherwise -  a pointer to a new node.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if  (parent == NULL)
		return (NULL);

	newnode = binary_binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}

	parent->left = newnode;

	return (newnode);
}
