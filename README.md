# competitive-programming-100-days-challenge
An attempt to ace in competitive programming problem solving skills
Topics to be covered:-

1)Mathematics for competitive programming

2)Data structures

3)Algorithm

4)STL

5)OOP




**Data-Structure-and-algorithm**
In this repository, I would be sharing a daily byte regarding Data Structure and Algorithm. I would be discuss the code and algorithm to learn along with the community

***Linked List***
Linked List is a linear collection of the data elements. It is data structure consisting of collection of nodes which together represents the sequence. Each node consists of: o Data o Reference (Address to next node)


**Features of Linked List**
• Structure of Linked List allows the efficient insertion or removal of an element at any position

• Access time is linear in Linked List

• Random access is not feasible in Linked List

• Arrays have better cache locality compared to Linked List

Cache Locality(Locality of Reference or Principal of Locality)

Tendency of a processor to access same set of memory location repetitively over a shorter period of a time.



**Benefit of a Linked List over an array.**
The list items could be easily removed or re-inserted without any reallocation or reorganization of an entire structure because data items could not be restored contiguously. In the disk, while restructuring in an array is a long process. Linked List are dynamic, so the length of the list can be increased or decreased depending upon situation. However, the length of the array remains same as that at the time of deceleration and cannot be changed.

**Insertion in the Linked List**
Insertion in the Linked List, is a proccess of adding elements in the Linked List. Insertion in the Linked List is of three types:

•Insert at Head

•Insert at Tail

•Insert in Middle

**Deletion in the Linked List**
Deletion in the Linked List, is a process of removing the elements from the Linked List. Deletion is of three types:

•Deletion at the Head

•Deletion at the Tail

•Deletion in the Middle

**Searching in the Linked List**
Searching , is a process of Searching elements in the Linked List. Search could be done by:

•Iteration

•Recursion

**Reversing the Linked List**
Reversing, is a process of changing the order of elements in the linked list. Reversing is done by:

•Iteration

•Recursion

**Operator Overloading in the Linked List**
Operator overloading, is a process of overloading in order to perform specific operation in the list.

**Printing the Linked List**
A special customized loop is setup, to print up the elements in the linked list and print the value in it till NULL is reached.

**Why Merge Sort is preffered for Linked List**
The reason behind this is:

The complexity of the Merge sort remain as that of O(nlogn) despite the fact that, we find the mid-point in the Linked List

In Linked List, we can insert a node in between in O(1) time and space complexity ; if we are given reference to the previous node

We do not have random access to elements in the Linked List

Linked List follows sequential pattern, while reffering to any node. So, that could be a overhead for quick sort. Merge sort access the data sequentially.

**Circular Linked List**
When the tail node points to the head node instead of pointing to the NULL Pointer; then that linked list is called as Circular Linked List.

Some of the Applications of the Circular Linked List are:

In many C.P.U Algorithm, you need Circular Linked List to perform a given operation multiple times

In the implementation of forming different types of Queue

In the implementation of the advanced algorithm such as Fibonacci Heap

**List STL Functions**
List is included in the given C++ Program. The function is there to add all its utility and is managed

•Push_Back()
This function is used to add the elements at the end of the list

•Sort()
This function is used to sort the given list

•push_front()
This function is used to add the element at the front of the list

•pop_back()
As, the name goes; This function removes the last element from the list

pop_front()
This function removes the first element from the list

insert(position,element)
This function is used to insert the element in the linked list

•erase(position)
This function is used to remove the element in the given list

•remove(element)
This function removes the given element from the list

•front()
This function is used to print the first element in the list

**Stack**
Stack is a data structure, which represents the collection of the objects. A item could be added and stored in a stack using push operation. A object can be retrieved using pop operation, to remove an item from the stack. A item could be inserted at the top of the stack. A item could be either removed either from top or bottom of the stack. Their are two types of stack:

•LIFO(Last In First Out)
•FIFO(First In First Out)
FIFO stack is basically a type of Queue.

Stacks have several applications in the Computer Programming. LIFO is used to retrieve, recently used objects from cache. FIFO stacks is used to ensure the data is retrieved in the order it was entered. Stacks are basically created at the background, while application was running in front. If stack, runs out of memory such situation is termed as Stack Overflow .

**Genralizaition of Stack**
A stack could be generalized using templated class template . You can generalize the given code in a following way as told in file generalization of stack


