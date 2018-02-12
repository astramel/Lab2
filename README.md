# Lab2 Linearly Linked Lists
The linear linked list is one of several ways to organize and store sequential data and is used frequently in computer programming. In this lab you will work with class LLList, which implements a linear linked implementation of a sequence of doubles. This implementation of the LLList structure stores a single pointer containing the address of the first Node of a linear linked list of Nodes in each LLList object. You should find the following files already in your repo for completing this assignment: Node.h, Node.cpp, LinkedList.h, LinkedList.cpp, ListProcessor.cpp.
Study the implementation of the Node and LLList methods. You will only be editing the LinkedList files, the Node class works as is.
## Lab Assignment
1.	Examine, compile, and execute the code using ListProcessor as your entry point.
2. The LLList class would be easier to use if a method that reports the size of a LLList was available. Add a size method to the LLList class. The signature for this will be
**Modify the main() routine in ListProcessor.cpp to thoroughly test the size method.**
4. Add a sum() method to the LLList class. sum() returns a double which is the sum of the doubles stored in the linked storage structure of a LLList class object. In order to perform this task you will need to traverse the linked list of the object. For tips on how to write this function look at the print method in the LLList class.  
	**Modify the main() routine in ListProcessor.cpp to thoroughly test the sum method.**
 
5.	Your next task is to create a new insertion method in the LLList class. This method will insert the value passed in as a parameter into a new Node object inserted as the last Node in the linked list. The signature for this method will be void insertAsLast(double x). There are two groups of cases you should consider when writing this method.  
	This LLList object is empty: A new Node containing x will be the only Node in the linked list. This LLList object has one or more Nodes in its linked list: The code must traverse to the current last Node of the linked list and insert a new Node containing x following this Node. The new Node is then the last Node in the linked list. **Modify the main() routine in ListProcessor.cp to thoroughly test the insertAsLast method.**

## Turn In:
Upload all your modified files: ListProcessor.cpp, LinkedList.h, and LinkedList.cpp. 
Also include a screenshot of the output from your modified ListProcessor.cpp testing file, with the file name being RunOutput.png.
Write your name in comments at the top of each file. 
You will then submit the URL of your repository into Wyocourses to finish this assignment.

## Criteria
This is the criteria by which I will be judging your code. This assignment is worth 20 points and is due on Sunday Feb. 18 at 11:59pm. The same late policy as described in the syllabus applies.
1. size method: 5pt
2. sum method: 5pt
3. insertAsLast method: 10pt
  - works for empty list: 5pt
  - works for non-empty list: 5pt
