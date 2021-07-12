#include"Assignment_5_Header.h"

void inputData(Profile a[], int& n) {
	cout << "Input Profile array, first is the numbers of elements: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Student " << i + 1<< ": ";
		cout << "ID: ";
		cin >> a[i].id;
		cout << "Name: ";
		cin.ignore();
		cin.getline(a[i].name, 100);
		cout << "GPA: ";
		cin >> a[i].gpa;
	}
}
void writeData(ofstream& ifs, Profile a[], int n) {
	ifs << n << endl;
	for (int i = 0; i < n; i++) {
		ifs << a[i].id << endl << a[i].name << endl << a[i].gpa << endl;
	}
}
void readData(ifstream& ifs, Profile a[], int& n) {
	ifs >> n;
	int id, i = 0;

	char name[100];
	float gpa;
	while (!ifs.eof()) {
		ifs >> id;
		a[i].id = id;

		ifs.getline(name, 100);
		strcpy_s(a[i].name, name);

		ifs >> gpa;
		a[i].gpa = gpa;
	}
}
int findMax(Profile a[], int n) {
	float max_Gpa = a[0].gpa;
	int d = 0;
	for (int i = 1; i < n; i++) {
		if (max_Gpa < a[i].gpa) {
			max_Gpa = a[i].gpa;
			d = i;
		}
		else if (max_Gpa == a[i].gpa && a[d].id > a[i].id){
			d = i;
		}
	}

	return d;
	/*gvghfcghc*/
}
