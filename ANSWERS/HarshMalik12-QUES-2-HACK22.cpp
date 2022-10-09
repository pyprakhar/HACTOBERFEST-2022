#include <iostream>
#include <string>
#include <stack>
using namespace std;
int findMinimumCost(string str) {
    stack<char>s;
    if(str.length()%2 != 0)
    {
        return -1;
    }
    for(int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if(ch == '{')
        {
            s.push(ch);
        }
        else
            if(!s.empty() && s.top() == '{')
            {
                s.pop();
            }
            else
                s.push(ch);
    }
    int a = 0, b = 0;
    while(!s.empty())
    {
        if(s.top() == '{')
        {
            a++;
        }
        else
            b++;
        s.pop();
    }
    int ans = (a + 1)/2 + (b + 1)/2;
    return ans; 
}
int main(){
    string s = "{{{}";
    cout <<  findMinimumCost(s);
}
