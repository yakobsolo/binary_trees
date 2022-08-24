#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - make a node
 * @parent: pointer to parent
 * @value: value for the node
 *
 * Return: the created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (root == NULL)
	{
		return (NULL);
	}
	root->n = value;
	root->parent = parent;
	root->left = NULL;
	root->right = NULL;
	return (root);
}
