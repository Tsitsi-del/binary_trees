#include "binary_trees.h"

/**
 * binary_tree_height - function to measure height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: height of the binary tree, 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (!tree)
	{
		return (0);
	}

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	return (1 + (l_height > r_height ? l_height : r_height));
}
