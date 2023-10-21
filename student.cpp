#include <iostream>
#include "student.h"
using namespace std;

int studid;
		 string studname;
		 int marks1,marks2,marks3;
student::student()
{
	cout<<"DEfault";
}
student::student(int studid,string studname,int marks1,int marks2,int marks3){
	this->studid=studid;
	this->studname=studname;
	this->marks1=marks1;
	this->marks2=marks2;
	this->marks3=marks3;
}

void student::totalmarks(int marks1,int marks2,int marks3){
	int sum=marks1+marks2+marks3;
}
void student::totalper(int marks1,int marks2,int marks3){
		int sum=marks1+marks2+marks3;
	int per=(sum/300)*100;
}


int getmarks(int sum){
	return sum;
}
int getPer(int per){
	return per;
}

