#include "binary_trees.h"
/**
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t l = 0, r = 0;

if (tree == NULL)
return (0);

l = binary_tree_height(tree->left);
r = binary_tree_height(tree->right);

if (l > r)
return (l + 1);
else
return (r + 1);
}