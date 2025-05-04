#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> v ={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        if(i%2==1){

            for(int j=2;j>=0;j--){
                cout<<v[i][j]<<" ";
            }

        }

        else{

            for(int j=0;j<=2;j++){
                cout<<v[i][j]<<" ";
            }
        }
    }
}