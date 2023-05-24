#include "tree.h"

void tree_print(struct tree_node *r)
{
    if (r != NULL)
    {
        tree_print(r->lchild);
        printf("%d\n", r->value);
        tree_print(r->rchild);
    }
}
 
struct tree_node *tree_new(int v)
{
    struct tree_node *w;
 
    w = (struct tree_node *) malloc(sizeof(struct tree_node));
    w->value = v;
    w->lchild = NULL;
    w->rchild = NULL;
 
    return w;
}

void tree_print_dot_body(struct tree_node *r)
{
    if (r != NULL)
    {
        tree_print_dot_body(r->lchild);
        printf("  \"%p\" [label=\"{%p|%d|{%p|%p}}\"];\n",
               (void *) r,
	       r,
	       r->value,
	       r->lchild,
	       r->rchild);
	if (r->lchild)
            printf("  \"%p\" -> \"%p\";\n", r, r->lchild);
	if (r->rchild)
            printf("  \"%p\" -> \"%p\";\n", r, r->rchild);
        tree_print_dot_body(r->rchild);
    }
}
 
void tree_print_dot(struct tree_node *r)
{
    printf("%s", DOT_HEADER);
    tree_print_dot_body(r);
    printf("%s", DOT_FOOTER);
}

void tree_insert(struct tree_node **r, struct tree_node *w)
{
    if ((*r) == NULL)
    {
        (*r) = w;
    }
    else
    {
        if ((*r)->value < w->value)
            tree_insert(&((*r)->rchild), w);
	else
            tree_insert(&((*r)->lchild), w);
    }
}
 
int main(int argc, char **argv)
{
    struct tree_node *root = NULL;
 
    tree_insert(&root, tree_new(4));
    tree_insert(&root, tree_new(7));
    tree_insert(&root, tree_new(2));
    tree_insert(&root, tree_new(1));
    tree_insert(&root, tree_new(3));
    tree_insert(&root, tree_new(5));
    tree_insert(&root, tree_new(9));
 
    tree_print_dot(root);
 
    return 0;
}
