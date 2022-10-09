#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	int isPalindrome(string S)
	{
	   int s = 0;
	   int e = S.size() - 1;
	   while(s < e){
	       if(S[s] != S[e]){
	           return 0;
	       }
	       else
	            s++;
	            e--;
	   }
	   return 1;
	}
};
int main() 
{

   	string s = "harsh";
   	Solution ob;
   	cout << ob.isPalindrome(s) << "\n";
    return 0;
}
