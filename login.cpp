#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	cout<<"\t\tSign Up"<<endl;
	string user,pass;
	cout<<"Enter UserName:";
	cin>>user;
	cout<<"Enter PassWord:";
	cin>>pass;
	cout<<"\nPlease wait Your Account Is Creating";
	for(int i=0;i<=3;i++)
	{
		cout<<".";
		Sleep(2000);
	}
	cout<<"\nYour Accoungt Is Created Successfully"<<endl;
	cout<<endl;
	start:
	cout<<"\t\tLog In\n"<<endl;
	string user1,pass1;
	cout<<"\tUsername:";
	cin>>user1;
	cout<<"\tPassword:";
	cin>>pass1;
	
	int ch;
	do 
	{
	if(user1==user && pass1==pass)
	{
		cout<<endl<<"Welcome Here is your ";
		system("linking.exe");
	
	}
	else if(pass1!=pass)
	{
		cout<<endl<<endl<<"Wrong Password Please Try Again......\n";
	
		cout<<"what do you want...\n1]Again Try..\n2]Exit\n";
		cout<<"Please Enter Your Choise:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				break;
			case 2:
				cout<<"Good Bye....."<<endl;
				break;
				
			default:
					cout<<"Wrong Choice\a"<<endl;
		}
		Sleep(1000);
		goto start;
	}
	else if(user1!=user)
	{
		cout<<endl<<endl<<"Incoreccet Username please Try Again.....\n";
		cout<<"what do you want...\n1]Again Try..\n2]Exit\n";
		cout<<"Please Enter Your Choise:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				break;
				case 2:
					cout<<"Good Bye..";
					break;
					default:
						cout<<"Wrong Choice\a"<<endl;
		}
		Sleep(1000);
		goto start;
	}

   }while(ch==1);
}
