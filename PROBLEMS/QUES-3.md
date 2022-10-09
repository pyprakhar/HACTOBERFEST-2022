#### Given valid mathematical expressions in the form of a string. You are supposed to return true if the given expression contains a pair of redundant brackets, else return false. The given string only contains ‘(‘, ’)’, ‘+’, ‘-’, ‘\*’, ‘/’ and lowercase English letters.

##### Note :

#### A pair of brackets is said to be redundant when a subexpression is surrounded by needless/ useless brackets.

##### For Example :

    ((a+b)) has a pair of redundant brackets. The pair of brackets on the first and last index is needless. 
    While (a + (b*c)) does not have any pair of redundant brackets. 
    

##### Input Format :

    The first line contains a single integer ‘T’ denoting the number of test cases. The test cases follow.
    
    The first line of each test case contains a string denoting the expression.
    

##### Output Format :

    For each test case, return “Yes” if the given expression contains at least one pair of redundant brackets, else return “No”.
    

##### Note :

    You don’t need to print anything; It has already been taken care of. Just implement the given function.
    

##### Constraints :

    1 <= T <= 50
    3 <= |S| <= 10^4
    
    Time Limit: 1 sec
