#include "binary_trees.h"


/**
 * binary_tree_is_leaf- checks id the node id a leaf of a binary tree.
 * @node: A pointer to the node to check.
 * Retrun: if the node is a leaf - 1,otherwise - 0.
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
