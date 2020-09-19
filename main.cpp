#include <iostream>
#include "hw3.h"

int main(){
  //Test ReverseArray();

  int arr[] = { 1, 2, 3, 4, 5 };
	ReverseArray(arr, 5);
  int n = sizeof(arr)/sizeof(arr[0]);

	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
  std::cout << std::endl;

  int arr2[] = { 1, 2, 3, 4, 5, 6 };
	ReverseArray(arr2, 6);

  for (int i = 0; i < 6; i++) {
		std::cout << arr2[i] << " ";
	}
  std::cout << std::endl;

//Test HasBalancedParentheses();
 std::string statement1 = "((())())";
 if(HasBalancedParentheses(statement1)){
   	std::cout << "balanced: " << std::endl;
 }

 std::string str = "(";
 if(HasBalancedParentheses(str)){
   std::cout << "balanced" << std::endl;
 }
 else{
   std::cout << "not balanced" << std::endl;
 }

// Test InDogish();
 std::string mydogs = "dpoags";
 if(InDogish(mydogs)){
   	std::cout << "Part of Dogish? " << std::endl;
 }

 // Test bool InXish(sting mytext, sting myword);

}
/*
  bool DogishHelper( std::string word, char letter){
    if(word == "") {
      return false;
    }
    if(word[0] == letter) {
      if(letter == 'd') {
        return DogishHelper(word[.substring(1)], 'o');
      } else if(letter == 'o') {
        return DogishHelper(word.substring(1), 'g');
      } else {
        return true;
      }
    } else {
      return DogishHelper(word.substring(1), letter);
    }
  }
*/