/****
* PSEUDOCODE:
ReverseArray():

*
*/
#include <iostream>
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

bool HasBalancedParentheses(std::string str){
  int ctr = 0;
  bool flag;

  for(int i = 0; i < str.length(); i++){
    if(str[i] == '('){
      ctr++;
    }
    else if(str[i] == ')'){
      if(ctr < 1){
        flag = false;
        break;
      }
    ctr--;
    }
  }

  if(ctr != 0){
    flag = false;
  }
  else{
    flag = true;
  }
  return flag;
}

bool InDogish(std::string str){
  return 0;
}