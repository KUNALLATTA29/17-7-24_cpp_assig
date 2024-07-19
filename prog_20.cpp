#include <bits/stdc++.h>
using namespace std;


int sol(int num) {
    int res =0;
    while(num!=0){
        int d = num%10;
        res+=d;
        num/=10;
    }
    return res;
}

int sol2(int num) {
    int res =0;
    while(num!=0){
        int d = num%10;
        res++;
        num/=10;
    }
    return res;
}

int main() {
    long a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    long pro = a*b*c*d*e;

    if (pro> 500) {
        int num = 12312;
        cout<<sol(num);
    } else {
        int num = 12312;
        cout<<sol2(num);
    }

    return 0;
}
