#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child in binary tree
 * @tree: pointer to the root node
 * Return: number of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (0);
}
