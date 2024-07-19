#include <bits/stdc++.h>
using namespace std;



int sol(int num) {
    int res=0;
    while(num!=0){
        res++;
        num/=10;
    }
    return res;
}

int sol2(vector<char> arr, char item) {
    int res=0;
    for(auto it:arr){
        if(it==item){
            res++;
        }
    }
    return res;
}
vector<int> sol3(vector<int> arr){
    vector<int> res;
    for(auto it:arr){
        res.push_back(it*it);
    }
    return res;
}

int main() {
    long long sum;
    cin>>sum;
    
    if(sum>10000){
        int num = 1231234;
        cout<<sol(num);
    }else if(sum<10000){
        vector<char> arr = {'m','s','l','m','l'};
        char item = 'm';
        cout<<sol2(arr, item);
    }else{
        vector<int> arr = {1,2,3,4,5};
        vector<int> res = sol3(arr);
        for(auto it: res){
            cout<<it<<" ";
        }
    }
    return 0;
}
