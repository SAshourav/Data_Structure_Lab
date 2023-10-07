#include <iostream>
#include "StackType.cpp"
#include <string>
using namespace std;

bool IsEqual(const string & input){
    StackType<char> parenthesesStack;


    for(char ch : input){
        if(ch == '('){
            parenthesesStack.Push(ch);
        }else if(ch == ')'){
            if(parenthesesStack.IsEmpty()){
                return false;
            }else{
                parenthesesStack.Pop();
            }
        }
    }

    return parenthesesStack.IsEmpty();
}
int main() {
    StackType<int> stack;
    StackType<int> tempStack;
    if(stack.IsEmpty()){
        cout << "The stack is empty" << endl;
    }else{
        cout << "The stack is not empty" << endl;
    }
    stack.Push(5);
    stack.Push(7);
    stack.Push(4);
    stack.Push(2);
    if(stack.IsFull()){
        cout << "The stack is Full" << endl;
    }else{
        cout << "The stack is not Full" << endl;
    }

    while(!stack.IsEmpty()){
        tempStack.Push(stack.Top());
        cout << stack.Top() << endl;
        stack.Pop();
    }

    while(!tempStack.IsEmpty()){
        stack.Push(tempStack.Top());
        tempStack.Pop();
    }

    stack.Push(3);

    if(stack.IsFull()){
        cout << "The stack is Full" << endl;
    }else{
        cout << "The stack is not Full" << endl;
    }

    stack.Pop();
    stack.Pop();
    cout << stack.Top() << endl;

    string input;
    cin >> input;
    if(IsEqual(input)){
        cout << "This string is Balanced";
    }else{
        cout << "This string is not Balanced";
    }


}
