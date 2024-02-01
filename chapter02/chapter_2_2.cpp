#include <iostream>
using namespace std;

int for_loop(unsigned n){
    int res = 0;
    for (int i = 1; i <= n; ++i){
        res += i;
    }
    return res;
}

int main(){
    cout << for_loop(100) << endl;
    return 0;
}