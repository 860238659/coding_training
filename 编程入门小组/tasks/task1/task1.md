# Task 1

## ddl: 11/3 23:59
- 代码模版为 `sample.c`，拷贝一个到自己的目录下开始作答
- 订在11/3主要是希望能在期中考前能再出一个task2，希望大家积极参与，有问题欢迎发问
- 第一次任务先来个简单的编程题试试水温，习惯一下使用题目模版按题意写代码跑测试的感觉(学习不要把代码全部写在main里面，透过分成不同的方法来组织代码跟清晰)；重心主要摆在理解题，理解自己写的都是些什么东西，所谓的“语言”是怎么分类的，后面几个学期的课程多会上到一些硬件的东西(像是计基、计组、操作系统啥的)，所以这理主要学一些软件上或是高层次的抽象概念

# 1. 编程题

## 题目：爬楼梯
一个人从地面向上爬，每次只能选走`2阶`或是`3阶`，刚好抵达`n阶`时输出可能的走法数，否则输出`-1`

## TODO：完成方法 `int climbd_stairs(int n)`
- 参数：n (总阶数)
- 参数限制：n >= 0, n为整数
- 返回值：-1 or 可选方法数

## 测试
- 直接运行模版代码
- 输出最后一行 `fail` 表示程序答案错误，`pass` 表示答案全部正确

## 样例
```c
// input
0
// output
1   // no movement is a choice
```
```c
// input
1
// output
-1  // unreachable
```
```c
// input
5
// output
2   // (2,3), (3,2) two choices
```
```c
// input
8
// output
4  // (2,2,2,2), (2,3,3), (3,2,3), (3,3,2) four choices
```

# 2. 理解题

## 主旨：加强对高级语言编程的理解
1. 简单解释什么是`机器语言`, `低级语言`, `高级语言`，出现的先后顺序，各举一些例子(代码语句范例(机器语言跟汇编语句) or 语言种类(高级语言))

2. 高级语言相对于机器语言与低级语言带来了什么优势(提示：开发效率、代码可读性、平台移植性)，又造成哪些缺点(运行效率)，并解释为什么

3. 就经典的几种高级语言来说：以`编程方式`可以分成：面对过程编程(Procedure Oriented)和面对对象(Object Oriented)编程；以`运行方式`来说可以分成：编译型(Compile)和解释型(Interpreter)语言；以类`型转换规则`来说可以分成：弱类型(weakly typed)和强类型(strongly typed)语言；与类型转换易搞混的是以`类型检查`分成：静态类型(static)和动态类型(dynamic)。简单描述四种方式八种类型的特征或差异，八种类型各举一个高级语言(可能重复)

4. Bonus) 说说你查到的计算机学科有什么(最好是有兴趣的，看不懂想了解的也可以写上来)




