#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert node as left child of another node
 *
 * @parent: Pointer to the parent node
 * @value: Value to insert
 *
 * Return: Pointer to the node
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *p;

	if (parent == NULL)
	{
		return (NULL);
	}

	p = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		p->left = parent->left;
		parent->left->parent = p;
	}

	parent->left = p;
	return (p);
}

