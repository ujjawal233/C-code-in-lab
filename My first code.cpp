#include <iostream>
using namespace std;

struct Node {
    int val;
    struct Node* next;
};

class LL {
    struct Node* start;

public:
    LL() {
        start = nullptr;
    }

    struct Node* getNode() {
        struct Node* p = new Node;
        cout << "Get values for new node: ";
        cin >> p->val;
        p->next = nullptr;
        return p;
    }

    void insertNode() {
        struct Node* newNode = getNode();
        if (start == nullptr) {
            start = newNode;
        } else {
            struct Node* temp = start;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display() {
        struct Node* temp = start;
        while (temp != nullptr) {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    LL linkedList;
    linkedList.insertNode();
    linkedList.insertNode();
    linkedList.display();
    return 0;
}
