
#include <iostream>
using namespace std;
int fact(int n){
    int temp = 1;
    for(int i = 1;i<=n;i++){
        temp *= i;
    }
    return temp;
}
int Ncr(int n,int r){
       int temp;
       temp = fact(n)/(fact(n-r)*fact(r));
       return temp;
}
int main(){
   cout<<"Number of rows: "<<endl;
   int n;
   cin>>n;
 
   /* pascals triangle basically start for row 0 its nc0 and row 1 its nc0 and nc1 row 3 nc0 nc1 nc2 nc0 and nc2 are same if i rows and j cols its going like icj from 0 to j */
   
   for(int i = 0;i<n;i++){
       //spaces: diagonal spaces
       for(int j = 0;j<n-i-1;j++){
           cout<<" ";
       }
       // the pascal no.s for ith row
       for(int j=0;j<=i;j++){
           cout<<Ncr(i,j)<<" ";
       }
       cout<<endl;
   }
   
    return 0;
}
