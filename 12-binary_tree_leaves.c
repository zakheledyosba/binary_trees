#include "binary_trees.h"


/**
 * size_t binary_tree_leaves - counts the leaves of a binary tree.
 * @tree: is a pointer to the root node of the tree to count the number of leaves.
 * Return: the number of leaves of the tree.
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? l : 0;
		leaves += binary_tree_leaves(!tree->left);
		leaves += binary_tree_leaves(!tree->right);
	}
	return (leaves);
}
