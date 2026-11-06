#include <iostream>
#include <string>
using namespace std;

class car{
    public:
    	string brand;
    	string model;
    	int price;
    	int mileage;
     void display(){
       cout<<"CAR DETAILS"<<endl;
       cout<<"================"<<endl;
       cout<<"Brand:"<<brand<<endl;
       cout<<"MODEL:"<<model<<endl;
       cout<<"PRICE:"<<price<<endl;
       cout<<"MILEAGE:"<<mileage<<endl;

     }
   void drive(int distance_driven){
    mileage =mileage+distance_driven;
    cout<<"Distance Driven:"<<distance_driven<<endl;
    cout<<"Updated Mileage"<<mileage<<endl;
   }


};

int main(){
  car mycar ;
  mycar.brand="Toyota";
  mycar.model="Corolla";
  mycar.price=2000;
  mycar.mileage=5000;

  mycar.display();
  mycar.drive(150);
  mycar.drive(300);
  
  return 0;




}
