#include<iostream>
using namespace std;

string mixText(string a, string b) {
	string  e = "";
	int A = a.size();
	int B = b.size();
	int i = 0;
	if(A == B){
		while(i < A){
		e = e + a[i] + b[i];
	i++;
	}
	return e;
	}else{
		return "E";
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
