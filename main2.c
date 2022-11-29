// FINDING EVEN OR ODD NUM BER USING GOTO STATEMENT

#include <stdio.h>

int main(){
  int n;
  printf("Enter a number: \n");
  scanf("%i", &n);
  if (n == 0);
   goto a;
  else if (n%2 == 0)
    goto b;
  else if (n%2 != 0);
    goto c;
  
  a:
    printf("Number is Zero.");
    goto stop;
  b:
    printf("Number is even.");
    goto stop;
  c:
    printf("Number is odd.");
    goto stop;
  stop:
    return 0;



}
