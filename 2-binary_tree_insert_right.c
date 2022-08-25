#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node_2 - creates a node
 * @parent: parent of a node
 * @value: node value
 *
 * Return: return the root node
 */
binary_tree_t *binary_tree_node_2(binary_tree_t *parent, int value)
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
/**
 * binary_tree_insert_right - insert to the right of node
 * @parent: parent node
 * @value: value of right node
 *
 * Return: returns the right child
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
		if (parent == NULL)
                return (NULL);
        binary_tree_t *right_child = binary_tree_node_2(parent, value);

        if (right_child == NULL)
                return (NULL);
        
        right_child->right = parent->right;
        if (parent->right != NULL)
        {
                right_child->right->parent = right_child;
        }
        parent->right = right_child;
        return (right_child);

}
