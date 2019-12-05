#include<iostream>
#include<iterator>
#include<vector>
using namespace std;

void create(vector<int> &v)
{
	int x,y;
	cout<<"ENTER THE NO OF ELEMENTS IN VECTOR: "<<endl;
	cin>>x;
	
	for(int i=0;i<x;i++)
	{
		cout<<"ENTER VALUE:"<<endl;
		cin>>y;
		v.push_back(y);
	}
	
}

vector<int> modify(vector<int> &v)
{
	int i,j;
	cout<<"ENTER THE POSITION OF ELEMENT YOU WANT TO MODIFY::"<<endl;
	cin>>i;
	cout<<"ENTER NEW VALUE:"<<endl;
	cin>>j;
	vector<int>::iterator itr;
	itr = v.begin();
	itr = itr + i - 1;
	*itr = j;
	cout<<"VALUE MODIFIED!!"<<endl;
	return v;
}

vector<int> del(vector<int> &v)
{
	int p;
	cout<<"ENTER THE POSITION OF ELEMENT YOU WANT TO DELETE:"<<endl;
	cin>>p;
	vector<int>::iterator it = v.begin();
	it = it + p -1;
	v.erase(it);
	cout<<"VECTOR ELEMENT DELETED!!";
	return v;
}

void display(vector<int> &v)
{
	cout<<"('";
    for(int i=0;i<v.size()-1;i++)
    {
        cout<<v[i]<<",";
    }
    cout<<v[v.size()-1];
    cout<<"')\n";
}

vector<int> multiply(vector<int> &v)
{
	int m;
	cout<<"ENTER THE VALUE TO MULTIPLY: "<<endl;
	cin>>m;
	for(int k=0;k<v.size();k++)
	{
		v[k] *= m;
	}
	cout<<"VECTOR MULTIPLIED!!\n"<<endl;
	return v;
}

int main()
{
	vector<int> v;
	int ch;
	while(ch != 7)
	{
	cout<<"\nENTER A CHOICE\n";
	cout<<"1.CREATE\n2.MODIFY\n3.MULTIPLY\n4.DISPLAY\n5.DELETE\n6.CLEAR\n7.EXIT\n";
	
	cin>>ch;
	
	switch(ch)
	{
		case 1:create(v);
			   break;
			   
		case 2:v = modify(v);
			   break;
			   
		case 3:v = multiply(v);
			   break;
			   
		case 4:display(v);
			   break;
			   
		case 5:v = del(v);
			   break;
			   
		case 6:v.clear();
			   cout<<"VECTOR IS EMPTY!"<<endl;
			 //  v.assign(1);
			   break;
			   
		case 7:cout<<"PROGRAM TERMINATED!";
			   break;
	}
	}
}
