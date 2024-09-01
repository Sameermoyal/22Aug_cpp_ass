
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = { 1,2,11,10,18,8, 7,12,33, 3, 1, 3, 8,21,14,90, 2,4,9,10};
    
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
