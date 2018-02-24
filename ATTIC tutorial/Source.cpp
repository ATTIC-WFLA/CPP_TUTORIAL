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
  1 >= 2;//expression
  ;//null statement
  1 != 2;
  a = true && true;//a = true
  a = true || false;//a = true
  a = !false;//a = true
  //++/--
  j = ++i;//i = 2;j = 2
  j = i++;//i = 2;j = 1
  j = --i;//i = 0;j = 1
  j = i--;//i = 0;j = 1
  std::cout << "the value of a is " << arr[0] << "\"\\" << endl;//",',?,\
  
  {
    //compound statement/block
    int test;
  }
  /*
  if(condition)
    statement
  */
  /*
  if(condition)
    statement
  else
    statement2
  */

/*
switch(condition){
  case condition1:
    statement1;
    break;
  case condition2:
    statement2;
    break;
  default:
    statement3;
    break;
}
char command;
cin >> command;
switch (command) {
case 'a':
cout << "1" << endl;
break;
case 'b':
cout << "2" << endl;
break;
default:
cout << "default" << endl;
break;
}
*/

 /*
 while(condition)
  statement
  int test = 0;
  while (test < 10) {
  cout << "while" << endl;
  ++test;
  }
 */

  /*
  for(init-statement;condition;expression)
    statement
    for (int test = 0; test < 10; ++test) {
    cout << "while" << endl;
    }
  */

  /*
  do
    statement
  while(condition);
  int test = 0;
  do {
  cout << "do while" << endl;
  } while (test != 0);
  */

  /*
  for (int test = 0; test < 10; ++test) {
    if (test == 5) {
      int i = 0;
      while (i < 5) {
        cout << "true ";
        ++i;
      }
      cout << endl;
    }
    else {
      cout << "false" << endl;
    }
  }
  */

  //break;
  /*
  for (int test = 0; test < 10; ++test) {
    if (test > 5) {
      break;
    }
    cout << "while" << endl;
  }
  */

  //continue;
  /*
  for (int test = 0; test < 10; ++test) {
    if (test > 5) {
      continue;
    }
    cout << "while" << endl;
  }
  */
 
  std::system("pause");
  return 0;
}