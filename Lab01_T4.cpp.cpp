/*
Lab: 01
Name: Humail Haroon
Roll No: SE-26-03
Date: 22-11-2026
Purpose:Fix errors with help of AI and verify it
*/
/* Error: no match for 'operator<<' (operand types are 'std::basic_ostream<char>' and '<unresolved overloaded function type>')
* AI tool: Claude
* AI said: I typed "end" where the stream manipulator "endl" was needed
* "endl" moves to a new line, while "end" isn't a valid thing to send to cout
* Fix : fixed the typo on the last cout line (end to endl)
* Verdict: AI was correct, because after the change the program 
* compiled with no errors and printed the exact output.
*/
#include <iostream>
using namespace std;
int main()
{
	cout<<"Lab 01 complete!"<<endl;
	cout<<"Next lab: Variables and Input"<<endl;
	return 0;
}
