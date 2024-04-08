#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
* Return: hight, otherwise 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t l = 0, r = 0;

if (tree == NULL)
return (0);

if (tree->left != NULL)
l = binary_tree_height(tree->left) + 1;

if (tree->right != NULL)
r = binary_tree_height(tree->right) + 1;

if (l > r)
return (l);
else
return (r);
}
