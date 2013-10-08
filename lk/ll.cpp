/*
 * ll.cpp
 *
 *  Created on: 2013Äê10ÔÂ7ÈÕ
 *      Author: Administrator
 */
#include<iostream>
using namespace std;
int fac(int n){
	int k;
	if(n==1)
		k=1;
	else
		k=n*fac(n-1);
	return k;
}
int main(){
	int m;int n;
	cout<<"please input one number:"<<endl;
	cin>>m;
	cout<<"please input another smaller number:"<<endl;
	cin>>n;
	if(m>=n){
		int t;
		t=fac(m)/(fac(n)*fac(m-n));
		cout<<"C(m,n)="<<t<<endl;
	}
	else{
		cout<<"error"<<endl;
	}
	return 0;
}

