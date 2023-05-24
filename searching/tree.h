#include <stdio.h>
#include <stdlib.h>

#define DOT_HEADER "\
digraph G\n\
{\n\
  node\n\
  [\n\
    fontname=Monospace\n\
    shape=record\n\
    style=filled\n\
    fillcolor=grey\n\
  ];\n"

#define DOT_FOOTER "}\n"

/*
 * The structure used to store tree node information.
 */
struct tree_node
{
    int value;
    struct tree_node *lchild;
    struct tree_node *rchild;
};
 
/*
 * Prints the values of each tree node in order.
 *
 * Parameters:
 *   r - the address of the root node.
 */
void tree_print(struct tree_node *r);

/*
 * Creates and initialize a new node.
 *
 * Parameters:
 *   v - the value to be stored in the new node.
 *
 * Returns: the address of the new node.
 */
struct tree_node *tree_new(int v);
 
/*
 * Inserts a new node to the tree.
 *
 * Parameters
 *   r - the address of the variable which stores the address of the root.
 *   w - the address of the new node.
 */
void tree_insert(struct tree_node **r, struct tree_node *w);
 
/*
 * Prints a directed graph description of the tree in DOT format.
 *
 * Parameters:
 *   r - the address of the root node.
 */
void tree_print_dot(struct tree_node *r);
