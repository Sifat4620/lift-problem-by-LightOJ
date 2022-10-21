#include <iostream>
using namespace std;

int main()
{
int myfloor, liftfloor;
cin>>myfloor>>liftfloor;
if(myfloor>liftfloor){
int  current= (myfloor- liftfloor)*4+3+5+3+ myfloor*4+3+5 ; // current= (myfloor- liftfloor)*4+ myfloor*4+19 ;
   cout<<"total time :"<<current<<endl;
}
else if(liftfloor>myfloor){
int  current= (myfloor- liftfloor)*4+ myfloor*4+19 ;
   cout<<"total time :"<<current<<endl;
}
else{
int   current= myfloor*4+19;
cout<<"total time :"<<current<<endl;
}
return 0;
}
