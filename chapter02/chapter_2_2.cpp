#include <iostream>
#include <stack>
using namespace std;

//2.2.1 迭代
int for_loop(unsigned n){
    int res = 0;
    for (int i = 1; i <= n; ++i){
        res += i;
    }
    return res;
}

int while_loop(unsigned n){
    int res = 0;
    int i = 0;
    while(++i <= n){
        res += i;
    }
    return res;
}

// string nested_for_loop(unsigned n){
//     ostringstream res;
//     for (int i = 1; i <= n; i++){
//         for (int j = 1; j <= n; j++){
//             res << "(" << i << ", " << j << "), ";
//         }
//     }
//     return res.str();
// }

// 2.2.2 递归(recurs)
int recurs(unsigned n){
    if(n == 1){
        return 1;
    }
    int res = recurs(n - 1);
    return n + res;
}
// 2.2.2.1 调用栈，递归可能会导致栈溢出

// 2.2.2.2 尾递归（tail recursion）
//请注意，许多编译器或解释器并不支持尾递归优化。
//例如，Python 默认不支持尾递归优化，因此即使函数是尾递归形式，仍然可能会遇到栈溢出问题

// 2.2.2.3 递归树
// 斐波那契数列

// 2.2.3 对比



/* 使用迭代模拟递归 */
int forLoopRecur(int n) {
    // 使用一个显式的栈来模拟系统调用栈
    stack<int> stack;
    int res = 0;
    // 递：递归调用
    for (int i = n; i > 0; i--) {
        // 通过“入栈操作”模拟“递”
        stack.push(i);
    }
    // 归：返回结果
    while (!stack.empty()) {
        // 通过“出栈操作”模拟“归”
        res += stack.top();
        stack.pop();
    }
    // res = 1+2+3+...+n
    return res;
}

int fib(unsigned n){
    if(n == 1 || n == 2){
        return n - 1;
    }
    int res = fib(n - 1) + fib(n - 2);
    return res;
}
int tail_recurs(unsigned n, unsigned res){
    if(n == 0){
        return res;
    }
    return tail_recurs(n - 1, res + n);
}

int main(){
    cout << "for_loop => " << for_loop(100) << endl;
    cout << "while_loop => " << while_loop(100) << endl;
    cout << "recurs => " << recurs(100) << endl;
    cout << "tail_recurs => " << tail_recurs(100, 0) << endl;
    return 0;
}