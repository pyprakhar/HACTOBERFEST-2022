#### Ninja has been given a string ‘STR’ containing either ‘{’ or ‘}’. 'STR’ is called valid if all the brackets are balanced. Formally for each opening bracket, there must be a closing bracket right to it.

##### For Example:

    “{}{}”, “{{}}”, “{{}{}}” are valid strings while “}{}”, “{}}{{}”, “{{}}}{“ are not valid strings.
    

#### Ninja wants to make ‘STR’ valid by performing some operations on it. In one operation, he can convert ‘{’ into ‘}’ or vice versa, and the cost of one such operation is 1.

#### Your task is to help Ninja determine the minimum cost to make ‘STR’ valid.

##### For Example:

    Minimum operations to make ‘STR’ =  “{{“ valid is 1.
    

In one operation, we can convert ‘{’ at index ‘1’ (0-based indexing) to ‘}’. The ‘STR’ now becomes "{}" which is a valid string.

##### Note:

    Return -1 if it is impossible to make ‘STR’ valid.
    

##### Input Format :

    The first line contains an integer 'T' which denotes the number of test cases or queries to be run. Then the test cases follow.
    
    The only line of each test case contains a string 'STR'.
    

##### Output Format :

    For each test case, print the minimum cost needed to make ‘STR’ valid.
    
    Print -1 if it is impossible to make ‘STR’ valid.
    
    Print the output of each test case in a separate line.
    

##### Note :

    You are not required to print the expected output, it has already been taken care of. Just implement the function.
    

##### Constraints :

    1 <= T <= 100
    0 <= |STR| <= 10^5
    STR[i] = ‘{’ or ‘}’
    
    Time Limit: 1 sec
