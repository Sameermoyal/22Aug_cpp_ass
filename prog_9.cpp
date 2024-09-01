
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<double> arr = { 87.8, 71.6, 39.5, 18.9, 37.47, 83.4, 29.1};
    
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
