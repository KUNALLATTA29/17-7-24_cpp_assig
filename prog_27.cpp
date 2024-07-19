#include <bits/stdc++.h>
using namespace std;



int sol(vector<string>  arr, string item) {
    for(int i=0;i<arr.size();i++){
        if(arr[i]==item){
            return i;
        }
    }
    return -1;
}

int sol2(vector<string> arr, string item) {
    for(int i=0;i<arr.size();i++){
        if(arr[i]==item){
            return i;
        }
    }
    return -1;
}
int sol3(vector<string> arr, string item){
    for(int i=arr.size()-1;i>=0;i--){
        if(arr[i]==item){
            return i;
        }
    }
    return -1;
}

int main() {
    long pro;
    cin>>pro;
    
    if(pro>5000){
        vector<string> arr = {"fab1","fab2","fab3","fab4"};
        string item = "fab2";
        cout<<sol(arr, item);
    }else if(pro<5000){
        vector<string> arr = {"pat1","pat2","pat3","pat4"};
        string item = "pat3";
        cout<<sol2(arr, item);
    }else{
        vector<string> arr = {"pat1","pat2","pat3","pat4","pat3","pat4"};
        string item = "pat3";
        cout<<sol3(arr, item);
    }
    return 0;
}
