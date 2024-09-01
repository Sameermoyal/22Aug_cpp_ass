
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = { 87, 71, 39, 18, 37, 83, 29};
    
    int n=arr.size();
    bool swapped;
    
    for(int i=0;i<arr.size()-1;i++){
            swapped = false;
            for(int j=0;j<arr.size()-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swapped = true;
                }
            }
            
            if(!swapped){
                break;
            }
            
    }
        
    for(auto it:arr){
        cout<<it<<" ";
    }
        
    
    return 0;
}
