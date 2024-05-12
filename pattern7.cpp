/*WE ARE WRITING A CODE FOR PATTERN OF 
A
BB
CCC */

#include <iostream>

using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int row=1; 
    while(row<=n){
        int column=1 ;
        while(column<=row){
            char c='A'+row-1 ;   
            cout<<c;
            column=column+1;
        }
        cout<<endl;
        row=row+1;
    }
}
