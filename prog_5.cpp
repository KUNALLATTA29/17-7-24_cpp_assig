#include<bits/stdc++.h>

using namespace std;

int sum(map<int,string> mymap){
    map<int, string>::iterator it = mymap.begin();
    int res = 0;
    while(it!=mymap.end()){
        res+=it->first;
        it++;
    }
    return res;
}

int occ(vector<string> arr, string item){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==item){
            return i;
        }
    }
    return -1;
}

int count(vector<string> arr, string item){
    int res=0;
    for(auto it:arr){
        if(it==item){
            res++;
        }
    }
    return res;
}

int main(){
    
    double avg;
    cin>>avg;
    
    if(avg>4.5){
        map<int, string> map = {
            {12,"pants"},
            {34,"coat"},
            {22,"shorts"}
        };
        cout<<sum(map);
    }else if(avg<4.5){
        vector<string>arr = {"brand1","brand2","brand3","brand4","brand1","brand2"};
        string item = "brand2";
        cout<<occ(arr,item);
    }else{
        vector<string>arr = {"brand1","brand2","brand3","brand4","brand1","brand2"};
        string item = "brand1";
        cout<<count(arr,item);
    }
    
    
    return 0;
}