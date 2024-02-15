#include<stdio.h>
#include<iostream>
using namespace std;
#define BUF_SIZE 22

struct Node{
    Node(){
        left_child = right_child = 0;
        data = 0;
    }
    Node *left_child, *right_child, *parent;
    long long data;
};

class Tree{
public:
    Tree(){
        root = new Node();
    }
    void insert(long long insert_data){
        if(num_of_node == 0)

    }

private:
    Node* root;
    int num_of_node;
    
}

int main(){
    int m;
    long long insert_data;
    char buf[BUF_SIZE];
    Tree tree;


}