#include "binary_trees.h"
/**
* *binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: pointer to the parent new node
* @value: value of new node
* Return: new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
binary_tree_t *old_node = parent->left;

if (new_node == NULL)
return (NULL);

new_node->n = value;
new_node->parent = parent;
if (parent->left == NULL)
parent->left = new_node;
else
old_node->parent = new_node;
new_node->left = old_node;
parent->left = new_node;

return (new_node);
}
