#include "binary_trees.h"

/**
 * binary_tree_sibling - function to find
 * the sibling of a node
 * @node - pointer to the node
 * Return: pointer to the sibling node or NULL
 * if node is NULL or has no parent
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
    {
        return (NULL);
    }

    if (node->parent->left == node)
    {
        return (node->parent->right);
    }

    if (node->parent->right == node)
    {
        return (node->parent->left);
    }

    return (NULL);
}

/**
 * binary_tree_uncle - function to find the
 * uncle of a node in a binary tree
 * @node - pointer to the node to find the uncle
 * Return: Pointer to the uncle node or NULL
 * if node is NULL, has no parent,
 * or the parent has no sibling.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
    {
        return (NULL);
    }
    return binary_tree_sibling(node->parent);
}
