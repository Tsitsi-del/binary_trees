#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node on right side
 * @parent - root of the tree
 * @value - value of the node to be inserted
 * Return: pointer to the created node, NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

        if (!parent)
        {
                return (NULL);
        }

	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!newNode)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->right)
	{
		newNode->right = parent->right;
		parent->right = newNode;
	}

	parent->right = newNode;
	newNode->parent = parent;

	return (newNode);
}
