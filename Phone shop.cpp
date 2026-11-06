#include<iostream>
using namespace std;

int main(){
	string customer_name;
	string model;
	int quantity;
	float price;
	
cout <<"Enter your name:"<<endl;
cin>>customer_name;

cout<<"Enter phone model:"<<endl;
cin>>model;

cout<<"Enter quantity purchased:"<<endl;
cin>>quantity;

cout <<"Enter price per phone:"<<endl;
cin>>price;

 float TotalSales =quantity*price;

cout<<"SALES RECEIPT"<<endl;
cout<<"====================="<<endl;
cout<<"customername:"<<customer_name<<endl;
cout<<" phone model:"<<model<<endl;
cout<<"quantity purchased:"<<quantity<<endl;
cout<<"price per phone:"<<price<<endl;
cout<<"======================"<<endl;
cout<<"TotalSales:"<<TotalSales<<endl;
cout<<"================"<<endl;


	
	
	
}