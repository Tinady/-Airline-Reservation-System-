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
int economy()
   {
		int e=100,count=0, snum;
		char choice;
		bool flag=false;
		
		system("cls");  // clean the terminal
		cout<<"\n Economy Class"<<endl;
		cout<<"....................."<<endl;
		
			if(count==70)  // Checks if the section is full.
			{
				cout<<"\nThis section is full, is it okay to placed in first class?(y/n): ";
				cin>>choice;
				
				if(choice=='y'||choice=='Y' )
				{
					first();
				}
				else
				{
					cout<<"\nNext flight leaves in 3 hours"<<endl;
					return 0;
				}
				
			}  //if statement that checks capactiy of section ends here.
			
		   	for(int i=31; i<=e; ++i)   //Loop for choosing seat number.
				{
					cout<<"\nPlease choose sit number from 31 to 100: ";
					cin>>snum;
					flag=false;
						
					while(snum<31 || snum>100)
					{
						cout<<"\nInvalid Input, Try again."<<endl;
						cout<<"\nPlease choose sit number from 31 to 100: ";
						cin>>snum;
					}
						
					for(int j=0; j<=31; ++j)   //loop checks if the seat is taken or not.
					{    
						if(snum==reserved[j])
						{
							flag=true;
							break;
						}
					}   //Available seat checking loop ends here.	
					if(flag)
					{
						cout<<"This seat is already taken "<<endl;	
					}	
					else if(!flag) 
					{	
							reserved[count]=snum;	
							count++;
							counter++;				
							return snum;					
					}
				
				}  //Loop for choosing seat number ends here.
		
	
	}   /*this function reserve seat in economy class */
