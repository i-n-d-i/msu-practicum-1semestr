#include <stdio.h>
#include <stdlib.h>
//Вывести всех предков данного элемента, начиная с корня и заканчивая родителем
  
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

void allparents(tree root, int x)
{
    if(root == NULL)
    {
        printf("no elements\n");
        return;
    }
    tree t = root, q;
    if(x > root -> el)
        q = t -> right;
    else
        q = t -> left;
    while(x != q -> el && q)
    {
        printf("%d ", t -> el);
        t = q;
        if(x > q -> el)
            q = q -> right;
        else
            q = q-> left;
    }
    printf("%d ", t -> el);
    if(q == NULL)
        printf("no elements\n");
}

int main()
{
    tree root = NULL;
    int n, x, m = 0;
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
    printf("parents of what element we need to find?\n");
    scanf("%d", &m);
    allparents(root, m);
    return 0;
}

