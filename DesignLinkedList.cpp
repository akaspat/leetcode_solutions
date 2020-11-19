class MyLinkedList {
    struct Node{
        Node* next;
        int val;
        Node() {}
        Node (int v) : val(v), next(nullptr) {}
    };
    Node* head;
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        head = nullptr;
    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        Node* cur = head;
        for (int i=0; i < index; i++){
            if (!cur) { return -1; }
            cur = cur->next;
        }
        return cur ? cur->val : -1;
    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        Node* new_head = new Node(val);
        new_head->next = head;
        head = new_head;
    }

    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        if (head == nullptr){
            head = new Node(val);
            return;
        }
        Node* current = head;
        while (current->next != nullptr){
            current = current->next;
        }
        current->next = new Node(val);
    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if (index < 0) { return; }
        if (index == 0){
            addAtHead(val);
        }
        Node* prev = head;
        for (int i=0; i < index-1; i++){
            if (!prev) { return; }
            prev = prev->next;
        }
        Node* nextItem = prev->next;
        prev->next = new Node(val);
        prev->next->next = nextItem;
    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if (index < 0) { return; }
        if (index == 0){
            head = head->next;
            return;
        }
        Node* prev = head;
        for (int i=0; i < index-1; i++){
            if (!prev) { return; }
            prev = prev->next;
        }
        // only one node on list
        if (!prev->next){ return; }

        // delete tail
        if (!prev->next->next) {
            prev->next = nullptr;
            return;
        }
        Node* nextItem = prev->next->next;
        prev->next = nextItem;
    }
};
