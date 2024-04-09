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

/**
* binary_tree_balance - Measures the balance factor of a binary tree
* @tree: Pointer to the root node of the tree
* Return: Balance factor of the tree, or 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
size_t l = 0, r = 0;
if (tree == NULL)
return (0);

l = binary_tree_height(tree->left);
r = binary_tree_height(tree->right);

return (l - r);
}

#include "binary_trees.h"
/**
* binary_tree_is_full - Checks if a binary tree is full
* @tree: Pointer to the root node of the tree to check
* Return: 1 if the tree is full, 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);

if (tree->left && tree->right)
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

return (0);
}

/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: pointer to the root node
* Return: 1 if perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);

if (!binary_tree_is_full(tree))
return (0);

if (binary_tree_balance(tree) != 0)
return (0);

return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
}
