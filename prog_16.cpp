
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = { 1,2,11,10,18,8, 7,12,33, 3, 1, 3, 8,21,14,90, 2,4,9,10};
    
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
