#include<iostream>
#include<string>
using namespace std;

int main(){
	int N;
	cout << "Enter the number of student: ";
	cin >> N;

	string nam[N];
	int age[N];
	int i=0;
	while(i<N)
	{
	cout << "Name of student = ";
	cin >> nam[i];
	cout << "Age of student = ";
	cin >> age[i];
	i++;
	}
	
	int key;
	cout << "-------------------------\n";
	cout << "Enter an age to search: ";
	cin >> key;
	cout << "-------------------------\n";
    int A=0;
	while(A<N)
	{
	 if(age[A]==key){
	cout<<nam[A]<<"\n";
	 }
	A++;
	}


	cout << "-------------------------\n";

	return 0;
}
