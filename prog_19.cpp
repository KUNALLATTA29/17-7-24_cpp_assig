#include <bits/stdc++.h>
using namespace std;


int sol(vector<int> arr) {
    for(int i=0;i<arr.size();i++){
        if(arr[i]>10){
            return i;
        }
    }
    return -1;
}

int sol2(vector<int> arr) {
    for(int i=0;i<arr.size();i++){
        if(arr[i]<10){
            return i;
        }
    }
    return -1;
}

int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    int sum = a+b+c+d+e;

    if (sum> 50) {
        vector<int> arr = {2,3,5,4,7,9,10,23,12,10};
        cout<<sol(arr);
    } else {
        vector<int> arr = {2,3,5,4,7,9,10,23,12,10};
        cout<<sol2(arr);
    }

    return 0;
}
