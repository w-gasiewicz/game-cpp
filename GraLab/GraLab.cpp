// GraLab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"menu.h"
#include"Point.h"
#include<iostream>
#include<cassert>
#include<cstdlib>
using namespace std;

void Test(){
	
	Point p1 = Point(10, 90);
	Point p2 = Point(10, 20);
	Point p3 = Point(80, 10);
	assert(p1+p2==p3);
	assert(p1-p2 == p3);
	//assert(p1 * p2 == p3);
}

int main()
{
	Test();
	menu oMenu;
	oMenu.Menu();
}
