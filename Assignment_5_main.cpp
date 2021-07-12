#include "Assignment_5_Header.h"

int main() {
	Profile a[MAX];
	int n;
	inputData(a, n);

	ofstream ofs("input.txt");
	if (!ofs) {
		cout << "Failed to open this input file!" << endl;
	}
	else {
		writeData(ofs, a, n);
		ofs.close();
	}
	//ofstream ofs;
	ifstream ifs("input.txt");
	if (!ifs) {
		cout << "Failed to open this input file!" << endl;
		return -1;
	}
	else {
		readData(ifs, a, n);
		ifs.close();
	}

	ofs.open("output.txt");
	if (!ofs) {
		cout << "Failed to open this output file!" << endl;
	}
	else {
		ofs << a[findMax(a, n)].id;
		ofs.close();
	}

	return 0;
}