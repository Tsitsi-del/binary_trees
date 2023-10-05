#include "binary_trees.h"

/**
 * binary_tree_leaves - Count number of leaf
 * nodes in a binary tree
 * @tree: pointer to the root node
 * of the tree to count leaves
 * Return: number of leaf nodes in the binary tree, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
}
