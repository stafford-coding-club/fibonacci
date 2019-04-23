#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

   if (argc < 2) {
      printf("Usage: %s <limit>\n", argv[0]);
      return 0;
   }

   int lim = atoi(argv[1]);

   unsigned long long a = 0;
   unsigned long long b = 1;
   unsigned long long n = 0;

   for (int i = 0; i < lim; i++) {

      n = a + b;

      if (n < b) break;
      
      a = b;
      b = n;

      printf("%llu\n", n);

   }

   return 0;
}