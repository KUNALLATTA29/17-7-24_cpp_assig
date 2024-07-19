#include <bits/stdc++.h>
using namespace std;


int sol(vector<int> arr,int num){
    int res=0;
    for(auto it:arr){
        if(it==num){
            res++;
        }
    }
    return res;
}


int sol2(vector<int> arr, int num) {
    for(int i=0;i<arr.size();i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}

int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;

    
    int mini = min({a,b,c,d,e});

    if (mini > 3) {
        vector<int> arr = {1,2,2,4,2,5,4};
        cout<<sol(arr,mini);
    } else {
        vector<int> arr = {1,2,2,4,2,5};
        cout<<sol2(arr,mini);
    }

    return 0;
}
