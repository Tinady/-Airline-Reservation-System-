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

int first()
   {
		int f=31,count=0, snum;
		char choice;
		bool flag=false;
		
		system("cls");  // clean the terminal
		cout<<"\n First Class"<<endl;
		cout<<"....................."<<endl;
		
			if(count==32)  // Checks if the section is full.
			{
				cout<<"\nThis section is full, is it okay to placed in economy class?(y/n): ";
				cin>>choice;
				
				if(choice=='y'||choice=='Y' )
				{
						economy();
				}
				else
				{
					cout<<"\nNext flight leaves in 3 hours"<<endl;
					return 0;
				}
				
			}  //if statement that checks capactiy of section ends here.
			
			else
			{
		
				for(int i=1; i<=f; i++)   //Loop for choosing seat number.
				{
					flag=false;
					cout<<"\nPlease choose seat number from 1 to 31: ";
					cin>>snum;
					while(snum<1 || snum>30)
					{
						cout<<"\nInvalid Input, Try again."<<endl;
						cout<<"\nPlease choose seat number from 1 to 31: ";
						cin>>snum;
					}
					
					for(i=0; i<=31; ++i)  //loop checks if the seat is taken or not.
					{
						if(snum==reserved[i])
						{
							flag=true;
							break;
						}
					}  //Available seat checking loop ends here.
					if(flag)
					{
						cout<<"\nThis seat is already taken"<<endl;		
					}	
					else
					{	
						reserved[count]=snum;
						count++;
						counter++;			
						return snum;	
					}
					void boardPass(int r)
 {
	
	system("cls");  // clean the terminal
	
	char  fname[100] , lname[100] , sex , age[100] , pass[100] , section[30] , sectionf[30]="First class" , sectione[30]="Economy class" , email[100] , num[100];
	
	cout<<"\nPlease fill out the form bellow"<<endl;
	cout<<"------------------------"<<endl;
		
	cout<<"First Name: ";
	cin>>fname;            
	cout<<"------------------------"<<endl;
		
	cout<<"Last Name: ";
	cin>>lname;
	cout<<"------------------------"<<endl;	
		
	cout<<"Sex: ";
	cin>>sex;
	cout<<"------------------------"<<endl;
		
	cout<<"Age: ";
	cin>>age;
	cout<<"------------------------"<<endl;
		
	cout<<"Passport number: ";
	cin>>pass;
	cout<<"------------------------"<<endl;
	
	cout<<"Email: ";
	cin>>email;
	cout<<"------------------------"<<endl;
	
	cout<<"Phone Number: ";
	cin>>num;
	cout<<"------------------------"<<endl;
		
		if(r>=1 && r<=30)  
		{
			 strcpy(section,sectionf);
		}
		else if(r>=31 && r<=100)
		{
			strcpy(section,sectione);
		}
		
	system("cls");  // clean the terminal
	cout<<"\n\nBoarding pass"<<endl;
	cout<<"-------------------------------------------------------------------------\n"<<endl;
		
	cout<<"First Name"<<"\t"<<"Last Name"<<"\t"<<"Sex"<<"\t"<<"Passport NO"<<"  "<<"Seat NO"<<"\t"<<"Section"<<endl;
	cout<<fname<<"\t\t"<<lname<<"\t\t"<<sex<<"\t  "<<pass<<"\t"<<r<<"  "<<section<<endl;
	cout<<"-------------------------------------------------------------------------\n"<<endl;
		
	cout<<"\nYour ticket is booked. We have sent the payment specification on "<<email<<"."<<endl;
	cout<<" Please undergo the transaction within 24Hrs.\n"<<endl;
	cout<<"Confirmation code will be sent on phone number "<<num<<" as soon as the transuction is done.\n"<<endl;
	
 }  // function prints boarding pass
					
				}  //Loop for choosing seat number ends here.
	       }
   } /*this function reserve seat in first class */
