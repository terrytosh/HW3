/****
* PSEUDOCODE:
ReverseArray():

*
*/
#include <iostream>
#include <string>
#include "hw3.h"
using std::cout;
using std::endl;

void ReverseArray(int arr[], int length){
  int *temp_arr = new int(length);
  int ctr = length - 1;
  for(int i = 0; i < length; i++){
    temp_arr[i] = arr[ctr];
    ctr--;
  }
  for(int j = 0; j < length; j++){
    arr[j] = temp_arr[j];
  }
  delete temp_arr;
}

bool HasBalancedParentheses(std::string statement){
  return 0;
}

bool InDogish(std::string statement){
  return 0;
}