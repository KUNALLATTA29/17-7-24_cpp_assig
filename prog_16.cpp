#include <bits/stdc++.h>
using namespace std;


int sol(vector<int> arr) {
    return *max_element(arr.begin(),arr.end());
}

int sol2(vector<int> arr) {
    return *min_element(arr.begin(),arr.end());
}

int main() {
    double a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    double avg = (a+b+c+d+e)/5;

    if (avg > 12) {
        vector<int> arr = {2,3,5,4,7,9};
        cout<<sol(arr);
    } else {
        vector<int> arr = {2,3,5,4,7,9};
        cout<<sol2(arr);
    }

    return 0;
}
