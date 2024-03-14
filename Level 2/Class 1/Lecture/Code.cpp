#include <bits/stdc++.h>

using namespace std;




/// Stack

template<class T>

class Node{

    public:

    T data;

    Node<T>* next;



    Node(){
        data=0;
        next=NULL;
    }



    Node(T val ){
        data=val;
    }



    Node(T val, Node<T>* nxt){
        data=val;
        next=nxt;
    }

};

template<class T>

class Stack {

    private:
        Node<T>* top;

    public:
        Stack() {
        top = NULL;
        }

        ~Stack() {
            clear();
        }

        bool is_empty() {
            return top == NULL;

        }

        void push(T value) {
            Node<T>* new_node = new Node<T>(value,top);
            top = new_node;
        }


        int peek() {
            if (top == NULL) {
                throw invalid_argument("Stack is empty");
            }

            return top->data;
        }




        int pop() {

            if (top == NULL) {
                throw invalid_argument("Stack is empty");
            }

            Node<T>* temp = top;
            int popped_value = top->data;
            top = top->next; ///refer to next top
            delete temp; ///to free heap memory
            return popped_value;

        }


        void clear() {

            Node<T>* curr = top;

            while (curr != NULL) {

                Node<T>* temp = curr;

                curr = curr->next;

                delete temp; ///free all nodes in heap
            }



            top=NULL;

        }
};




/// hash function


class HashTable{

private:

     const static int TABLE_SIZE = 10;

     list<pair<int, string>> table[TABLE_SIZE];



     //A simple hash function to convert keys into array indices

int hashFunction(int key) {

return key % TABLE_SIZE;

}

public:

     //insert a key-vakye pair ubto hash table

void insert(int key, string value) {

         int index = hashFunction(key);

         table[index].push_back( {key, value} );
}

string get(int key){

    int index = hashFunction(key);

    for (auto valPair : table[index]) {

        if (valPair.first == key) {

            return valPair.second;

        }



    }

    return "Key not found!";

}

void remove(int key) {

     int index = hashFunction(key);

     auto it = table[index].begin();

     while(it!= table[index].end() ){

         if(it->first==key){

            table[index].erase(it);

            return;

         }

         it++;

     }

}
};




int main()
{
 /*   Stack<int> s;
    cout<<s.is_empty()<<"\n";
    s.push(5);
    s.push(10);
    cout<<s.peek()<<"\n";
    cout<<s.is_empty()<<"\n";
    cout<<s.pop()<<"\n";
    cout<<s.peek()<<"\n";*/







HashTable myTable;

// Inserting key-value pairs.

myTable.insert(255, "Orange");

myTable.insert(155, "Banana");

myTable.insert(125, "Grapes");

myTable.insert(225, "Mango");

myTable.insert(55, "Apple");

// Retrieving values

cout << "Value at key 55: " << myTable.get(55) << endl; // Output: Apple

cout << "Value at key 125: " << myTable.get(125) << endl; // Output: Grapes

cout << "Value at key 1005:"<< myTable.get(1005) << endl; // Output: Key not found

// Removing a key-value pair


myTable.remove(155);
cout << "Value at key 155: " << myTable.get(155) << endl; // Output: Key not found!




///(6*(5+(12)+(32*16))9)
/*
127.0.0.1 ->            sfsdfsdcvxcvxcvxc -> 5555
127.1.0.2 ->          sdfsdfwefefwfsdfsdf   ->  666

ahmed -> 5
mohamed -> 5012
ali ->508

mariam ->11
sara -> 11*/


    return 0;
}
