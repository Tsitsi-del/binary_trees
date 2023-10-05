#include "binary_trees.h"

/**
 * binary_tree_height - function to measure
 * the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: The height of the binary tree,
 * otherwise 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
	{
		return (0);
	}
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	return (1 + (l_height > r_height ? l_height : r_height));
}

/**
 * binary_tree_is_perfect - function to check
 * if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 if the tree is perfect,
 * 0 otherwise or if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
	{
		return (1);
	}
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height == r_height)
	{
		return (binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right)); }

	return (0);
}
