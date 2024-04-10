#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node
 *
 * @parent: Pointer to the parent node
 * @value: Value to put in the new node
 *
 * Return: Pointer to the node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*If parent is NULL node is the ROOT!*/
	binary_tree_t *p = malloc(sizeof(binary_tree_t));

	if (p == NULL)
	{
		return (NULL); /*On Failure*/
	}

	p->n = value;
	p->parent = parent;
	p->left = NULL;
	p->right = NULL;
	return (p);
}
