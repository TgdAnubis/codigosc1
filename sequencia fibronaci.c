#include <stdio.h>

int fatorial(int n) {
   
   if(n == 0) {
      return 1;
   } else {
      return n * fatorial(n-1);
   }
}

int fibronacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibronacci(n-1) + fibronacci(n-2));
   }
}

int main() {
   int n = 5;
   int i;
	
   printf("Fatorial of %d: %d\n" , n , fatorial(n));
   printf("Fibronacci of %d: " , n);
	
   for(i = 0;i<n;i++) {
      printf("%d ",fibronacci(i));            
   }
}
