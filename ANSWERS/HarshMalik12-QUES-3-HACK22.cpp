#include <iostream>
using namespace std; 
#include <stack>
bool findRedundantBrackets(string &s)
{
    stack<char>st;
    for(int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
           if(ch == ')')
           {
               bool redundant = true;
               while(st.top() != '(')
               {
                   char top = st.top();
                   if(top == '+' || top == '-' || top == '*' || top == '/'){
                       redundant =  false;
                   }
                   st.pop();
               }
               if(redundant == true){
                   return true;
               }
               st.pop();
           }
    }
    return false;
}

int main()
{
    string s = "(a+c*b)+(c))";
    if(findRedundantBrackets(s)){
        cout << "Yes";
    }
    else
        cout << "No";
}
