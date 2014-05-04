/*************************************************************************
	> File Name: Computer.cpp
	> Author: liubiao
	> Mail: 605413973@qq.com 
	> Created Time: Mon 28 Apr 2014 03:39:45 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
class Computer
{
	public:

		void print();
		void SetBrand(string brand);
		void SetPrice(float price);


	private:
   string brand;
	 float price;
};
