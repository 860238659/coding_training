#include <stdio.h>

// 全局常量声明
#define TRUE 1
#define FALSE 0

// 测试数据定义
int n[] = {0,1,2,3,4,5,6,7,8,9,10,15,20,30,50,100};
int ans[] = {1,-1,1,1,1,2,2,3,4,5,7,28,114,1897,525456,961938845};
int pass = TRUE;

// 函数声明
int climb_stairs(int n);
void run_test();
void print_result();

// 主程序入口
int main() {

  run_test();

}

// TODO
int climb_stairs(int n) {
  // write your code here

  return 0;
}

// 测试函数
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

// 打印测试结果函数
void print_result() {
  if(pass)
    printf("\npass\n");
  else
    printf("\nfail\n");
}