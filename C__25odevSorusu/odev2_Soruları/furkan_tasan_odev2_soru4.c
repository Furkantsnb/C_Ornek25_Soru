#include <stdio.h>


int main() {
   int i;
   while( i<=3000000) {
   	  printf("%d\n", i);
      if(i % 1000000 == 0) {
         printf("******************************************************************%d\n", i);
        
      }
      i++;
   }

   return 0;
}
