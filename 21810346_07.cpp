#include<iostream>
#include <list> 
#include <iterator> 
using namespace std; 

//function for printing the elements in a list 
int showlist(list <int> g) 			//display the list
{ 
	list <int> :: iterator it; 		//use of iterator
	for(it = g.begin(); it != g.end(); ++it) 
		cout << '\t' << *it; 
	cout << '\n'; 
} 

int main() 
{ 
	int n, value;
	list <int> l1; 

	cout<<"List status:"<<l1.empty();	//check whether list is empty
	
	cout<<"\nEnter number of elements you want to add in the list : ";
	cin>>n;
	cout<<"\nEnter "<<n<<" elements : ";
	for(int i=0; i<n; i++){
		cin>>value;
		l1.push_back(value);		//function to insert element in the list
		
	} 
	cout << "\nList 1 (l1) is : "; 
	showlist(l1); 
	cout << "\nlist1.front() : " << l1.front(); 	//display first element
	cout << "\nlist1.back() : " << l1.back(); 		//display last element

	cout << "\nlist1.pop_front() : "; 	//function to delete the first element
	l1.pop_front(); 
	showlist(l1); 
	cout << "\nlist1.reverse() : "; 	//function to reverse the list
	l1.reverse(); 
	showlist(l1); 
	cout<<"\nSorting():";		//function to sort the elements
	l1.sort();
	showlist(l1);
	cout<<"\nThe Unique List is : ";		//function to remove all duplicate elements
	l1.unique();
	cout<<"\n";
	showlist(l1); 
	cout<<"List status:"<<l1.empty();
	return 0; 
}
 

