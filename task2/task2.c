#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int sub (int a, int b);
int mux (int a, int b);
int divi (int a, int b);
int exi (int a, int b);


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  int (*func_ptr_arr[])(int, int) = {add, sub, mux, divi, exi};
  int func, a, b;
  printf("Operand 'a': ");
  scanf("%d", &a);
  printf("Operand 'b': ");
  scanf("%d", &b);
  printf("\nSpecify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
  scanf("%d", &func);
  printf("\n");

  int x =(*func_ptr_arr[func])(a, b);
  printf("x = %d\n", x);
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int sub (int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b; }
int mux (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divi (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a / b; }
int exi (int a, int b) { printf ("Exiting program...\n"); exit(0);}
