 #include <iostream>
 using namespace std;

 void reverseString(string& s)
 {
     int start = -1;
     int end = s.length();
     while(start < end){
         swap(s[start], s[end]);
         start++;
         end--;
     } 
 }
 int main()
 {
     string s = "hello";
     reverseString(s);
     cout << s;
     return 0;
 }
