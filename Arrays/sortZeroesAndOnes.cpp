#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={1,0};
    int left=0;
    int right=v.size()-1;
    while(left<right){
        if(v[left]==1 && v[right]==0){
            swap(v[left],v[right]);
            left++;
            right--;
            continue;
        }
        if(v[left]==0) left++;
        if(v[right]==1) right--;
    }

    for(auto i: v){
        cout<<i<<" ";
    }
}