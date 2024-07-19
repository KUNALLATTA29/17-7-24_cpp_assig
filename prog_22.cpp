#include <bits/stdc++.h>
using namespace std;


int sol(vector<int> arr) {
    for(int i=0;i<arr.size();i++){
        if(arr[i]==7){
            return i;
        }
    }
    return -1;
}

int sol2(vector<int> arr) {
    for(int i=arr.size()-1; i>=0;i--){
        if(arr[i]==7){
            return i;
        }
    }
    return -1;
}

int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    int maxi = max({a,b,c,d,e});

    if (maxi>30) {
        vector<int> arr = {1,7,3,4,7,3,1,5};
        cout<<sol(arr);
    } else {
        vector<int> arr = {1,7,3,4,7,3,1,5};
        cout<<sol2(arr);
    }

    return 0;
}
