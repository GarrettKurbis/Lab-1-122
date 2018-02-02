echo "# Lab-1" >> README.md
git init
git add README.md
git commit -m "first commit"
git remote add origin https://github.com/rkchudha/Lab-1.git
git push -u origin master

// .cpp files contain code definitions for methods that have been declared
// in the according .hpp file. The skeleton has been set up here for you.
// That is, the methods have been initiated, and your mission, should you 
// choose to accept it (which you should for marks), is to fill in each method
// with the appropriate code.
//
// A note about the "::" syntax: generally, this means "the thing on the right
// belongs to the thing on the left." So, SequentialList::empty() means the method
// empty() belongs to the class SequentialList. This allows empty() to access (and
// potentially change) the member variables in class SequentialList.

#include "SequentialList.hpp"

// This is the constructor.
SequentialList::SequentialList(unsigned int cap) //incomplete need to check
{
    DataType *data_;
    unsigned int capacity_;
    unsigned int size_;
    struct LinkedList
    {
        Node* head;
    }
}

SequentialList::~SequentialList()
{
    // Destructor. Destroy this SequentialList, freeing all dynamically allocated memory.
    if(list == NULL)
        return;
    else if(list =! NULL)
        delete(list);
}

bool SequentialList::empty() const
{
    if (list == NULL)
        return true;
    else return false;

}

unsigned int SequentialList::size() const
{
    return size; //idk if this will just return the entire size of the number of nodes in the list
    
    //or alternatively do this instead and need to add a pointer starting at head
    int count = 0;
    Node* A = list -> head;
    while(A != NULL)
    {
        count+=1;
        A = A->next;
    }
    return count;
}

unsigned int SequentialList::capacity() const
{
    return capacity_;
}

bool SequentialList::full() const
{
    if(size == capacity)
        return true;
    else return false;
}

void SequentialList::print(LinkedList* list) const
{
    if(list== NULL) return;
    cout << "(";
    Node* node = list->head;
    while(node != NULL)
    {
        cout<< "[" << node -> data << "]";
        node = node->next;
        if(node != NULL)
            cout << "->";
    }
    cout << ")\n";
}

// NOTE on inserts: do NOT grow the array if we reach capacity. Simply return false.
bool SequentialList::insert_front(DataType val)
{
}

bool SequentialList::remove_front()
{
    if(list == NULL) return; //if the list is empty
    
    else if (list -> head -> next == NULL) //there is only one node in the list (the head)
    {
        delete list -> head;
        list -> head = NULL;
        return;
    }

    else //if (list -> head -> next != NULL) //if there is atleast 2 nodes, then we want to still just delete first
    {
        Node* newHead = list -> head -> next;
        list -> head -> next = newHead;
        delete list -> head;
        list -> head = newHead;
    }

}

bool SequentialList::insert_back(DataType val)
{
    
}

//want to remove the last item in the list
bool SequentialList::remove_back()
{
    if(list == NULL) return; //if the list is empty
    
    if( list -> head != NULL && list -> head -> next != NULL) //if the head is not null and checks that there is a node after the head to delete
    {
        Node* newLast = list -> head; //created a pointer to the head, ready to increment through list
        while ( newLast -> next -> next != NULL)
        {
            newLast = newLast -> next; //keep moving through the list while the next->next
        }
        delete newLast -> next; //delete the one that is last, referred to as just the next after since you stopped at the second last
        newLast -> next = NULL;
        
    }
    else if (list -> head != NULL) //if there is just a head, delete the head
    {
        delete list -> head;
        list -> head = NULL;
    }
}

bool SequentialList::insert(DataType val, unsigned int index) //incomplete
{
    if(index<0 || capacity<index)
    {
        cout << "Cannot insert value, invalid index";
        return;
    }
    else if (size == capacity)
    {
        cout<< "Cannot insert, max capacity already reached";
        return;
    }
    else 
}

bool SequentialList::remove(unsigned int index)
{
}

unsigned int SequentialList::search(DataType val) const
{
    
}

SequentialList::DataType SequentialList::select(unsigned int index) const
{
}

bool SequentialList::replace(unsigned int index, DataType val)
{
}
