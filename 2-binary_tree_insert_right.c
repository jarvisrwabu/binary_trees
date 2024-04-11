#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert node at right of parent
 *
 * @parent: Pointer to the parent node
 * @value: Value to put in the node
 *
 * Return: Pointer to the node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *p;

	if (parent == NULL) /*Has to be a child node*/
		return (NULL);

	if (p == NULL)
		return (NULL);

	p = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		p->right = parent->right;
		parent->right->parent = p;
	}
	parent->right = p;
	return (p);
}
