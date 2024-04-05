#include <bits/stdc++.h>

using namespace std;

class MaxHeap
{
private:
    // vector to store heap elements
    vector<int> tree;

    ///return parent of node
    int parent(int nodeIndex) {
        return (nodeIndex - 1) / 2;
    }

    // return left child of node
    int left(int nodeIndex) {
        return (2*nodeIndex + 1);
    }
    // return right child of node
    int right(int nodeIndex) {
        return (2*nodeIndex + 2);
    }


    /// move the current node to a suitable place down
    void heapifyDown(int nodeIndex)
    {
        // get left and right child indexes
        int lIndex = left(nodeIndex);
        int rIndex = right(nodeIndex);
        int nextMaxIndex = nodeIndex;
        // compare current node with its left and right child
        // and find the largest value to swap the current node with the largest one
        if (lIndex < size() && tree[lIndex] > tree[nodeIndex]) {
            nextMaxIndex = lIndex;
        }
        if (rIndex < size() && tree[rIndex] > tree[nextMaxIndex]) {
            nextMaxIndex = rIndex;
        }
        // swap the current node with the largest one, then repeat this function again
        if (nextMaxIndex != nodeIndex)
        {
            swap(tree[nodeIndex], tree[nextMaxIndex]);
            heapifyDown(nextMaxIndex);
        }
    }///O(logn)

    /// move the current node to a suitable place up
    void heapifyUp(int nodeIndex)
    {
        // check if the current node and its parent violate the maxHeapTree
        // and the current node may have a suitable place up
        if (nodeIndex && tree[parent(nodeIndex)] < tree[nodeIndex])
        {
            // swap the two if heap property is violated
            swap(tree[nodeIndex], tree[parent(nodeIndex)]);

            // call heapify-up on the parent
            heapifyUp(parent(nodeIndex));
        }
    }

public:
    // return size of the heap
    int size() {
        return tree.size();
    }

    //check if the heapTree is empty or not
    bool empty() {
        return size() == 0;
    }

    // push element in the MaxHeap
    void push(int key)
    {
        tree.push_back(key);
        heapifyUp(size() - 1);
    }

    /// remove max element at the root
    void pop()
    {
        assert(!empty());

        tree[0] = tree.back();
        tree.pop_back();
        heapifyDown(0);
    }

    /// return max element at the root
    int top()
    {
        assert(!empty());
        return tree[0];
    }
};

int main() {
    MaxHeap maxHeap;

    maxHeap.push(20);
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(5);

    cout << "Max Element: " << maxHeap.top() << endl;
    maxHeap.pop();
    cout << "Max Element: " << maxHeap.top() << endl;
    maxHeap.pop();
    cout << "Max Element: " << maxHeap.top() << endl;
    maxHeap.pop();
    maxHeap.push(1);
    cout << "size of heap = "<< maxHeap.size()<<endl;
    cout << "Max Element: " << maxHeap.top() << endl;
    maxHeap.pop();
    cout << "size of heap = "<< maxHeap.size()<<endl;
    cout << "Max Element: " << maxHeap.top() << endl;
    maxHeap.pop();
    cout << "size of heap = "<< maxHeap.size()<<endl;
    cout << "Max Element: " << maxHeap.top() << endl;
    return 0;
}

