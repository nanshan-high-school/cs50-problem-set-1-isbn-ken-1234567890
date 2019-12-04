#include <iostream>
using namespace std;
int main() {
  long long isbn;
  cin >> isbn;
  long long number = 0;
  long long first1 = isbn / 1000000000;
  isbn = isbn % 1000000000;
  long long first;
  first = first1 * 1;
  long long second1 = isbn / 100000000;
  isbn = isbn % 100000000;
  long long second;
  second = second1 * 2;
  long long thirth1 = isbn / 10000000;
  isbn = isbn % 10000000;
  long long thirth;
  thirth = thirth1 * 3;
  long long fourth1 = isbn / 1000000;
  isbn = isbn % 1000000;
  long long fourth;
  fourth = fourth1 * 4;
  long long fifth1 = isbn / 100000;
  isbn = isbn % 100000;
  long long fifth;
  fifth = fifth1 * 5;
  long long sixth1 = isbn / 10000;
  isbn = isbn % 10000;
  long long sixth;
  sixth = sixth1 * 6;
  long long seventh1 = isbn / 1000;
  isbn = isbn % 1000;
  long long seventh;
  seventh = seventh1 * 7;
  long long eighth1 = isbn / 100;
  isbn = isbn % 100;
  long long eighth;
  eighth = eighth1 * 8;
  long long ninth1 = isbn / 10;
  isbn = isbn % 10;
  long long ninth;
  ninth = ninth1 * 9;

  if( (first + second + thirth + fourth + fifth + sixth + seventh + eighth+ ninth) % 11 == isbn) {
    cout << "yes";
  }else {
    cout << "no";

  }
  


 


    
 

  
}
