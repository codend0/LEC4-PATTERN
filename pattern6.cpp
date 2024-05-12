/*WE ARE WRITING A CODE FOR PATTERN OF 
1
22
333 */

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
            
            cout<<row;
            column=column+1;
        }
        cout<<endl;
        row=row+1;
    }
}
