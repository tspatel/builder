#include<iostream>
#include<string.h>
using namespace std;
class employes{

     private:
     	int id;
     	char name[1000];
     	char role[1000];
     	int salary;
     	int experience;
     	char address[1000];
     	char email[1000];
     	int contact;
     	
     	public:
     	void set()
     	{
     		cout<<"enter id =";
     		cin>>id;
     		cout<<"enter name =";
     		cin>>name;
     		cout<<"enter role =";
     		cin>>role;
     		char salary[100];
     		cout<<"enter salary =";
     		cin>>salary;
     		cout<<"enter experience =";
     		cin>>experience;
     		char email[100];
     		cout<<"enter address =";
     		cin>>address;
     		char addresss[100];
     		cout<<"enter email =";
     		cin>>email;
     		char contact[100];
     		cout<<"enter contact =";
     		cin>>contact;
		}
		void get()
		{
			cout<<"id = "<<id<<endl;
			cout<<"name = "<<name<<endl;
			cout<<"role = "<<role<<endl;
			cout<<"salary = "<<salary<<endl;
			cout<<"experience = "<<experience<<endl;
			cout<<"address = "<<address<<endl;
			cout<<"email = "<<email<<endl;
			cout<<"contact = "<<contact<<endl;
		}
};
int main()
{
	employes e,e1,e2,e3,e4,e5,e6,e7;
	
	e.set();
	e.get();
	e1.set();
	e1.get();
	e3.set();
	e3.get();
    e4.set();
    e4.get();
	return 0;
}
