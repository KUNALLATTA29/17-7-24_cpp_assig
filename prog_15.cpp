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

void sol(vector<int> arr) {
    vector<int> prime;
    vector<int> nonprime;
    
    for(auto it:arr){
        if(isprime(it)){
            prime.push_back(it);
        }else{
            nonprime.push_back(it);
        }
    }
    
    for(auto it: prime){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it: nonprime){
        cout<<it<<" ";
    }
}

int sol2(vector<int> arr) {
    int res=0;
    res+=arr[0];
    res+=arr[arr.size()-1];
    return res;
}

int main() {
    long a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    int pro = (a*b*c*d*e);

    if (pro > 200) {
        vector<int> arr = {1,2,3,4,5,6,7};
    } else {
        vector<int> arr = {1,2,3,4,5,6,7};
        cout<<sol2(arr);
    }

    return 0;
}
