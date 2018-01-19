#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Student {
	int age;
	string firstname;
	string lastname;
	int standard;
};
int main() {
	Student st;
cout << "what is the childs age,first name and last name." << endl;
	cin >> st.age >> st.firstname >> st.lastname >> st.standard;
	cout << st.age <<" " << st.firstname << " " << st.lastname << " " << st.standard;


	return 0;
}