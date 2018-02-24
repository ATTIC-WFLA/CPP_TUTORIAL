/*
*WFLA ATTIC C++ TUTORIAL
*by cshi0
*/
//return type, function name, parameter list, function body
//block of statements

#include<iostream>//standard library
#include"Header.h"

//cin, cout

using std::cout;
using std::cin;
using std::endl;
using std::system;

int main() 
{
  //+,-,*,/,%,+/-
  //!,<,<=,>,>=,==,!=,&&,||
  int arr[] = {1,2,3,4,5,6};
  char arr2[] = { 'a', 'b', 'c', '\0' };//"abc"
  bool a;
  bool b = false;
  a = b;
  bool c = b;
  int i = 1;
  int j = 2;
  a = 1 < 2;//a = true
  1 <= 2;
  a = 1 > 2;//a = false
  1 >= 2;
  1 != 2;
  a = true && true;//a = true
  a = true || false;//a = true
  a = !false;//a = true
  //++/--
  j = ++i;//i = 2;j = 2
  j = i++;//i = 2;j = 1
  j = --i;//i = 0;j = 1
  j = i--;//i = 0;j = 1
  std::cout << "the value of a is " << arr[0] << "\"\\";//",',?,\
  
  std::system("pause");
  return 0;
}