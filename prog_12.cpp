#include <bits/stdc++.h>
using namespace std;


void sol(int num) {
    map<int,int> map ;
    
    
    while(num!=0){
        int k = num%10;
        map[k]++;
        num/=10;
    }
    for(auto it:map){
        cout<<it.first<<" : "<<it.second<<endl;
    }
}

int sol2(int num) {
    vector<int> res;
    while(num!=0){
        int k = num%10;
        res.push_back(k);
        num/=10;
    }
    reverse(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        if(res[i]==1){
            return i;
        }
    }
    return -1;
}

int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    int maxi = max({a,b,c,d,e});


    if (maxi > 15) {
        int a = 2313421;
        sol(a);
    } else {
        int a = 2313421;
        cout<<sol2(a);
    }

    return 0;
}
