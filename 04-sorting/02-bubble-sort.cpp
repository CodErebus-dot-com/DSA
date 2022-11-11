// program for bubble sort
// Optimized bubble sort in C++
#include <iostream>
using namespace std;

// perform bubble sort
void bubbleSort(int array[], int size) {

  // loop to access each array element
  for (int step = 0; step < (size-1); ++step) { // or loop can be run for step=1 upto step=size
      
    // check if swapping occurs
    int swapped = 0;
    
    // loop to compare two elements
    for (int i = 0; i < (size-step-1); ++i) { // step=1 to size => i=0 to size-step
        
      // compare two array elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {

        // swapping occurs if elements
        // are not in intended order 
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        
        swapped = 1;
      }
    }

    // no swapping means the array is already sorted
    // so no need of further comparison
    if (swapped == 0)
      break;
  }
}

// print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int data[] = {-2, 45, 0, 11, -9};
  
  // find the array's length
  int size = sizeof(data) / sizeof(data[0]);
  
  bubbleSort(data, size);
  
  cout << "Sorted Array in Ascending Order:\n";
  printArray(data, size);
}

/*
  a. Space complexity -> O(2) for optimized and O(1) if no swapped check is made
  b. Time complexity:
    - Worst case -> O(n^2)
    - Best case -> O(n)
    - If swapped flag check is not used, then worst and best cases will be O(n^2)
  c. Use case -> when complexity does not matter
  d. Stability -> Yes
    - The order of identical elements in array will be maintained post sorting
*/
