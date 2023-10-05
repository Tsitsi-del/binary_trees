#include "binary_trees.h"

/**
 * binary_tree_sibling - function to find the
 * sibling of a node in binary tree
 * @node: pointer to the node
 * Return: pointer to the sibling node or
 * NULL if node is NULL, the parent is NULL,
 * or the node has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}

	if (node->parent->right == node)
	{
		return (node->parent->left);
	}

	return (NULL);
}
