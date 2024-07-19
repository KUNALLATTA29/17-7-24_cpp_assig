#include<bits/stdc++.h>

using namespace std;

int count(string s){
    int res=0;
    for(auto it:s){
        if(it=='a' || it=='e' || it=='i' || it=='o' || it=='u'){
            res++;
        }
    }
    return res;
}
int conso(string s){
    int res=0;
    for(auto it:s){
        if(it!='a' || it!='e' || it!='i' || it!='o' || it!='u'){
            res++;
        }
    }
    return res;
}

vector<int> len(map<string,string> map){
    vector<int> arr;
    for(auto it:map){
        arr.push_back(it.second.length());
    }
    return arr;
}


int main(){
    
    int sum;
    cin>>sum;
    
    if(sum>200){
        string des = "hbjhvcvsjajcjdcjuhcsdd";
        cout<<count(des);
    }else if(sum<200){
        string des = "hbjhvcvsjajcjdcjuhcsdd";
        cout<<conso(des);
    }else{
        map<string,string> map = {
            {"pants","nnkdbskb"},
            {"coat","hiini"},
            {"wintercoat", "njksksknsk"}
        };
        vector<int> arr = len(map);
        for(auto it:arr){
            cout<<it<<" ";
        }
    }
    
   
    
    
    return 0;
}