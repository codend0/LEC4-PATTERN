/*WE ARE WRITING A CODE FOR PATTERN OF 
1234
 234
  34
   4
 
  */
// best hint for this type of pattern to know just how to print star and just by try and  error we can easily can create any reverse half pyramid and always check defunation of column in this type
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;

    while(i<=n){
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=n-i+1;//just like star pattern we re define the column 
         
      while(j){     // just like star we only run it for column 
          cout<<n-j+1; //after running i found taht it is running for opposite so we just + - n and 1 and wallah!! it is done 
          j=j-1;   //  and column should be decreaing line by line 
      }
      cout<<endl;
      i=i+1;
    }
}
