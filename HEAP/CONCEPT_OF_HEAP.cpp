#include<iostream>
using namespace std;

int main(){
    int a = 10;   //stored in stack

    int *p = new int();      //allocate memory in heap. The pointer p is stored in stack and it points to a memory address in heap

    *p = 10;        //storing value in heap

    delete(p);     //deallocate memory but pointer remains in the stack only its value is deleted.At this time pointer is pointing to a void in heap.
                    //such pointers are called dangling pointer and it should not remain in stack.(it could be reused or deleted)
    
    
    p = new int[4];         //for storing an array.Pointer p is now pointing to 0th index of a array of size 4.

    delete[]p;          //for deleting array

    p = NULL;           //to remove pointer p

    return 0;               //so difference btw stack and heap is -
                            // in stack memory is allocated automatically by compiler but in heap we have to manually allocate and deallocate memory.
                            //size of stacks is fixed but heat size is not fixed.
                            //in stack we cannot access variable from diiferent functions directly(local variable) but in heap a memory allocated in heap can be accessed
                            // from anywhere




}