#include <iostream>
#include <stdlib.h>

using namespace std;

typedef unsigned int u32;

static void fizzbuzz(u32 n){
  for (u32 i = 0; i <= n; ++i){
    if (i % 3 == 0 && i % 5 == 0)
      cout << "FizzBuzz ";
    else if (i % 3 == 0)
      cout << "Fizz ";
    else if (i % 5 == 0)
      cout << "Buzz ";
    else
      cout << i << " ";
  }
  cout << endl;
}

int main(void){
  
  u32 n;

  cout << "Type any number :" << endl; 
  cin >> n;
  
  fizzbuzz(n);
  return 0;
}
