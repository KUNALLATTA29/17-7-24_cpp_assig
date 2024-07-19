#include<bits/stdc++.h>

using namespace std;

bool lin(vector<string>arr, string item){
    for(auto it:arr){
        if(it==item){
            return true;
        }
        
    }
    return false;
    
}
int first(vector<string> arr, string item){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==item){
            return i;
        }
    }
    return -1;
}
int last(vector<string> arr, string item){
    for(int i=arr.size()-1;i>=0;i--){
        if(arr[i]==item){
            return i;
        }
    }
    return -1;
}

int main(){
    
    vector<string> arr = {"pants", "skirt", "jumper","sneakers", "hoodie","winter coat", "pants","jumper"};
    
    int pro;
    cin>>pro;
    if(pro>150){
        string item = "skirt";
        if(lin(arr,item)){
            cout<<"item found";
        }else{
            cout<<"item is not found";
        }
    }else if(pro<150){
        string item = "winter coat";
        cout<<"index of first occ : "<<first(arr, item);
    }else{
        string item = "pants";
        cout<<"index of last occ : "<<last(arr,item);
    }
    return 0;
}