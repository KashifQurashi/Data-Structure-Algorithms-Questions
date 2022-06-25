// Iterative C++ program to reverse an array

#include <bits/stdc++.h> /* You can't really compare the two. iostream is a header file that allows you to use input (cin) and output (cout). A header file is basically just a file with a collection of functions you can use to make coding easier. This is similar to the built in library in Python (Ex: import random). bits/stdc++.h is basically a way to import every single C++ header file. Many competitive programmers use this because they don't have to import every popular header file. However, a disadvantage is that it increases compilation time because it has to search through every possible functions. Most people do not find this to be too much of an issue, however, so you can probably go ahead and use it. However, it is considered bad practice to do this in actual software engineering. Hope this helps and have a good day :)*/

using namespace std;

/* Function to reverse an arr[] form start to end */

void reverseArray(int arr[], int start, int end) 
{

  while( start < end)
  {
    
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

/* Utility function to print an array */
void printArray(int arr[], int size) {

  for(int i = 0; i < size; i++)
    cout << arr[i] << "";

  cout << endl;
  
}

/* Driver function to test above functions */

int main(){

  int arr[] = {1, 2, 3, 4, 5, 6};

  int n = sizeof(arr) / sizeof(arr[0]);

// To print original array
  printArray(arr, n);
  
// Function calling
  reverseArray(arr, 0, n-1);

  cout << "Reversed array is" << endl;

// To print the Reversed array
  printArray(arr, n);

  return 0;

  
}