/*
Lab: 01
Name: Humail Haroon
Roll No: SE-26-03
Date: 22-11-2026
Purpose:Bug hunt
*/
#include<iostream>
using namespace std; // BUG 1: missing ; after std
int main()
{
	cout<<"Welcome to the Lab!"<<endl; // BUG 2: missing ; at the end of line
	cout<<"Today we learn \"C++\"."<<endl; // BUG 3: Cout must be lowercase "cout"
	cout<<"Files are in C:\\Lab01"<<endl; // BUG 4: backslash must be written as \\ (wrong output otherwise) 
	cout<<"Bye!"<<endl; // BUG 5: missing closing quote after Bye!
	return 0;
}