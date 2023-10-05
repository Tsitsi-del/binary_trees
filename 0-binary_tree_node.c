#include "binary_trees.h"

/**
 * binary_tree_node - new binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the node
 * Return: pointer to the new node, NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!newNode)
	{
		return (NULL);
	}
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}

