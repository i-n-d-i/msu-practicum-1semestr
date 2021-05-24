#include <stdio.h>
#include <stdlib.h>

//all functions for trees

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

//вставить элемент в дерево (нерекурсивная функция)
tree element(tree root, int x)
{
    tree p = malloc(sizeof(Node));
    p -> el = x;
    p -> left = p -> right = NULL;
    tree t = root; //бегунок
    if(t = NULL)
        return p;
    while(1)
    {
        if(x < t -> el)
        {
            if(t -> left == NULL)
            {
                t -> left = p;
                break;
            }
            else
                t = t -> left;
        }
        else
        {
            if(t -> right == NULL)
            {
                t -> right = p;
                break;
            }
            else
                t = t -> right;
        }
    }
    return root;
}

//распечатывает дерево в порядке возрастания
void printtree(tree root)
{
    if(root != NULL)
    {
        printtree(root -> left);
        printf("%d ", root -> el);
        printtree(root -> right);
    }
}

//сумма элементов
int sum(tree root)
{
    if(root == NULL)
        return 0;
    return sum(root -> left) + sum(root -> right) + root -> el;
}

//узнать количество элементов на интервале (a,b)
int howmany(tree root, int a, int b)
{
    if(root == NULL)
        return 0;
    if(root -> el >= a && root -> el <= b)
        return 1 + howmany(root -> left, a, b) + howmany(root -> right, a, b);
    else
        return howmany(root -> left, a, b) + howmany(root -> right, a, b);
}

//2 вариант
int howmany_2(tree root, int a, int b)
{
    if(root == NULL)
        return 0;
    if(root -> el < a)
        return howmany(root -> right, a, b);
    if(root -> el > b)
        return howmany(root -> left, a, b);
    return 1 + howmany(root -> left, a, b) + howmany(root -> right, a, b);
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
    printtree(root);
    return 0;
}
