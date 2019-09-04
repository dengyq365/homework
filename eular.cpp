#include <iostream>
using namespace std;
#define LL long long 


// O(nlog(n))
//  根据欧拉函数值的通式计算
//  phi(n) = n(1-1/p1)(1-p2)..(1-pn)
LL eular (LL n){
    LL ans = n;
    //  枚举 只需要到log2(n)即可
    for(int i=2; i * i <= n; i++){
        if(ans % i == 0){
            ans -= ans/i;
        }
        while(n % i == 0){
            n /= i;
        }
    }
    if(n > 1) ans -= ans/n;
    return ans;
}