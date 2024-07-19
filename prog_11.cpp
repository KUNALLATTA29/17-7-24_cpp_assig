#include <bits/stdc++.h>
using namespace std;

int sol(vector<int> arr) {
    for(auto it:arr){
        if(it%2==0){
            return it;
        }
    }
    return -1;
}

int sol2(vector<int> arr) {
    for (auto it:arr) {
        if (it % 2 != 0) {
            return it;
        }
    }
    return -1;
}

int main() {
    double a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    double sum = a+b+c+d+e;

    double avg = sum / 5;

    if (avg > 20) {
        vector<int> arr = {1,2,3,4,5};
        cout<<sol(arr);
    } else {
        vector<int> arr = {1,2,3,4,5};
        cout<<sol2(arr);
    }

    return 0;
}
