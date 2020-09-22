/****
* PSEUDOCODE:
ReverseArray():
Initialize a variable (temp) to temporarily store 
the values being swapped and another variable (ctr)
of arr.length() - 1 to index backwards through the array.
Iterate through the array from 0 to length / 2, store the
value at arr[index] in temp, set arr[index] = arr[ctr], set
arr[ctr] = temp, and then decrement ctr by 1.

HasBalancedParentheses():
Initialize a variable (ctr) to store the current number
of available open parentheses '(' and a bool flag, with 
initial value true, to store the return value.
Iterate through the string from 0 to str.length().
If the current char == '(' then increase ctr by 1.
Else if the current char == ')' then test whether an
open parentheses is avaialbe to be paired to the
closed parentheses (ctr < 1). If no available open
parentheses then set the return bool to false and break
from the loop. If parentheses available, decrement ctr
by 1 and continue.
Then, test for any open parentheses without a matching
closing parentheses by (ctr > 0). If true, set flag to
false. Return flag.

InDogish():
*
*/
#include <iostream>
#include <string.h>
#include "hw3.h"
using std::cout;
using std::endl;

bool DogishHelper(std::string word, char letter);
bool InXishHelper(std::string word, char letter);

//length should be passed as a parameter so we
//have the number of elements in the array
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
  bool flag = true;

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

  if(ctr > 0){
    flag = false;
  }

  return flag;
}

bool InDogish(std::string word){
  return DogishHelper(word, 'd');
}
/*
bool InXish(std::string word, std::string input){
  if(word.length() < input.length()){
    return false;
  }
  for(int i = 0; i < input.length() - 1; i++){
    return InXishHelper(word, input[i]);
  }
}
*/
bool DogishHelper(std::string word, char letter){
  if(word == ""){
    return false;
  }
  if(word[0] == letter){
    if(letter == 'd'){
      return DogishHelper(word.substr(1), 'o');
    } 
    else if(letter == 'o'){
      return DogishHelper(word.substr(1), 'g');
    } 
    else{
      return true;
    }
  } 
  else{
    return DogishHelper(word.substr(1), letter);
  }
}
/*
bool InXishHelper(std::string word, char letter){
  if(word == ""){
    return false;
  }
  if(word[0] == letter){
    
  }
  else{
    return InXishHelper(word.substr(1), letter);
  }
}*/