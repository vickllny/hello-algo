#include <iostream>
using namespace std;

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

//TODO 2.2.2 递归(recurs)

int main(){
    cout << "for_loop => " << for_loop(100) << endl;
    cout << "while_loop => " << while_loop(100) << endl;
    return 0;
}