#include<iostream>
using namespace std;
double tem(double p){
   double c=(5/9)*(p-32);
   return c;
   }
int main(){
  double f;
  cout<<"please input the degree:"<<endl;
  cin>>f;
  cout<<tem(f);
  return 0;
  }




