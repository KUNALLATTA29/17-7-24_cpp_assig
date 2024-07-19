#include <bits/stdc++.h>
using namespace std;

int sol(vector<int> arr) {
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] % 2 != 0) {
            return i;
        }
    }
    return -1;
}

int sol2(vector<int> arr) {
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] % 2 == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    int sum = a+b+c+d+e;

    if (sum > 30) {
        vector<int> arr = {1,2,3,4,5,6,7};
        cout<<sol(arr);
    } else {
        vector<int> arr = {1,2,3,4,5,6,7};
        cout<<sol2(arr);
    }

    return 0;
}
