#include <bits/stdc++.h>
using namespace std;


int sol(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int sol2(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    int sums = a+b+c+d+e;

    if (sums > 25) {
        cout<<sol(sums);
    } else {
        cout<<sol2(sums);
    }

    return 0;
}
