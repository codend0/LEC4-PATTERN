/*WE ARE WRITING A CODE FOR PATTERN OF 
A B C
B C D 
C D E */

\#include <iostream>

using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int row=1; 
    while(row<=n){
        int column=1 ;
        while(column<=n){
            char c='A'+row +column-2;
            cout<<c<<"  ";
            column=column+1;
        }
        cout<<endl;
        row=row+1;
    }
}
