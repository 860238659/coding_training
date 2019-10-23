#include <stdio.h>

#define TRUE 1
#define FALSE 0
int n[] = {0,1,2,3,4,5,6,7,8,9,10,15,20,30,50,100};
int ans[] = {1,-1,1,1,1,2,2,3,4,5,7,28,114,1897,525456,961938845};
int pass = TRUE;

int climb_stairs(int n);
void run_test();
void print_result();

int main() {

  run_test();

}

int climb_stairs(int n) {
  // TODO

  return 0;
}

void run_test() {
  int result;
  for(int i=0 ; i<16 ; i++) {
    result = climb_stairs(n[i]);
    if(result == ans[i])
      printf("n = %d, ans = %d\n", n[i], result);
    else {
      printf("n = %d, ans = %d, but expected = %d\n", n[i], result, ans[i]);
      pass = FALSE;
    }
  }
  print_result();
}

void print_result() {
  if(pass)
    printf("\npass\n");
  else
    printf("\nfail\n");
}