#include "binary_trees.h"

/**
 * binary_tree_delete - Delete a binary tree
 *
 * @tree: Binary tree to delete
 *
 * Return: Nothing (void)
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/*Base case - Delete a tree*/

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}