#include<bits/stdc++.h>

using namespace std;

int cal(map<int,string> map){
    return map.size();
}

int check(vector<string> arr, string item){
    int res1=0;
    for(auto it:arr){
        if(it==item){
            res1++;
        }
    }
    return res1;
}
vector<int> squ(vector<int> arr2){
    for(int i=0;i<arr2.size();i++){
        arr2[i] = arr2[i]*arr2[i];
    }
    return arr2;
}

int main(){
    
    vector<string> arr = {"pants", "skirt", "jumper","sneakers", "hoodie","winter coat", "pants","jumper"};
    
    long sum;
    cin>>sum;
    
    if(sum>500){
        map<int,string> map = {
            {1,"pants"},
            {2,"skirt"},
            {3,"jumper"},
            {4,"sneakers"},
            {5,"hoodie"}
        };
        cout<<cal(map);
    }else if(sum<500){
        string item = "jumper";
        cout<<check(arr,item);
    }else{
        vector<int> arr2 = {1,2,3,4,5,6};
        vector<int> result = squ(arr2);
        for(auto it:result){
            cout<<it<<" ";
        }
    }
    
    return 0;
}