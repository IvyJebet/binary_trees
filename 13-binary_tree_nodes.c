#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a tree
 * @tree: A pointer to the root node of the tree to count the nodes of
 *
 * Description: This function counts the number of nodes in a binary
 *              tree that have at least one child
 *              (either a left child, a right child, or both).
 *              If the tree is NULL, the function returns 0.
 *
 * Return: The number of nodes with at least 1 child in the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL || tree->right != NULL)
			nodes++;

		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);

	}
	return (nodes);
}
