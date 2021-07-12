#pragma once

#ifndef _FUNCTION_H_
#define _FUNCTION_H_

#include <iostream>
#include <fstream>
#include <string>
#define MAX 100
using namespace std;

struct Profile {
	int id;
	char name[100];
	float gpa;
};

void inputData(Profile a[], int& n);
void writeData(ofstream& ifs, Profile a[], int n);
void readData(ifstream& ifs, Profile a[], int& n);
int findMax(Profile a[], int n);

#endif
