
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<double> arr = { 8.8, 7.6, 9.5, 8.9, 7.7, 8.4, 9.1, 7.3, 8.7, 8.2,3.3,1.2};
    
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
