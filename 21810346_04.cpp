#include<iostream>
using namespace std;
template<class T>
void selection(T a[], int n)
{
 int i, j;
for (j = 0; j < n-1; j++)
{
    int iMin = j;
    for ( i = j+1; i < n; i++)
 {
       if (a[i] < a[iMin])
       {
              iMin = i;
          }
    }
    if(iMin != j) {
        swap(a[j], a[iMin]);
    }
}
}
int main()
{
    int choice, i;
    int a[5];
    cout<<"ENTER INTEGERS : ";
    for(i=0;i<5;i++)
    cin>>a[i];
    float b[5];
    cout<<"ENTER FLOATS NUMBERS : ";
    for(i=0;i<5;i++)
    cin>>b[i];
    cout<<"ENTER CHOICE : \n 1.SORTED INTEGERS \n 2.SORTED FLOAT VALUES \n 3.EXIT"<<endl;
    while(choice!=3)
     {
     cin>>choice;
     switch(choice)
     {
         case 1 : cout<<"SORTED INTEGERS : "<<endl;
                  selection(a,5);
                  for(int i=0;i<5;i++)
                  cout<<a[i]<<"\t";
                  break;
         case 2 : cout<<"SORTED FLOAT NUMBERS : "<<endl;
                   selection(b,5);
                  for(int j=0;j<5;j++)
                  cout<<b[j]<<"\t";
                  break;
         default : cout<<"INVALID CHOICE"<<endl;
                   break;
     }
     }
 return 0;
 }
