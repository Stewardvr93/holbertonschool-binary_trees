#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: is a pointer to the root node of the tree to check
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp = NULL;

	if (!node || !node->parent)
		return (NULL);

	/*tmp = malloc(sizeof(binary_tree_t));*/
	/*if (!tmp)*/
	/*  return (NULL);*/

	tmp = node->parent;

	return (node == tmp->left ? tmp->right : tmp->left);
}
