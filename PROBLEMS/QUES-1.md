#### You are having a stack "ARR" of size 'N+1', your task is to delete the middlemost element so that the size of resulting stack is 'N'.

#### A stack is a linear data structure where both insertion and deletion of elements take place at the top. It follows FILO (First In Last Out) or LIFO (Last In First Out) approaches. Books piled on top of each other is an example of a stack, where you can only remove a single book at a time, which is at the top of the stack. Likewise, you can only add a single book at a time, on the top of the stack only.

##### Example :-

    INPUT : ARR [ ] = [ 1 , 2 , 3 , 4 , 5 ] , N = 4
    OUTPUT: ARR [ ] = [ 1 , 2 , 4,  5 ]
    
    The above example contains an odd number of elements, hence the middle element is clearly the (N+1) / 2th element, which is removed from the stack in the output.
    
    INPUT : ARR [ ] = [ 5, 6, 7, 8 ] , N = 3
    OUTPUT: ARR [ ] = [ 5, 7, 8 ]
    
    The above example contains an even number of elements, so out of the two middle elements, we consider the one which occurs first. Hence, the middle element would be ((N+1) / 2 - 1) element, which is 6 and is removed from the stack in the output.
    

#### Input Format

    The first line of input contains an integer 'T' representing the number of the test case. Then the test case follows.
    
    The first line of each test case contains an integer 'N', where 'N+1' denotes the number of elements in the stack initially.
    
    The second line of each test case contains 'N+1' space-separated integers, denoting the elements of the stack.
    

#### Output Format:

    For every test case, print 'N' space-separated integer, denoting the elements in the stack after removing the middle element from the input stack. 
    The output of every test case will be printed in a separate line. 
    

##### Note:

    You don’t have to print anything, it has already been taken care of. Just implement the given function. 
    

##### Constraints:

    1 <= T <= 100    
    1 <= N+1 <= 3000
    0 <= data <= 10^9
    
    Where ‘T’ is the number of test cases, ‘N+1’ is the number of elements in the input Stack. ‘data’ is the value of each element in the stack.
    
    Time limit: 1 second
