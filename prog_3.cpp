#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = { 88, 76, 95, 89, 77, 84, 91, 73, 87, 82,33,12,56,90,71};
        
    int mini=arr[0];
    for(auto it:arr){
        if(it<mini){
            mini=it;
        }
    }
    
    cout<<mini;
    
    return 0;
}
