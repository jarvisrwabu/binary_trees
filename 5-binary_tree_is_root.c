#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if node is root
 *
 * @node: Node to check
 *
 * Return: 1 if is root else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	else if (node->parent == NULL)
		return (1);

	else
		return (0);
}
