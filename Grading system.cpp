#include <iostream>
using namespace std;

int main(){
	string student_name;
	double exam_marks;
	string Grade;
	
cout<<"Enter your name:"<< endl;
cin>>student_name;

cout<<"Enter exam marks:"<<exam_marks<<endl;
cin>>exam_marks;

if(exam_marks>=70){
	Grade="A";	
}
 else if (exam_marks>=60){
Grade="B";	
}
else if(exam_marks>=50){
	Grade="C";
}
 else if(exam_marks>=40)	{
	Grade="D";
}
else {
	Grade="FAIL";
}


cout<<"STUDENT MARKS"<<endl;
cout<<"====================	"<<endl;
cout<<"studentName:"<<student_name<<endl;
cout<<"Marks:"<<exam_marks<<endl;
cout<<"Grade:"<<Grade<<endl;

return 0;
	
	
	
	
	
}