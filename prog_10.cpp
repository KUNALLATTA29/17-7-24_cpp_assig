#include<bits/stdc++.h>
using namespace std;


void sol(vector<int> arr) {
    vector<int> evens;
    vector<int> odds;
    for (auto it : arr) {
        if (it % 2 == 0) {
            evens.push_back(it);
        } else {
            odds.push_back(it);
        }
    }

    for (auto it : evens) {
        cout << it << " ";
    }
    cout << endl;

    for (auto it: odds) {
        cout << it << " ";
    }
}


bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i<=sqrt(num); i++) {
        if (num % i == 0){
          return false;  
        } 
    }
    return true;
}

void sol2(vector<int> arr) {
    vector<int> primes;
    vector<int> nonPrimes;
    for (auto it: arr) {
        if (isPrime(it)) {
            primes.push_back(it);
        } else {
            nonPrimes.push_back(it);
        }
    }

    for (auto it: primes) {
        cout << it << " ";
    }
    cout << endl;

    for (auto it: nonPrimes) {
        cout << it << " ";
    }
}

int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int pro = (a*b*c*d*e);
    if (pro > 100) {
        vector<int> arr = {1,2,3,4,5,6};
        sol(arr);
    } else {
        vector<int> arr = {1,2,3,4,5,6,7,8,9,10,11,12};
        sol2(arr);
    }

    return 0;
}
