#include "binary_trees.h"


/**
 * size_t binary_tree_nodes - counts the nodes with a least 1 child in a binary tree.
 * @tree: is a pointer to the root node of the tree to count the number of nodes.
 * Return: node count , else NULL.
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? l : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
