#include "A3.h"

template <typename Type>
void queue<Type>::push(Type data){
    Node<Type>* temp = new Node<Type>(data);

    if(rear==NULL){
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;

}

template <typename Type>
void queue<Type>::pop(){
    if (front == NULL){
        return;
    } 
    Node<Type>* temp = front;
    front = front->next;

    if(front == NULL){
        rear=NULL;
        delete temp;
    }

}

template <typename Type>
void queue<Type>::frontE(){
    if (front != NULL) {
        cout << "First object is " << front->data << endl;
    } else {
        cout << "Queue is empty" << endl;
    }
}

template <typename Type>
void queue<Type>::size(){
    int s = 0;
    Node<Type>* current = front;
    while (current != NULL){
        s++;
        current = current->next;
    }
    cout << "The size is" << s << endl;
    
}

template <typename Type>
void queue<Type>::empty(){
    if(front == NULL){
        cout << "Queue is empty"<< endl;
    }
    else{
        cout<< " Queue is not empty"<< endl;
    }
}

template <typename Type>
void queue<Type>::moveTR(){
    Type item = front->data;
    pop();
    push(item);
}



//Modified linearsearch
template<typename Type>
int linearSearch(vector<Type>& items, Type&target, size_t pos_last) {

if (pos_last == items.size())
return -1;

int i = linearSearch(items, target, pos_last + 1);
if (i!=-1)
return i;
if (target == items[pos_last])
return pos_last;
else
return -1;
}

//Modified insertion sort
void insertion_sort(std::list <int> &num) {
for (auto it = next(num.begin());it!=num.end();++it){
    int key = *it;
    auto prev_it = prev(it);
    bool insertionNeeded = false;
    
    while (prev_it != num.begin()&&key < *prev_it){
        *next(prev_it)=*prev_it;
        insertionNeeded = true;
        --prev_it;
    }
    if (insertionNeeded)
    *next(prev_it)=key;
}

}