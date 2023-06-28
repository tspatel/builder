#include<iostream>
#include<string.h>
using namespace std;
class state{
	public:
		char state[100];
		static char language[100];
		static char national_anthem[100];
		static char state_animal[100];
		char food[100];
		static char festival[100];
		public:
			void set(char state[],char food[])
			{
				strcpy(this->state,state);
				strcpy(this->food,food);
			}
			
			void get()
			{
				cout<<"state = "<<state<<endl;
				cout<<"food  = "<<food<<endl;
			}
};
char state::language[100]="Gujrati";
char state::national_anthem[100]="Jan Gan Man";
char state::festival[100]="Diwali";
char state::state_animal[100]="Tiger";

int main()
{
	state s,s1;
	
	s1.set("Gujrat","Khaman&Dhokla");
	s1.get();
	cout<<state::language<<endl;
	cout<<state::national_anthem<<endl;
	cout<<state::festival<<endl;
	cout<<state::state_animal<<endl;
}
