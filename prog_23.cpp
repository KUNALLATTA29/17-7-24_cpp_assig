#include <bits/stdc++.h>
using namespace std;


int sol(int num) {
    int res=0;
    while(num!=0){
        int k = num%10;
        if(k==3){
            res++;
        }
        num/=10;
    }
    return res;
}

int sol2(int num) {
    int res=0;
    while(num!=0){
        int k = num%10;
        if(k==2){
            res++;
        }
        num/=10;
    }
    return res;
}

int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    int mini = min({a,b,c,d,e});

    if (mini>8) {
        int num = 123134;
        cout<<sol(num);
    } else {
        int num = 123134;
        cout<<sol2(num);
    }

    return 0;
}
