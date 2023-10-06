#include "binary_trees.h"

/**
 * binary_tree_height_leftmost -function to measure
 * the height of the leftmost path of a tree
 * @tree: pointer to the root node of the tree
 * Return: The height of the leftmost
 * 0 if tree is NULL.
 */

size_t binary_tree_height_leftmost(const binary_tree_t *tree)
{
	size_t h = 0;

	while (tree != NULL)
	{
		h++;
		tree = tree->left;
	}

	return (h);
}

/**
 * binary_tree_is_perfect - function to check if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 if the tree is perfect
 * otherwise 0 or if tree is NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l_height, h = 0;

	if (!tree)
		return (0);

	l_height = binary_tree_height_leftmost(tree);

	while (tree != NULL)
	{
		if ((tree->left == NULL && tree->right != NULL) ||
				(tree->left != NULL && tree->right == NULL))
		{
			return (0);
		}

		h = binary_tree_height_leftmost(tree->right);

		if (h != l_height)
			return (0);

		tree = tree->left;
		l_height--;
	}

	return (1);
}
