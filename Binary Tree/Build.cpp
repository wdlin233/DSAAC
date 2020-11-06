typedef struct node; 
typedef node * tree;
struct node {
    char data;
    tree lchild,rchild;
}​

void preorder(tree bt) {
    if (bt) {
        std::cout << bt->data;
        preorder(bt->lchild);
        preorder(bt->rchild);
    }
}
