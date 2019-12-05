#include<iostream>
#include<cstring>

using namespace std;

int main()
{
 double a,b;
 int j, k, l, m,s;
 char city[20],ch[20];
 char str1[20]="PUNE";
 char str2[20]="MUMBAI";
 char str3[20]="BANGLORE";
 char str4[20]="CHENNAI";
 char v[20]="no";


 while(1){
 	
	cout<<"\nENTER CITY NAME (USE BLOCK LETTERS) : ";
	cin>>city;

	cout<<"\nDO YOU HAVE A FOUR WHEELER (yes or no) (SMALL LETTERS ONLY) : ";
	cin>>ch;


	j=strcmp(city,str1);
	k=strcmp(city,str2);
	l=strcmp(city,str3);
	m=strcmp(city,str4);
	

	s=strcmp(ch,v);

	try
	{

	 if(j!=0 && k!=0 && l!=0 && m!=0)
	  {
		throw 1;
	  } 
	else if(s==0)
	  {
		throw 2;
	  } 
	else
	  {
		cout<<"\nYOUR CITY IS : "<<city;
		cout<<"\nYOU HAVE A VEHICLE";
		break;
	  }
    }
	catch(int e)
	{

	switch(e)
	  {
	      case 1: cout<<"\nYOUR CITY iS NOT THERE IN THE LIST";
		          break;
	      case 2: cout<<"\nYOU DON'T HAVE A VEHICLE";
		          break;
	}
    }
   }
return 0;
}

