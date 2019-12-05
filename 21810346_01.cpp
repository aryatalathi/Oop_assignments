#include<iostream>
#include<string.h>

using namespace std;
class student
{
    private:
    char name[40],dob[15],bdg[15];
    int rollno,contact;
    public:
    static int count;
    friend class personal;
    person()
    {
        char * name = new char[40];
        char *dob = new char[80];
        char *bdg = new char[15];
        rollno=contact=0;
    }
    static void recordcount()
    {
        cout<<"\n TOTAL NO OF RECORDS :"<<count;
    }
};

class personal
{
	private:
	  char year[7],div[2],lisence[20],add[10],contact[10];
	public:

	void getdata(student *obj);

	void displaydata(student *obj);

	friend class student;
};

int student::count=0;

void personal::getdata(student *obj)
{
	cout<<"\n ENTER NAME OF THE STUDENT :";
	cin.ignore();
	cin.getline(obj->name,39);

	cout<<"\n ENTER YEAR : ";
	cin>>this->year;

	cout<<"\n ENTER DIVISION : ";
	cin>>this->div;
	/*if(this->div!='A' || this->div!='B' || this->div!='C' || this->div!='D')
	cout<<"ENTER CORRECT DIV : ";
	cin>>this->div;*/

	cout<<"\n ENTER DATE OF BIRTH : ";
	cin>>obj->dob;

	cout<<"\n ENTER BLOOD GROUP :";
	cin>>obj->bdg;
	cin.ignore();
	cin.getline(obj->bdg,14);
	/*if(obj->bdg!='A+' || obj->bdg!='B+' || obj->bdg!='AB+' || obj->bdg!='O+' || obj->bdg!='A-' || obj->bdg!='B-' || obj->bdg!='AB-' || obj->bdg!='O-')
    cout<<"ENTER CORRECT BLOOD GROUP : ";
    cin>>obj->bdg;*/
    
	cout<<"\n ENTER ROLL NO: ";
	cin>>obj->rollno;

	cout<<"\n ENTER PHONE NO. :";
	cin>>this->contact;

	cout<<"\n ENTER CITY: ";
	cin>>this->add;

	cout<<"\n ENTER THE LICENSE NO.: ";
	cin.ignore();
	cin.getline(this->lisence,19);

	obj->count++;
}
void personal::displaydata(student *obj)
{

	cout<<"\nName = "<<obj->name;
	cout<<"\nYear = "<<this->year;
	cout<<"\nDivision = "<<this->div;
	cout<<"\nRoll No. = "<<obj->rollno;
	cout<<"\nDate of Birth = "<<obj->dob;
	cout<<"\nBlood Group = "<<obj->bdg;
	cout<<"\nContact No. = "<<this->contact;
	cout<<"\nCity = "<<this->add;
	cout<<"\nLisence No. = "<<this->lisence;
	cout<<"\n\n\n";
}
int main()
{
	personal *p1[30];
	student *p2[30];
	int n=0,ch,i;
	cout<<"\n\n-------STUDENT DATABASE-------\n\n\n";
	do
	{

		cout<<"\nENTER CHOICE:";
		cout<<"\n 1.ENTER INFORMATION \n 2.DISPLAY INFORMATION \n 3.EXIT \n";
		cout<<" ";
		cin>>ch;
		switch(ch)
		{
			case 1:
			cout<<"\n\ENTER INFORMATION:\n";
			cout<<"\n";
			p1[n]=new personal;
			p2[n]=new student;
			p1[n]->getdata(p2[n]);
			n++;
			student::recordcount();
			break;
			case 2:
 			cout<<"\n";
			cout<<"\n---------\n";
			cout<<"\n             STUDENT PROFILE               \n";
			cout<<"\n---------\n";
			cout<<"\n";
			for(i=0;i<n;i++)
			{
				p1[i]->displaydata(p2[i]);

			}
			student::recordcount();
			break;

			case 3:
				cout<<"\n\n\t\tThank You!\n";
				break;
		}
	}while(ch!=3);
	return 0;
}

