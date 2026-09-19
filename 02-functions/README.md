# 02-functions —— 函数与数组

学完「函数」这一章后，**关掉视频、自己独立写**的完整小程序放在这里。

和 `01-basics/` 的区别：`01-basics` 里的程序所有逻辑都堆在 `main` 里；
这里的程序要**把功能拆成函数**，`main` 只负责调用。

## 计划放什么

| 程序 | 练什么 |
|---|---|
| `is-leap` | 把闰年判断封装成 `int isLeap(int year)` |
| `is-prime` | 把质数判断封装成 `int isPrime(int n)` |
| `days-in-month` | `int daysInMonth(int year, int month)` |
| `gcd-lcm` | 最大公约数 + 最小公倍数，两个函数 |
| `factorial-recursive` | 递归求阶乘 |
| `fibonacci-recursive` | 递归求斐波那契第 n 项 |
| `hanoi` | 汉诺塔（递归的毕业题） |

## 命名规矩

- **项目名 / 文件夹名**：全小写字母 + 短横线，**不要空格、括号、中文**
- **源文件名**：`xxx.c`
- **每个程序一个独立的 VS 项目**（因为一个项目只能有一个 `main`）

## 写程序的三条硬要求

1. 文件头部写注释：题目、日期、用到了哪些语法点
2. **跑一遍，把测试的输入输出记进文件头**
3. 一个程序一次提交：`git add .` → `git commit -m "feat: ..."` → `git push`
