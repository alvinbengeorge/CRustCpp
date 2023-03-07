#include<iostream>

using namespace std;

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data) {
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
};

void preOrder(struct node *node) {
    if (node != NULL) {
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }

}

void inOrder(struct node *node) {
    if (node != NULL) {
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }
}

void postOrder(struct node *node) {
    if (node != NULL) {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
}

int main() {
    struct node *root = newNode(1);
    root->left = newNode(12);
    root->right = newNode(9);
    root->left->left = newNode(5);
    root->left->right = newNode(6);

    cout << "\nPreorder traversal: " << endl;
    preOrder(root);
    cout << "\nInorder traversal: " << endl;
    inOrder(root);
    cout << "\nPostorder traversal: " << endl;
    postOrder(root);
    cout << endl;

}
