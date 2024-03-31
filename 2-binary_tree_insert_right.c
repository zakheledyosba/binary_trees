#include "binary_trees.h"


/**
 * binary_tree_insert_right- insert a node as a right-child of a parent.
 * @parent: a pointer ti the node to insert the right-child in.
 * @value: The vaule to store in the new node
 * Return: NULL - error occurs, otherwise -  a pointer to a new node.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t = newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}
	parent->right = newnode;
	return (newnode);
}
