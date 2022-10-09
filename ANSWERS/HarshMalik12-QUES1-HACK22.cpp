#include<iostream>
#include <stack>
using namespace std;
void solve(stack<int>&inputStack, int count, int size)
{
    if(count == size/2)
    {
        inputStack.pop();
        return;
    }    
        
    int ans = inputStack.top();
    inputStack.pop();
    solve(inputStack, count+1, size);
    inputStack.push(ans);
}

void deleteMiddle(stack<int>&inputStack, int N)
{
	int count = 0;
    solve(inputStack, count, N);
}

int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int n = 4;
    deleteMiddle(s, n);
    while (!s.empty())
    {
        int p=s.top();
        s.pop();
        cout << p << " ";
    }
    return 0;   
}
