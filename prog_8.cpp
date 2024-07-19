#include<bits/stdc++.h>

using namespace std;

int occ(vector<int> arr, int mini){
    int res=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==mini){
            res++;
        }
    }
    return res;
}
string fin(vector<int> arr, int mini){
    int res = 0;
    for(auto it:arr){
        if(it==mini){
            res++;
        }
    }
    if(res>1){
        return "yes";
    }
    return "no";
}


int main(){
    
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    int mini = min({a,b,c,d,e});
    
    if(mini>5){
        vector<int> arr = {2,3,5,2,2,1,1,5,6};
        cout<<occ(arr,mini);
    }else if(mini<=5){
        vector<int> arr = {2,1,4,2,2,1,1,5,6};
        cout<<fin(arr,mini);
    }
    
    
   
    
    
    return 0;
}