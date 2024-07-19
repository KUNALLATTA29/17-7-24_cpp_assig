#include <bits/stdc++.h>
using namespace std;



int sol(vector<int>  arr) {
    return *max_element(arr.begin(),arr.end());
}

int sol2(vector<int> arr) {
    return *min_element(arr.begin(),arr.end());
}

int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    int avg = (a+b+c+d+e)/5;

    if (avg>18) {
        vector<int> arr = {1,2,3,4,5,5,6,7,8};
        cout<<sol(arr);
    } else {
        vector<int> arr = {1,2,3,4,5,5,6,7,8};
        cout<<sol2(arr);
    }

    return 0;
}
