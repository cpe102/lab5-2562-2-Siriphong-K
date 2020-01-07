#include<iostream>
using namespace std;
string mixText(string A,string B){
	int a=A.size(),b=B.size();
	if(a==b){
		int i=0;
		string C;
		while(i<a){
			C=C+A[i]+B[i];
	
			i++;
		}
		return C;
	}	
	else
	{
		 return"E";
	}
	
}


int main(){	
	cout << mixText("AAA","BBB") << "\n"; 
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	

	return 0;	
}
