#include<iostream>
#include<cstring>
using namespace std;


int main()
{
	int i;
	// create a struct called Person with a struct variable called student1
	struct Person
	{
	  string name;
	  int id;
	
	  struct Birthdate
	  {
       int day,month, year;
	  }birthdate;
	};// stucture variables

	// Allocate memory for a person
	Person *ptr = new Person [2];
	if(ptr==NULL)
	{
		cout<<"Error! Memory not allocated.";
		exit(1);
	}
	for(i=0; i<2; i++)
	{
		//Read the date 
		cout<<"enter the birthdate in format of DD/MM/YYYY"<<endl;
		cout<<"Enter name:";
		fflush(stdin);   // to clear the buffer
		cin>>(ptr + i)->name;
		cout<<"Enter ID:";
		cin>>(ptr + i)->id;
		cout<<"enter the birthdate:(day/month/year): ";
		cin>>(ptr + i)->birthdate.day;
		cin>>(ptr + i)->birthdate.month;
		cin>>(ptr + i)->birthdate.year;
	
	}
	
	if ((ptr + 0)->birthdate.year < (ptr + 1)->birthdate.year)
	{
		cout<<(ptr + 0)->name<<" is younger than "<<(ptr + 1)->name;
	}
	else if((ptr + 0)->birthdate.year > (ptr + 1)->birthdate.year)
	{
		cout<<(ptr + 0)->name<<" is older than "<<(ptr + 1)->name;
	}
	else if((ptr + 0)->birthdate.year==(ptr + 1)->birthdate.year)
	{
		if((ptr + 0)->birthdate.month < (ptr + 1)->birthdate.month)
		{
			cout<<(ptr + 0)->name<<" is younger than "<<(ptr + 1)->name;
		}
		else if((ptr + 0)->birthdate.month > (ptr + 1)->birthdate.month)
		{
			cout<<(ptr + 0)->name<<" is older than "<<(ptr + 1)->name;
		}
		else if((ptr + 0)->birthdate.day > (ptr + 1)->birthdate.day)
		{
			cout<<(ptr + 0)->name<<" is younger than "<<(ptr + 1)->name;
		}
		else if((ptr + 0)->birthdate.day < (ptr + 1)->birthdate.day)
		{
			cout<<(ptr + 0)->name<<" is older than "<<(ptr + 1)->name;
		}
		else
		cout<<"The birthdate are equals";
	}
	delete ptr; //release allocaded memory
	return 0;
}

