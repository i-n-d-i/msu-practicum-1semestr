#include <stdio.h>
#include <stdlib.h>

//Найти родителя данного элемента дерева

struct node
{
    int el;
    struct node *left;
    struct node *right;
};

typedef struct node Node;
typedef Node *tree;
 
//вставить элемент в дерево (рекурсивная функция)
tree insert(tree root, int x)
{
    if(root == NULL)
    {
        tree p = malloc(sizeof(Node));
        p -> el = x;
        p -> left = p -> right = NULL;
        return p;
    }
    if(x > root -> el)
        root -> right = insert(root -> right, x);
    else
        root -> left = insert(root -> left, x);
    return root;
}
    

int parent(tree root, int x)
{
    if(root == NULL)
    {
        printf("there is no element\n");
        return 0;
    }
    if(root -> el == x)
    {
        printf("no parent\n");
        return 0;
    }
    if(x > root -> el)
        if(root -> right && x == root -> right -> el)
            printf("parent of this element: %d\n", root -> el);
        else
            return parent(root -> right, x);
    else
        if(root -> left && x == root -> left -> el)
            printf("parent of this element: %d\n", root -> el);
        else
            return parent(root -> left, x);
}

int main()
{
    tree root = NULL;
    int n, m, x;
    printf("how many elements in tree?\n");
    scanf("%d", &n);
    if(n == 0)
    {
        printf("tree is empty\n");
        return 0;
    }
    printf("enter tree elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        root = insert(root, m);
    }
    printf("parent of what element do you want to find?\n");
    scanf("%d", &x);
    parent(root, x);
    return 0;
}

