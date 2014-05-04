/*************************************************************************
	> File Name: TestC_str.cpp
	> Author: liubiao
	> Mail: 605413973@qq.com 
	> Created Time: Sat 03 May 2014 10:46:12 AM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
//#include<string>
using namespace std;
int main()
{

	string add_to = "hello";
	const string add_on = "baby";
	const char* cfirst = add_to.c_str();
	cout << "add_to :" << add_to << endl;
	const char* csecond = add_on.c_str();
	cout << "add_on: " << add_on << endl;
char *copy = new char[strlen(cfirst) + strlen(csecond) + 1];
	strcpy(copy, cfirst);
	strcat(copy, csecond);
	add_to = copy;
	cout << "copy:  " << copy << endl;
	delete[] copy;
	cout << "add_to:  " << add_to << endl;

	return 0;
}
