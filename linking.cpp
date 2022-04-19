#include<iostream>
using namespace std;
int main()
{
	int ch;
	do
	{
		cout<<"Main Menu"<<endl;
		cout<<"1:insert Record"<<endl;
		cout<<"2:Dispaly Record"<<endl;
		cout<<"3:Search Record"<<endl;
		cout<<"4:Update Record:"<<endl;
		cout<<"5:Delete Record:"<<endl;
		cout<<"6:Exit"<<endl;
		cout<<"Enter your Choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				system("insert.exe");
				cout<<endl;
				break;
				case 2:
					system("display.exe");
					cout<<endl;
					break;
					case 3:
						system("serach.exe");
						cout<<endl;
						break;
						case 4:
							system("edit.exe");
							cout<<endl;
							break;
							case 5:
								system("delete.exe");
								cout<<endl;
								break;
								case 6:
									cout<<"Good Bye";
									break;
									default:
										cout<<"Wrong Choice\a";
		}
	}while(ch!=6);
}
