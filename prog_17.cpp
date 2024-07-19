#include <bits/stdc++.h>
using namespace std;

bool isprime(int num){
    if(num<=1) return false;
    
    for(int i=2; i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int sol(vector<int> arr) {
    for(int i =0;i<arr.size();i++){
        if(isprime(arr[i])){
            return i;
        }
    }
    return -1;
}

int sol2(vector<int> arr) {
    for(int i =0;i<arr.size();i++){
        if(!(isprime(arr[i]))){
            return i;
        }
    }
    return -1;
}

int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    int maxi = max({a,b,c,d,e});

    if (maxi> 20) {
        vector<int> arr = {2,3,5,4,7,9};
        cout<<sol(arr);
    } else {
        vector<int> arr = {2,3,5,4,7,9};
        cout<<sol2(arr);
    }

    return 0;
}
