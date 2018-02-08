#include <iostream>
using namespace std;

int main()
{
	int num_loop = 1;
	bool run_again = true;
	while (num_loop <= 2000) {
		if (num_loop % 50 == 0) {
			cout << "FOO" << endl;
		}
		if (num_loop % 33 == 0) {
			cout << "BAR" << endl;
		}
		num_loop = num_loop + 1;
	}
	cin >> run_again;
	return 0;
}