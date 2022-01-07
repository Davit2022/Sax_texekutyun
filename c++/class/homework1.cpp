#include <iostream>
using namespace std;

void Set_age(int a);
void Get_age(int a);
void Set_gender(char g);
void Get_gender(char g);

struct Person
{
	int age;
	char gender;
};

int main()
{ 
	int a;
	cout << "Enter how old are you" << endl;
	cin >> a;
	Set_age(a);
	char g;
	cout << "Enter your gender: f/m. " << endl;
	cin >> g;
	Set_gender(g);
        Set_age(a);

}

bool Set_age(int a)
{
	if (a < 0)
	{
		cout << "Not found." << endl;
		return false;
        main();
	}	
	Get_age(a);
	return true;
		
}

void Get_age(int a)
{
	Person firstPerson;
	firstPerson.age = a;
	cout << "Your age = " << firstPerson.age << endl;
}

void Set_gender(char g)
{
	if(g == 'f')
	{
		Get_gender(g);
	}
	else if(g == 'm')
	{
		g = 'm';
		Get_gender(g);
	}
	else
	{
		cout << "Gender of -" << g << "- kind not found. " << endl;
	}
}

void Get_gender(char g)
{
	Person firstPerson;
	firstPerson.gender = g;
	cout << "Your gender = " << firstPerson.gender << endl;
}

