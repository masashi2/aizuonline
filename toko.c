struct node{
    int data;
    struct node* left;
    struct node* right;
};

int main(){
    int data[7] = {};
    struct node* root = NULL;
    for(int i = 0; i < 7; i++){
        root = insert_avl(root, data[i]);
    }
}

struct node* create(int data){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

struct node* insert_avl(struct node* p, int data){
    if(p == NULL) p = create(data);
    else if(data > p->data){
        p->right = insert_avl(p->right, data);
        if(height(p->right)-height(p->left)==2){
            if(data>p->right->data)
            p = rotate_left(p);
            }else{
                p->right = rotate_right(p->right);
                p = rotate_left(p);
            }
        }
    }
    else{
        p->left = insert_avl(p->left, data);
        if(height(p->left)-height(p->right)==2){
            if(data>p->left->data){
                p->left = rotate_left(p->left);
                p = rotate_right(p);
            }
            else
            p = rotate_right(p);   
        }
    }
    return p;
}

struct node* rotate_left(struct node* p){
    struct node* right_child = p->right;
    p->right = right_child->left;
    right_child->left = p;
    return right_child;
}

struct node* rotate_right(struct node* p){
    struct node* left_child = p->left;
    left_child->left
    left_child->right = p;

    return left_child
}
