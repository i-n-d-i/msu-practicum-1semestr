#include <stdio.h>
#include <stdlib.h>
//вывести все элементы дерева, кратные корневому элемента

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

void multiplicity(tree root, int x)
{
    if(root == NULL)
        return;
    if(root -> el % x == 0)
    {
        printf("%d ", root -> el);
    }
    multiplicity(root -> left, x);
    multiplicity(root -> right, x);
}


int main()
{
    tree root = NULL;
    int n, x;
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
        scanf("%d", &x);
        root = insert(root, x);
    }
    multiplicity(root, root -> el);
    return 0;
}
