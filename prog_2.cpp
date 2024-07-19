#include<bits/stdc++.h>

using namespace std;

int counts(vector<string> arr, string item){
    int res =0;
    for(auto it:arr){
        if(it==item){
            res++;
        }
    }
    return res;
}
string check(vector<string> arr, string item){
    int res =0;
    for(auto it:arr){
        if(it==item){
            res++;
        }
    }
    if(res>1){
        return "yes";
    }else{
        return "no";
    }
}
int cal(map<int,string> map){
    int res=0;
    auto s = map.begin();
    auto e = map.end();
    while(s!=e){
        int key = s->first;
        res+=key;
        s++;
    }
    return res;
}

int main(){
    
    vector<string> arr = {"pants", "skirt", "jumper","sneakers", "hoodie","winter coat", "pants","jumper"};
    
    int avg;
    cin>>avg;
    
    if(avg>100){
        string item = "pants";
        cout<<counts(arr,item);
    }else if(avg<100){
        string item = "jumper";
        cout<<check(arr,item);
    }else{
        map<int,string> map = {
            {1,"pants"},
            {2,"skirt"},
            {3,"jumper"},
            {4,"sneakers"},
            {5,"hoodie"}
        };
        cout<<cal(map);
    }
    
    return 0;
}