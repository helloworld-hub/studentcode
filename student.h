#include <iostream>
using namespace std;

class student
{

	private:
		 int studid;
		 string studname;
		 int marks1,marks2,marks3;
	public:
		student();
		student(int studid,string studname,int marks1,int marks2,int marks3);
		
		totalmarks(int marks1,int marks2,int marks3);
	    totalper(int marks1,int marks2,int marks3);
};


