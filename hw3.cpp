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
  int temp, ctr = length - 1;
  for(int i = 0; i < length / 2; i++){
    temp = arr[i];
    arr[i] = arr[ctr];
    arr[ctr] = temp;
    ctr--;
    }
}

bool HasBalancedParentheses(std::string statement){
  return 0;
}

bool InDogish(std::string statement){
  return 0;
}