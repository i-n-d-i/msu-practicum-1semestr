#include <stdio.h>
#include <stdlib.h>
//найти сыновей данного элемента дерева

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

//находит сыновей
void sons(tree root, int x)
{
    if(root == NULL)
        return;
    if(root -> el == x)
    {
        if(root -> right != NULL)
            printf("right son: %d ", root -> right -> el);
        else
            printf("no right son\n");
        if(root -> left != NULL)
            printf("left son: %d ", root -> left -> el);
        else
            printf("no left son\n");
    }
    if(x > root -> el)
        sons(root -> right, x);
    else
        sons(root -> left, x);
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
    printf("sons of what element do you want to find?\n");
    scanf("%d", &x);
    sons(root, x);
    return 0;
}

