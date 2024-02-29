#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Description: This function recursively calculates the height of a tree.
 *              The height of a binary tree is defined as the number
 *              of edges on the longest path from the root to a leaf node.
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

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Description: This function recursively calculates the size of a binary tree,
 *              which is the total number of nodes in the tree.
 *
 * Return: If tree is NULL, the function returns 0.
 * Otherwise, it returns the size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Description: This function checks if a binary tree is perfect,
 *              meaning that all its levels are completely filled.
 *              In other words, every level, except possibly the last,
 *              is completely filled, and all nodes are as far left.
 *
 * Return: If tree is NULL or is not perfect, the function returns 0.
 *         Otherwise, it returns 1.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, max_nodes, actual_nodes;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	max_nodes = (1 << height) - 1;
	actual_nodes = binary_tree_size(tree);

	return (actual_nodes == max_nodes);
}
