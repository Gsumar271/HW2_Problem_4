#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <time.h>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <chrono>
#include "stackType.h"

using namespace std;

//function that builds a stack
//inserts random elements into the array
void BuildStack(stackType<int> &arr, int size){

    for (int i = 0; i < size; i++)
    {
        arr.push(rand() % 100 + 1);
    }

}

int main(){

    int x;
    int const size = 50;
    stackType<int> arrayStack(size);

    //build a random stack with 50 integers
    BuildStack(arrayStack, size);

    //list all the elements in the stack 
    arrayStack.printStack();

    //replace every 5th integer 
    //with the number 5
    for (int i = 0; i < size; i++)
    {
        if(i % 5 == 0)      
            arrayStack.replace(i, 5);
    }
    
    //list the elements in the stack after the replace operation 
    arrayStack.printStack();

    return 0;
}