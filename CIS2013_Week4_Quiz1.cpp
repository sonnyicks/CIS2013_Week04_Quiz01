#include <iostream>
using namespace std;

int main()
{
	int num_loop = 1;
	int num_bars = 0;
	int num_foos = 0;

	char quit = 'c';
	while (num_loop <= 2000) {
		if ((num_loop % 50 != 0) && (num_loop % 33 != 0)) {
			cout << num_loop << endl;
		}
		if (num_loop % 50 == 0) {
			cout << num_loop << " FOO";
			(num_foos++);
			if (num_loop % 33 == 0) {
				cout << " BAR";
				(num_bars++);
			}
			cout << endl;
		}
		if ((num_loop % 33 == 0) && (num_loop %50 !=0)) {
			cout<< num_loop << " BAR" <<endl;
			(num_bars++);
		}
		num_loop = num_loop + 1;
	}
	cout << "There are " << num_foos << " Foos and " << num_bars << " Bars." << endl;
	cout << "Press any key to quit.: ";
	cin >> quit;
	return 0;
}