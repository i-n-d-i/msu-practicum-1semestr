#include <stdio.h>
#include <stdlib.h>
//вывести все элементы на уровнях с нечетными номерами

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

void printlevel(tree root, int k)
{
    if(root == NULL)
        return;
    if(k % 2 == 1)
    {
        printf("%d ", root -> el);
    }
    printlevel(root -> left, k + 1);
    printlevel(root -> right, k + 1);
}

int main()
{
    tree root = NULL;
    int n, x, k = 0;
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
    printlevel(root, k);
    return 0;
}
