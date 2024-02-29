#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Description: This function measures the balance factor of a binary tree,
 *              which is defined as the difference in height between the left
 *              and right subtrees of a given node. If the tree is NULL,
 *              the function returns 0.
 *
 * Return: The balance factor of the binary tree, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Description: This function recursively calculates the height of a tree.
 *              The height of a tree is defined as the number of edges on
 *              the longest path from the root node to a leaf node.
 *
 * Return: If tree is NULL, the function returns 0.
 * Otherwise, it returns the height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}
