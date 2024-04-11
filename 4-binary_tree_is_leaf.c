#include "binary_trees.h"
/**
 * binary_tree_is_leaf- Check if node is a leaf
 *
 * @node: Node to check
 *
 * Return: Integer value
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	else if (node->left == NULL && node->right == NULL)
		return (1);

	else
		return (0);
}
