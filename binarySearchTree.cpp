#include <iostream>
using namespace std;

class Node
{
public: 
    int info;
    Node *leftchild;
    Node *rightchild;

    //Constructor for the node class
    Node()
    {
        leftchild = nullptr; // Initialize left child to null
        rightchild = nullptr; // initialize right child to null
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; //initializing ROOT to null
    }

    void insert()
    {
        int x;
        cout << "Masukkan nilai : ";
        cin >> x;
    }
}