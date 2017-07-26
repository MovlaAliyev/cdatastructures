/*
*   Developed by Movla Aliyev for educational purpose
*/
#include <stdio.h>
#include <stdlib.h>
#include "stack_arr.h"


int main(){
   stack *s1 = declare();
   stack *s2 = declare();

   push(s2, 4);
   push(s2, 5);
   push(s2, 6);
   push(s2, 7);

   push(s1,1);
   push(s1,2);
   push(s1,3);
   push(s1,4);
   print_stack(s1);
   printf("--------------\n");


   pop(s1);
   pop(s1);
   pop(s1);
   pop(s1);
   pop(s1);

   print_stack(s1);
   print_stack(s2);
}




