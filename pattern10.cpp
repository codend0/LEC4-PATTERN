/*WE ARE WRITING A CODE FOR PATTERN OF 
***
 **
  *
 */

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    //LOOP FOR SPACE
    while(i<=n){
        int space=i-1;//MAKING RELATION FOR SPACE USING  i 
        while(space){
            cout<<" ";
            space=space-1;
        }
        //LOOP FOR STARS
        int star=n-i+1;
      while(star){
          cout<<"*";
          star=star-1;
      }
      cout<<endl;
      i=i+1;
    }
}
