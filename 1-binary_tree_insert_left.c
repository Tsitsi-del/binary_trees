#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node on left side
 * @parent - root of the tree
 * @value - value of the node to be inserted
 * Return: pointer to the created node, NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
        {
		return (NULL);
        }

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = parent->left;
	newNode->right = NULL;
	parent->left = newNode;

	if (newNode->left)
	{
		newNode->left->parent = newNode;
	}
	return (newNode);
}
