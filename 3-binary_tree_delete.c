#include "binary_trees.h"
/**
*/
void binary_tree_delete(binary_tree_t *tree)
{
if (tree != NULL)
{
tree->left = NULL;
tree->right = NULL;
}
}
