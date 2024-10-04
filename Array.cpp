#include <iostream>
#include <limits.h>
using namespace std;

int main() {
//   int marks[5] = {10, 20, 30, 40, 50};
//   for(int i = 0; i < 5; i++){
//     cout << marks[i] << endl;
//   }
//     cout<<endl<<endl;

//   float percent[5] = {12.21, 12.3, 12.4, 12.5, 12.6};

//   for(int i = 0; i < 5; i++){
//     cout << percent[i] << endl;
//   }

// cout<<sizeof(marks) / sizeof(int)<<endl;;


  // program for smallest in array

  int arr[] = {3,63,23,54,86,23,856,213,-43,345};
  int size = sizeof(arr)/sizeof(int);

  int smallest = INT_MAX;
  for(int i = 0; i < size; i++){
    if(arr[i] < smallest){
      smallest = arr[i];
    }
    //we can replace if by writing
    // smallest = min(smallest, arr[i]);
  }
  cout<<"smallest no: "<<smallest<<endl;



  //Program for largest in array

  int largest = INT_MIN;
  int NewArr[] = {3,63,23,54,86,23,856,213,-43,345};

  for(int j = 0; j < size; j++){
    largest =  max(NewArr[j], largest);
  }
  cout<<"Largest no: "<<largest;


  //Program for linear search an array

  int arr[] = {1,2,23,4,35,6,74,82,93,10};
  int target = 74;
  int size = sizeof(arr)/sizeof(int);

  for(int i = 0; i < size; i++){
    if(arr[i]==target){
      cout<<"Target found at index "<<i<<endl;
      break;
    }
    else{
      cout<<"Target Not Found";
    }
  }

  //program for Reversing an Array
}


