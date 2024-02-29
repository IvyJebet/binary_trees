#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: A pointer to the node to find the uncle.
 *
 * Description: This function finds the uncle of a given node in a binary tree.
 *              The uncle of a node is the sibling of its parent.
 *
 * Return: A pointer to the uncle node, or NULL if:
 *         - node is NULL
 *         - node has no parent or grandparent
 *         - node's parent has no sibling (uncle)
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	if (node->parent->parent->right != node->parent)
		return (node->parent->parent->right);

	return (NULL);
}
