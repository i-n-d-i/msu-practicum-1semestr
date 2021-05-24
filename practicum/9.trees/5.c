#include <stdio.h>
#include <stdlib.h>

//Вывести все вершины дерева, имеющие двух сыновей

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

void twoson(tree root)
{
    if(root == NULL)
        return;
    if(root -> left != NULL && root -> right != NULL)
        printf("%d ", root -> el);
    twoson(root -> left);
    twoson(root -> right);
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
    twoson(root);
    return 0;
}

