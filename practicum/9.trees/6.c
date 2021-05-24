#include <stdio.h>
#include <stdlib.h>
/*найти максимальный нечетный элемент дерева. гарантируется, что дерево
содержит хотя бы один нечетный элемент*/

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

//находит максимальный нечетный элемент
int maximum(tree root)
{
    if(root == NULL)
        return 0;
    int maxright = maximum(root -> right);
    if(maxright != 0)
        return maxright;
    if(root -> el % 2 != 0)
        return root -> el;
    return maximum(root -> left);
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
    printf("максимальный нечетный элемент: %d\n", maximum(root));
    return 0;
}

