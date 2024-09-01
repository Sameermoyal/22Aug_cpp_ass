
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = { 8, 7, 3, 1, 3, 8, 2};
    
    for(int i=0;i<arr.size();i++){
            int mini=i;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]<arr[mini]){
                    mini=j;
                }
            }
        swap(arr[mini],arr[i]);
    }
        
    for(auto it:arr){
        cout<<it<<" ";
    }
        
    
    return 0;
}
