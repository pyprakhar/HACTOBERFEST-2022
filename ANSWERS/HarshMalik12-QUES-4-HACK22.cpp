#include <iostream>
using namespace std; 
#include <stack>
void solve(stack<int>& myStack, int x)
{
    if(myStack.empty())
    {
        myStack.push(x);
        return;
    }
    int num = myStack.top();
    myStack.pop();
    solve(myStack, x);
    myStack.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack, x);
    return myStack;
}

int main()
{
    stack<int>S;
    int n = 8;
    S.push(4);
    S.push(3);
    S.push(2);
    pushAtBottom(S, n);
    while (!S.empty()) {
        cout << S.top() << " ";
        S.pop();
    }
}
