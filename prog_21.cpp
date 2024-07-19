#include <bits/stdc++.h>
using namespace std;


int sol(vector<int> arr) {
    for(int i=0;i<arr.size();i++){
        if(arr[i]==5){
            return i;
        }
    }
    return -1;
}

int sol2(vector<int> arr) {
    for(int i=arr.size()-1; i>=0;i--){
        if(arr[i]==5){
            return i;
        }
    }
    return -1;
}

int main() {
    double a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    double avg = (a+b+c+d+e)/5;

    if (avg> 25) {
        vector<int> arr = {1,2,3,4,5,3,1,5};
        cout<<sol(arr);
    } else {
        vector<int> arr = {1,2,3,4,5,3,1,5};
        cout<<sol2(arr);
    }

    return 0;
}
