#include<bits/stdc++.h>

using namespace std;

int occ(vector<int> arr, int maxi){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==maxi){
            return i;
        }
    }
    return -1;
}
int fin(vector<int> arr, int maxi){
    for(int i=arr.size()-1;i>=0;i--){
        if(arr[i]==maxi){
            return i;
        }
    }
    return -1;
}


int main(){
    
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    int maxi = max({a,b,c,d,e});
    
    if(maxi>10){
        vector<int> arr = {3,1,4,3,11,3,4,11,6,8};
        cout<<occ(arr,maxi);
    }else if(maxi<=10){
        vector<int> arr = {3,1,4,3,10,3,4,10,6,8};
        cout<<fin(arr,maxi);
    }
    
    
   
    
    
    return 0;
}