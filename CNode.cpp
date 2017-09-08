#include <iostream>
using namespace std;

class LinkedList{
    struct CNode {
        int x;
        CNode *next;
    };

public:
    // constructor
    LinkedList(){
        head = NULL; // set head to NULL
    }

    void addValue(int val){
        CNode *n = new CNode();  
        n->x = val;             
        n->next = head;         
        head = n;              
    }

    int popValue(){
        CNode *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
    }

private:
    CNode *head; 
};

int main() {
    LinkedList list;

    list.addValue(10);
    list.addValue(20);
    list.addValue(30);

    cout << list.popValue() << endl;
    cout << list.popValue() << endl;
    cout << list.popValue() << endl;
    // cout << list.popValue() << endl;
    return 0;
}