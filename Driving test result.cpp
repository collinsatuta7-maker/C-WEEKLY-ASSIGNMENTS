#include <iostream>
using namespace std;

int main (){
	string student_name;
	double theoryMarks,practicalMarks;
	
cout <<"Enter student name:"<<endl;
cin>>student_name;

cout<<"Enter theory test marks:"<<endl;
cin>>theoryMarks;

cout<<"Enter Practical test marks:"<<endl;
cin>>practicalMarks;

double averagescore=(theoryMarks+practicalMarks)/2;

cout<<"\n----------Driving Test Results-------"<<endl;
cout<<"Student Name:"<<student_name<<endl;
cout<<"Theory  test marks:"<<theoryMarks<<endl;
cout<<"Practical test marks:"<<practicalMarks<<endl;
cout<<"Average Score:"<<averagescore<<endl;

if (averagescore>=50){
	cout <<"Result : PASSED" <<endl;
	
}
else{
cout <<"Result   :FAILED" <<endl;
	
	
}

return 0;
	
	
	
	
	
	
	
	
}