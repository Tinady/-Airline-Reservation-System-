#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

int reserved[100], counter=0;  
int menu();    // function to print menu
int economy(); // function to reserve seat in economy class
int first();  // function to reserve seat in first class
void boardPass(int);  // function to print boarding pass

int menu() //This will print the menu
	{ 
	    
		int option;
		
		cout<<" ..................... MENU OPTIONS .............................\n"<<endl;
		cout <<"\t\t ------------------------------ \n";
		cout <<"\t\t For First Class     ...... '1' \n";
		cout <<"\t\t ------------------------------ \n";
		cout <<"\t\t For Economy Class   ...... '2' \n ";
		cout <<"\t\t ------------------------------ \n";
		cout <<"\t\t To Exit             ...... '3' \n";
		cout <<"\t\t ------------------------------ \n";
		cout <<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
		
		
		cout<<"Enter your choice here: ";
		cin>>option;
		 		
	    return option;
    
	
	}
