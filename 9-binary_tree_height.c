#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
* Return: hight, otherwise 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t l, r;

if (tree == NULL)
return (0);

if (tree->left == NULL)
l = 0;

if (tree->right == NULL)
r = 0;

l = binary_tree_height(tree->left) + 1;
r = binary_tree_height(tree->right) + 1;

return (l > r ? l : r);
}
