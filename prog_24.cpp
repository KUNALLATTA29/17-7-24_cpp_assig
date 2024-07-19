#include <bits/stdc++.h>
using namespace std;


int sol(vector<int>  arr) {
    for(int i=0;i<arr.size();i++){
        if(arr[i]>15){
            return i;
        }
    }
    return -1;
}

int sol2(vector<int> arr) {
    for(int i=arr.size()-1;i>=0;i--){
        if(arr[i]>15){
            return i;
        }
    }
    return -1;
}

int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    int sum = a+b+c+d+e;

    if (sum>60) {
        vector<int> arr = {2,21,11,2,22,45};
        cout<<sol(arr);
    } else {
        vector<int> arr = {2,21,11,2,22,45};
        cout<<sol2(arr);
    }

    return 0;
}
