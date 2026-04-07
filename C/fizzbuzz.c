#include <stdio.h>
#include <stdlib.h>

typedef unsigned int u32;

static void fizzbuzz(u32 n){
  for (u32 i = 1; i <= n; ++i){

      if (i % 3 == 0 && i % 5 == 0)
        printf("FizzBuzz ");
      else if (i % 3 == 0)
        printf("Fizz ");
      else if (i % 5 == 0)
        printf("Buzz ");
      else
        printf("%d ", i);
  }
  puts("");
}

int main(void){
  
  u32 n;
  puts("Type any number:");
  
  if (scanf("%d", &n) != 1){
    exit(EXIT_FAILURE);
  }

  fizzbuzz(n);
  return 0;
}
