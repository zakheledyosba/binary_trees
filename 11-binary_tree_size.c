#include "binary_trees.h"


/**
 * size_t binary_tree_size - measures the depth of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the size.
 * Return: the size of the tree.
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
