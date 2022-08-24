#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - insert to the left node
 * @parent: pointer to parent node
 * @value: value of the node
 * Return: the left child
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (parent == NULL)
	{
		return (NULL);
	}
	if (left_child == NULL)
	{
		return (NULL);
	}
	left_child->parent = parent;
	left_child->n = value;
	left_child->left = NULL;
	left_child->right = NULL;
	left_child->left = parent->left;
	if (left_child->left != NULL)
		left_child->left->parent = left_child;
	parent->left = left_child;
	return (left_child);
}
