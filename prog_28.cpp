#include <bits/stdc++.h>
using namespace std;



int sol(vector<string>  arr) {
    int res=0;
    for(auto it:arr){
        res++;
    }
    return res;
}

int sol2(vector<string> arr, string item) {
    for(int i=0;i<arr.size();i++){
        if(arr[i]==item){
            return i;
        }
    }
    return -1;
}
int sol3(int num){
    int res=0;
    while(num!=0){
        int d = num%10;
        res+=d;
        num/=10;
    }
    return res;
}

int main() {
    double avg;
    cin>>avg;
    
    if(avg>30){
        vector<string> arr = {"it1","it2","it3","it4","it5","it6"};
        cout<<sol(arr);
    }else if(avg<30){
        vector<string> arr = {"it1","it2","it3","it4","it5","it6"};
        string item = "it3";
        cout<<sol2(arr, item);
    }else{
        int num = 30;
        cout<<sol3(num);
    }
    return 0;
}
