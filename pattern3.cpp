/*code for pattern 
A B C
D E F 
G H I*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int row=1; 
    char count='A';
    while(row<=n){
        int column=1 ;
        while(column<=n){
            cout<<count<<"  ";
            count=count+1;
            column=column+1;
        }
        cout<<endl;
        row=row+1;
    }
}
