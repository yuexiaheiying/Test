/*************************************************************************
	> File Name: Tiankong1.cpp
	> Author: liubiao
	> Mail: 605413973@qq.com 
	> Created Time: Wed 30 Apr 2014 06:55:16 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main(int argc, char **argv)
{
	int x = 5;
	int y = 6;
	int s2 ;
/*	s1 = x++*++y;*/
/*	s2 = x--*--y;*/
	y*=x++;
/*	y+=x--;*/
/*	cout << s1 <<endl; */
		cout << y <<  endl;
		cout << x << endl;
}
