#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

int reserved[100], counter=0;  
int menu();    // function to print menu
int economy(); // function to reserve seat in economy class
int first();  // function to reserve seat in first class
void boardPass(int);  // function to print boarding pass
