#include <iostream>
using namespace std;


int main() {
	int score[5];
	for (int i = 0; i > 0;i++) {
		
		cin >> score[i];
		if (score < 0) {
			break;
		}
	}
	
	enum weekday { sun, mon, tue, wed, thu, fri, sat  };
	
	weekday theDay = tue;
	
	if (theDay == sun) {
		cout << "please have a rest!"<<endl;
     }
	else if (theDay > sun && theDay <= 5) {
		cout << "please go to work!"<<endl;
	}

	const int a = 20;
	int aset[a] = {4,5,6,7,8};
	
	cout << aset[3]<<endl<<aset[10]<<endl;
	cout << aset << endl;


	
}
