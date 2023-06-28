#include<iostream>
#include<string.h>
using namespace std;

class collage{
	public:
	char name[100];
	int roll_no;
    static int std;
    int age;
    int contact;
    char edu_institute_name[100];
    static char address[100];
};
class high_school{
	public:
	char name[100];
	int roll_no;
    static int std;
    int age;
    int contact;
    char edu_institute_name[100];
    static char address[100];
	
};

char collage::std[100]="first year";
char high_school::std[100]="12";
char collage::address[100]="surat";
char high_school::addresss[100]="surat";	

int main() 
{
	collage c1,c2,c3,c4,c5;
    high_school h1,h2,h3,h4,h5;
    
    
    cout<<collage::std<<endl;
    cout<<collage::address<<endl;
    cout<<"name = "<<c1.name<<endl;
    cout<<"roll_no = "<<c2.roll_no<<endl;
    cout<<"age = "<<c3.age<<endl;
    cout<<"contact = "<<c4.contact<<endl;
    cout<<"edu_institute_name = "<<c5.edu_institute_name<<endl;
    
    cout<<high_school::std<<endl;
	cout<<high_school::address<<endl;
	cout<<"name = "<<h1.name<<endl;
    cout<<"roll_no = "<<h2.roll_no<<endl;
    cout<<"age = "<<h3.age<<endl;
    cout<<"contact = "<<h4.contact<<endl;
    cout<<"edu_institute_name = "<<h5.edu_institute_name<<endl;

	
}
