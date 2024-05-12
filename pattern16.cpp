/* code for pattern 
1234554321
1234**5432
123****543
12******54
1********5
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j=j+1;
        }
        // for star
        int star=i-1;
        while(star){
            cout<<"**";
            star=star-1;
        }
        //for other side pattern
        int k=1;
        while(k<=n-i+1){// this 
            cout<<n-k+1;
            k=k+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}
