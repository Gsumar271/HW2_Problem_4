# HW2_Problem_4
HW 2 Problem 4
HW 2 PROBLEM 4
YEVGENIY SUMARYEV


In this problem the objective was to create our own stack functions, 1 for listing all the elements in the stack and 2 for iterating through the stack 
and changing an elements value based on it’s position.
I used array based stack to implement such functions. for listing all the elements I made function called printStack() which would start at 
position 0 in the array and loop until the last element which would be stackTop variable minus one. For each element I would dereference it
by adding the counter value to base element, and it would display the value of the element. If someone would implement a class then
the class would have to overload stream<< operator in order for the class element to be properly displayed. The class that I used in problem 8
called OrderType for Orders, had to overload stream<< operator so that Orders could be displayed properly
The function for iterating and changing the value of element I called replace(), in this function i would start at element 0
at the bottom of the stack and then using while loop would increment counter until necessary position is reached, I could’ve also just added
position directly to the first pointer and dereference it but I wanted to show the iteration. If this was linked list we would iterate the same, 
moving current node sequentially until proper position is reached. With array implementation I simply inserted the new item into 
the position, if this was linked list I would’ve used 2 pointer, previous and current in order to delete one node and put another in it’s place
In the main problem I used a templated BuilStack() method to build a stack of random elements, and then used a for loop to replace every 5th
 element of the stack with the number 5 in order to show how stack uses replace() function. And the function printStack() would list all the 
elements 
