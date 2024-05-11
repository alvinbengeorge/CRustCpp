#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *left;
    struct node *right;
    int data;
};

struct node *insertData(struct node *root, int data) {
    if (root == NULL) {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = data;
        newnode->left = newnode->right = NULL;
        return newnode;
    }
    if (data < root->data)
    root->left = insertData(root->left, data);
    else if (data > root->data)
    root->right = insertData(root->right, data);
    return root;
}


void preOrder(struct node *root) {
    if (root) {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main() {
    struct node *root = NULL;
    root = insertData(root, 20);
    int num;
    for (int i=0; i<10; i++) {
        scanf("%d", &num);
        insertData(root, num);
    }
    preOrder(root);

    
}

