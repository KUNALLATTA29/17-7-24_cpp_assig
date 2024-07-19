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

void sol(vector<int>  arr) {
    vector<int> even;
    vector<int> odd;
    for(auto it:arr){
        if(it%2==0){
            even.push_back(it);
        }else{
            odd.push_back(it);
        }
    }
    
    for(auto it: even){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it: odd){
        cout<<it<<" ";
    }
}

void sol2(vector<int> arr) {
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

int main() {
    long a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    long  pro = (a*b*c*d*e);

    if (pro>600) {
        vector<int> arr = {1,2,3,4,5,5,6,7,8};
        sol(arr);
    } else {
        vector<int> arr = {1,2,3,4,5,5,6,7,8};
        sol2(arr);
    }

    return 0;
}
