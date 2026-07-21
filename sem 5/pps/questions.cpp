#include <iostream>
using namespace std;
int main()
{
 int Saif=0, Kareena=0, sum=0;
 cout<<"\n Dhriti enter the number you got on dice : ";
 cin>>Saif;
 cout<<"\n Krish enter the number you got on the dice : ";
 cin>>Kareena;
 sum = Saif + Kareena;
 if((Saif>-1) && (Saif<7)){
 if((Kareena>-1) && (Kareena<7)){
 if(sum>6){
 cout<<"\n It is a good turn";
 }
 else{
 cout<<"\n Its a bad turn";
 }
 }
 else{
 cout<<"Invalid input of Kareena's dice number";
 }
 }
 else{
 cout<<"Invalid input of Saif's dice number";
 }
 return 0;
}
