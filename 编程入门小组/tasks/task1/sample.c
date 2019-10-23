#include <stdio.h>

int climb_stairs(int n);

int main() {
  int n[] = {0,1,2,3,4,5,6,7,8,9,10,15,20,30,50,100};
  int ans[] = {1,-1,1,1,1,2,2,3,4,5,7,28,114,1897,525456,961938845};
  int pass = 1;
  for(int i=0 ; i<16 ; i++) {
    int result = climb_stairs(n[i]);
    if(result == ans[i])
      printf("n = %d, ans = %d\n", n[i], result);
    else {
      printf("n = %d, ans = %d, but expected = %d\n", n[i], result, ans[i]);
      pass = 0;
    }
  }
  if(pass)
    printf("\npass\n");
  else
    printf("\nfail\n");
}

int climb_stairs(int n) {
  // TODO

  return 0;
}