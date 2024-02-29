#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: Pointer to the node to check
 *
 * Description: Function checks if a given node is a root in a binary tree,
 *              If the node is NULL, the function returns 0.
 *
 * Return: 1 if node is a root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1); /* Node is a root */

	return (0); /* Node is not a root */
}
