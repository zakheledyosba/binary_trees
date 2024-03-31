#include "binary_trees.h"


/**
 * size_t binary_tree_height - measures the height of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: 0, else return height
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, x = 0;

		l = tree->left ? l + binary_tree_height(tree->left) : 0;
		x = tree->right ? l + binary_tree_height(tree->right) : 0;
		return ((l > x) ? l : x);
	}
	return (0);
}
