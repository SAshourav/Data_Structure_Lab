#include <iostream>
#include "QueType.cpp"
using namespace std;


void printBinaryValues(int n) {
    QueType<string> queue;

    queue.Enqueue("1");

    for (int i = 0; i < n; i++) {
        string binary;
        queue.Dequeue(binary);
        cout << binary << endl;
        queue.Enqueue(binary + "0");
        queue.Enqueue(binary + "1");
    }
}

int main() {
    QueType<int> TestQue(5);
    if(TestQue.IsEmpty()){
        cout << "This Queue Is empty"<< endl;
    }else{
        cout << "This Queue not Is empty"<< endl;
    }

    TestQue.Enqueue(5);
    TestQue.Enqueue(7);
    TestQue.Enqueue(4);
    TestQue.Enqueue(2);

    if(TestQue.IsEmpty()){
        cout << "This Queue Is empty" << endl;
    }else{
        cout << "This Queue not Is empty" << endl;
    }

    if(TestQue.IsFull()){
        cout << "This Queue Is full" << endl;
    }else{
        cout << "This Queue not Is full" << endl;
    }

    TestQue.Enqueue(6);

    if(TestQue.IsFull()){
        cout << "This Queue Is full" << endl;
    }else{
        cout << "This Queue not Is full" << endl;
    }

    QueType<int> SecondQue(5);

    while(!TestQue.IsEmpty()){
        int item;
        TestQue.Dequeue(item);
        cout << item << endl;
        SecondQue.Enqueue(item);
    }

    if(SecondQue.IsFull()){
        cout << "This Queue Is full" << endl;
    }else{
        cout << "This Queue not Is full" << endl;
    }

    //SecondQue.Enqueue(6);

    int deque;
    SecondQue.Dequeue(deque);
    cout << deque <<endl;
    SecondQue.Dequeue(deque);
    cout << deque << endl;

    cout << "Current Available Element: " << endl;
    while(!SecondQue.IsEmpty()){
        int item;
        SecondQue.Dequeue(item);
        cout << item << endl;
        TestQue.Enqueue(item);
    }

    TestQue.Dequeue(deque);
    cout << deque <<endl;
    TestQue.Dequeue(deque);
    cout << deque << endl;
    TestQue.Dequeue(deque);
    cout << deque << endl;

    if(TestQue.IsEmpty()){
        cout << "This Queue Is empty" << endl;
    }else{
        cout << "This Queue not Is empty" << endl;
    }

   // TestQue.Dequeue(deque);


    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer." << std::endl;
    } else {
        cout << "Binary values from 1 to " << n << " are:" << std::endl;
        printBinaryValues(n);
    }

}
