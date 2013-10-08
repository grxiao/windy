/*
 * dd.cpp
 *
 *  Created on: 2013Äê10ÔÂ7ÈÕ
 *      Author: Administrator
 */
#include<iostream>
using namespace std;
int s(int n,int m){
	int t;
	if(n==1){
		t=m;
	}
	else{
		t=m*s(n-1,m);

	}
	return t;

}
int main(){
	int x;int y;
	cout<<"please input the number:"<<endl;
	cin>>x>>y;
	cout<<s(y,x)<<endl;
	return 0;
}




