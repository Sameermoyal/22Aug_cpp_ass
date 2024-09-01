#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = { 88, 76, 95, 89, 77, 84, 91, 73, 87, 82};
        
    for(int i=0;i<arr.size();i++){
        int mini = i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}
