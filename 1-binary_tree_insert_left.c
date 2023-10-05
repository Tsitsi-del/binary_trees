#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node on left side
 * @parent - root of the tree
 * @value - value of the node to be inserted
 * Return: pointer to the created node, NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary *parent, int value)
{
	binary_tree_t newNode;
	newNode = (binary_tree_t)malloc(sizeof(binary_tree_t));

	if (!parent)
	{
		return (NULL);
	}
	if (!newNode)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->left = left;
	newNode->right = right;

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left = newNode;
	}
	else
	{
		parent->left = newNode;
	}

	return (newNode);
}
