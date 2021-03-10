#include "binary_trees.h"

/**
  * binary_tree_leaves - count the leaves in a tree
  * @tree: tree to check
  * Return: the number of leaves
  */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		count = binary_tree_leaves(tree->left);
	if (tree->right != NULL)
		count = binary_tree_leaves(tree->left);
	return (count + 1);
}
