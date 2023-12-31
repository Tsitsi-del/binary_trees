#include "binary_trees.h"

/**
 * binary_tree_is_full - function to check
 * if a binary tree is full
 * @tree: pointer to the root node of the tree
 * Return: 1 if the tree is full, otherwise 0
 * or if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (1);
	}
	if ((tree->left == NULL && tree->right != NULL)
			|| (tree->left != NULL && tree->right == NULL))
	{
		return (0); }
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
