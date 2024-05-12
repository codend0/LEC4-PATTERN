/*WE ARE WRITING A CODE FOR PATTERN OF 
1111
 222
  33
   4*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
     //loop for space
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1;// condition of sapce in decreasing order 
        }
     //loop for column
        int j=1; 
      while(j<=n-i+1){      // justlike we do in star case taking inspiration fro sam e star pattern running loop only for column
          cout<<i;   // the row no. in the number shwoing in every row so we have to print row no.
          j=j+1;     // and column should be increase by 1 
      }
      cout<<endl;
      i=i+1;
    }
}
