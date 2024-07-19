#include<bits/stdc++.h>

using namespace std;

int check(vector<vector<string>> arr, string item, string color){
    for(int i=0;i<arr.size();i++){
        for(int j = 0; j<arr[i].size();j++){
            if(arr[i][j] == item && arr[i][j+1] == color){
                return i;
            }
        }
    }
    return -1;
}

int sol(vector<pair<string,char>> arr, string item, char size){
    for(int i = arr.size()-1; i>=0;i--){
        if(arr[i].first == item && arr[i].second == size){
            return i;
        }
    }
    return -1;
}

vector<string> more(vector<string> arr){
    map<string,int> map ;
    for(auto it:arr){
        map[it]++;
    }
    vector<string> res;
    for(auto it:map){
        if(it.second>=2){
            res.push_back(it.first);
        }
    }
    return res;
}

int main(){
    
    long pro;
    cin>>pro;
    
    if(pro>1000){
        vector<vector<string>> arr = {{"pants", "red"}, {"coat", "black"}, {"wintercoat", "red"},{"pants","blue"}, {"coat", "red"}};
        string item = "pants";
        string color = "blue";
        cout<<check(arr, item,color);
        
    }else if(pro<1000){
       vector<pair<string,char>> arr = {{"pants",'m' }, {"coat", 's'}, {"wintercoat", 'l'},{"pants",'m'}, {"coat", 's'}};
       string item = "pants";
       char size = 'm';
       
       cout<<sol(arr, item, size);
    }else{
        vector<string> arr = {"pants","coat", "wintercoat","pants", "coat"};
        vector<string> res = more(arr);
        
        for(auto it:res){
            cout<<it<<" ";
        }
    }
    
    return 0;
}