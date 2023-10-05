#include "binary_trees.h"

/**
 * binary_tree_nodes - function to count nodes
 * with at least one child in a binary tree
 * @tree - pointer to the root node of
 * the tree to count nodes
 * Return: number of internal nodes in
 * the binary tree, 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    if (tree->left != NULL || tree->right != NULL)
    {
        return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
    }
    else
        return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}