/* CODE FOR PATTERN
  A  
  B C
  C D F  */

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
        while(column<=row){
            cout<<count<<"  ";
            count=count+1;
            column=column+1;
        }
        cout<<endl;
        row=row+1;
    }
}
