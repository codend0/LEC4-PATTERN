/* CREATING CODE FOR PATTERN
D
C D 
B C D
A B C D*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int row=1;
    while(row<=n){
        int column=1 ;
        while(column<=row){ // VERY IMPORTANT POINT IF A PATTERN IS STARTING FROM HIGH TO LOW NO. OR ALPHABET IN ROW OR COLUMN ALWAYS 
                            // USE 'n' IN MAKING RELATION 
          
            char c='A'+n -row+column-1;
            cout<< c;
           column=column+1;
        }
        cout<<endl;
        row=row+1;
    }
}
