#include "binary_trees.h"


/**
 * size_t binary_tree_depth - measures the depth of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the depth.
 * Return: 0, else return depth
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
