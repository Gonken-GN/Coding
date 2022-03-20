#include <stdio.h>

void alfabet(char i) {
   printf("%c", i);
   if(i > 'a')
   {
       alfabet(i-1);
   }
   
}

int  main() {
   char i = 'z';
   alfabet(i);
   return 0;
}