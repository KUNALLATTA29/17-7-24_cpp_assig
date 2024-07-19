#include <bits/stdc++.h>
using namespace std;


int sol(vector<int> arr) {
    int res = 0;
    for(auto it:arr){
        if(it%2==0){
            res++;
        }
    }
    return res;
}

int sol2(vector<int> arr) {
    int res = 0;
    for(auto it:arr){
        if(it%2!=0){
            res++;
        }
    }
    return res;
}

int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    int mini = min({a,b,c,d,e});

    if (mini> 10) {
        vector<int> arr = {2,3,5,4,7,9};
        cout<<sol(arr);
    } else {
        vector<int> arr = {2,3,5,4,7,9};
        cout<<sol2(arr);
    }

    return 0;
}
