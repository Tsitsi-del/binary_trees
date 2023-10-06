#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function to check if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 if the tree is perfect
 * otherwise 0 or if tree is NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h = 0;
	size_t n = 0;
	size_t pw = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	h = binary_tree_height(tree);
	n = binary_tree_size(tree);
	pw = (size_t)_pow_rec(2, h + 1);

	return (pw - 1 == n);
}
/**
 * _pow_rec - function to return a raised to the power of b
 * @a: the value to power
 * @b: the power to raise
 * Return: a to the power of b
 * or -1 if y is negative
 */

int _pow_rec(int a, int b)
{
	if (b < 0)
	{
		return (-1); }
	if (b == 0)
	{
		return (1); }
	else
		return (a * _pow_rec(a, b - 1));
}

/**
 * binary_tree_size - function to measure
 * the size of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: size of the binary tree, 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0); }

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_height - function to measure height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: height of the binary tree, 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0;
	size_t r_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (l_height > r_height ? l_height : r_height);
}
