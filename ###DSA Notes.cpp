#include <iostream>
using namespace std;
int main()
{
    ? ? ? "TIME COMPLEXITY" ~
        /*
        Time complexity of an algorithm is used to measure the amount of time that the algorithm requires to run.
        Time complexity are of three types. O notation, Omega notation, and Sigma notation.
        1.O notations signifies is the worst case scenario in which algorithm takes the longest time to run.
        2.Omega notation signifies the best case scenario in which the algorithm takes the least amount of time to run.
        3.Sigma notation signifies the average time the algorithm will take to execute.
        For example, a single for loop will have a time complexity of O(n) and a nested for loop will have time complexity of O(n^2).
        */

        ? ? ? "SPACE COMPLEXITY" ~
        /*
        Space complexity of an algorithm is the amount of memory that algorithm will take to execute.
        */

        ? ? ? "SELECTION SORT" ~(110)
        /*
        Selection sort work works by picking up the minimum element from the array and putting it at the beginning of the array  and just doing it until the whole array become sorted.
        Time COMPLEXITY : O(n^2)
        */

        ? ? ? "BUBBLE SORT" ~(111)
        /*
        Bubble Sort works by swapping adjacent elements in the array, till the array is fully sorted.
        Time COMPLEXITY : O(n^2)
        */

        ? ? ? "INSERTION SORT" ~(112)
        /*
        Insertion sort works by putting the elements of the unsorted array into a sorted array till the whole array get  sorted.
        Time COMPLEXITY : O(n^2).
        */

        ? ? ? "SIEVE OF ERATOSTHENES" ~(135)
        /*
        In mathematics, the sieve of Eratosthenes is an ancient algorithm for finding all prime numbers up to any given limit. It does so by iteratively marking as composite (i.e., not prime) the multiples of each prime, starting with the first prime number, 2. The multiples of a given prime are generated as a sequence of numbers starting from that prime, with constant difference between them that is equal to that prime.
        */

        ? ? ? "INCLUSION EXCLUSION PRINCIPLE" ~(138)
        /*
        Inclusion-Exclusion principle says that for any number of finite sets A_1, A_2, A_3... A_i  , Union of the sets is given by = Sum of sizes of all single sets – Sum of all 2-set intersections + Sum of all the 3-set intersections – Sum of all 4-set intersections .. + (-1)^{i+1}  Sum of all the i-set intersections.
        */

        ? ? ? "EUCLID'S ALGORITHM" ~(139)
        /*
        Euclid's algorithm stated the modulus of two numbers (x,y), shares the common hcf with y .
        for example-42,24(42-24=18,24-18=6,18-6=12,12-6=6,6-6=0)
        */

        ? ? ? "MERGE SORT" ~(161)
        /*
        Merge sort works on Divide and Conquere Algorithm , what merge sort does is it divides the array into halves and conrinues to divide it into smaller arrays , and then sorts the values in the final array.
        Time Complexity : O(nlog(n))
        For more details -https://www.geeksforgeeks.org/merge-sort/
        */

        ? ? ? "QUICK SORT" ~(162)
        /*
        Quick Sort works on Divide and Conquere Algorithm , what merge sort does is it sorts the values in the array around the pivot element and finallly sorts into the final array.
        Time Complexity : O(nlog(n))
        For more details -https://www.geeksforgeeks.org/quick-sort/
        */

        ? ? ? "COUNTING SORT" ~(163)
        /*
        Counting Sort works by first counting the occurences of each element,and then it adds the occurences of each element to each other, then sets the previous value in a new array ,and then array is again initialized with the sorted values of the output array.
        Time Complexity : O(n+k),(n=number of elements , k= range of elements)
        For more details -https://www.geeksforgeeks.org/counting-sort/
        */

        ? ? ? "DNF(Dutch National Flag) SORT" ~(164)
        /*
        DNF Sort works by using three iterators : low ,mid , high, if the value is 0, we swap the values in the mid and low pos , but if it is 1 , we increment the value of mid , and if it is 2 , we swap mid and high values ,and decrement the high iterator, and finallly the array gets sorted .
        Time COMPLEXITY : O(n)
        For more details : http://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/
        **This only works for 0s, 1s and 2s.
        */

        ? ? ? "WAVE SORT" ~(165)
        /*
        Wave Sort sorts the elements of an array in a wave form by simple swapping.
        Time COMPLEXITY : O(n)
        For more details : https://www.geeksforgeeks.org/sort-array-wave-form-2/
        */

        ? ? ? "LINKED LIST" ~(167)
        /*
        Linked List is a linear data structure,it is represented by a pointer linked to the first node in the linked list, the first node is called the head , if the linked list is empty, it return NULL.Each node consists of two parts -value and a pointer.
        For more details : https://www.geeksforgeeks.org/linked-list-set-1-introduction/
        */

        ? ? ? "CIRCULAR LINKED LIST" ~(171)
        /*
        Circular Linked List is a kind of linked list, in which the last node of the linked list does not point to Null pointer , instead it points to another node in the linked list , or even the head of the linked list , thus creating a circular chain of nodes.
        */

        ? ? ? "DOUBLY LINKED LIST" ~(172)
        /*
        Doubly Linked List is a kind of linked list , which contains two pointer - previous and next pointers, which allow  us to traverse the list from the front as well as from the back, thus making the insertion as well as deletion faster in the linked list at the expense of additional memory consumption.
        */

        ? ? ? "STACK" ~(183)
        /*
        Stack is a linear data structure which follows the principle of LIFO(Last In First Out) , There are mainly three operations in Stack:
        Push: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
        Pop: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.
        Peek or Top: Returns the top element of the stack.
        isEmpty: Returns true if the stack is empty, else false.
        */

        ? ? ? "STACK STL FUNCTIONS" ~(185)
        /*
        1.empty()- Returns whether the stack is empty.
        2.push()-Pushes an item into the stack.
        3.pop()-Removes an item from the stack.
        4.top()-Returns the top element in the stack.
        5.size()-Returns the size of the stack.
        6.swap()-swap values with another stack of same type.
        7.emplace()-While push() function inserts a copy of the value or the parameter passed to the function into the container at the top, the emplace() function constructs a new element as the value of the parameter and then adds it to the top of the container.
        */

        ? ? ? "INFIX, PREFIX AND POSTFIX EXPRESSION" ~(186)
        /*
        1. Infix expression is the normal expression that we humans use to evaluate  mathematical statements , We use BODMAS Rule to evaluate infix expressions.
        Syntax - operand (operator) operand.
        Example- A*B+(C/D)

        2. Prefix expression is the kind of expression in which the operator is written before the operands, we take the value from right to left , but the operator from left to right.
        Syntax- (operator) operand,operand.
        Example- +*AB/CD

        3. Postfix expression is the kind of expression in which the operator is written after the operands, and the order of evaluation is always from left to right.
        Syntax- operator,operand (operator).
        Example- AB*CD/+
        */

        ? ? ? "QUEUE" ~(191)
        /*
        Queue is a linear data structure like stacks but it follow the principle of First In First Out (FIFO), it is just like a queue of people that we see in real life , in where the first people that stands in the queue finishes the work first.
        Enqueue: Adds an item to the queue. If the queue is full, then it is said to be an Overflow condition.
        Dequeue: Removes an item from the queue. The items are popped in the same order in which they are pushed. If the queue is empty, then it is said to be an Underflow condition.
        Front: Get the front item from queue.
        Rear: Get the last item from queue.
        */

        ? ? ? "DEQUE STL" ~
        /*
        Double-ended queues are sequence containers with the feature of expansion and contraction on both ends. They are similar to vectors, but are more efficient in case of insertion and deletion of elements. Unlike vectors, contiguous storage allocation may not be guaranteed.

        Double Ended Queues are basically an implementation of the data structure double-ended queue. A queue data structure allows insertion only at the end and deletion from the front. This is like a queue in real life, wherein people are removed from the front and added at the back. Double-ended queues are a special case of queues where insertion and deletion operations are possible at both the ends.
        For more information : https://www.geeksforgeeks.org/deque-cpp-stl/
        */

        ? ? ? "BINARY TREES" ~
        /*
        Binary Trees are hierachrial data structures that consists of three data elements - Data variable, left node variable and right node variable.The topmost node is called the root node and the two pointers associated with are left and right pointers.
        For more information : https://www.geeksforgeeks.org/binary-tree-set-1-introduction/
        */

        ? ? ? "BINARY TREES PROPERTIES" ~
        /*
        1. The maximum no of nodes in a binary tree at level 'L' = 2^L. for example, at level =0 , nodes = 2^0=1.
        2. The maximum number of nodes in a binary tree of height 'h' = 2^h-1.
        3. In a binary tree with n nodes , the minimum no  of levels is = log(2)(n+1).
        4. A binary tree with L leaves has atleast = (|log(2)L|+1) levels.
        5. In Binary tree where every node has 0 or 2 children, the number of leaf nodes is always one more than nodes with two children.
        For more information : https://www.geeksforgeeks.org/binary-tree-set-2-properties/?ref=lbp
        */

        ? ? ? "BINARY TREE TYPES" ~
        /*
        1. Full Binary Tree - A Binary tree is a full binary tree if all the nodes in the tree has 0 or 2 children nodes.
        2. Complete Binary Tree - A Binary tree is a complete binary tree if it has completely filled levels except the last level and last level has all keys as left as possible.
        3. Perfect Binary Tree - A Binary tree is a perfect binary tree if it has completely filled levels i.e every node has 2  children node , and all leaf nodes are on the same level.
        4. Balanced Binary Tree - A binary tree is a balanced binary tree if the height of the binary tree is O(log(n)) , n is the no of nodes .
        5. A Degenerate Tree - A binary tree is a Degenerate tree if the nodes in the tree have only one child.
        */

        ? ? ? "BINARY TREE TRAVERSALS" ~
        /*
        1. Inorder Traversal - Left node -> root -> right node.
        2. PreOrder Traversal - root -> left node -> right node.
        3. PostOrder Traversal - left node -> right node -> root.
        */

        ? ? ? "DIAMETER OF BINARY TREE" ~
        /*
        The diameter of the binary tree is the longest distance between two nodes in the binary tree through the root.
        */

        ? ? ? "BINARY SEARCH TREE(BST)" ~
        /*
        Binary Search Tree (BST) is a node based data strcuture with the following properties:
        1. BST always contains LEFT node with LESS value than the root node .
        2. BST always contains RIGHT node with GREATER value than the root node.
        3. BST should not contain duplicate values.
        4. INORDER traversal always gives nodes in the sorted order.
        */

        return 0;
}