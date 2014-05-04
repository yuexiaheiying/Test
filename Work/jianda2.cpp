/*************************************************************************
	> File Name: jianda2.cpp
	> Author: liubiao
	> Mail: 605413973@qq.com 
	> Created Time: Wed 30 Apr 2014 11:08:43 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
	char *GetMemory()
	{
	
		char p[] = "hello";
		return p;
	}
int main()
{

void Test()
{
	char *str = NULL;
	str = GetMemory();
printf(str);
}

}
