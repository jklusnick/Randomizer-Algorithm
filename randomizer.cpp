//Jake Klusnick, Array Shuffler, Oct 12 2019
#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(NULL));
	const int SIZE = 10;
	int nums[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (int i=0;i<SIZE;++i) {
		cout << nums[i];
		if (i < (SIZE-1))
			cout << ", ";
		else
			cout << endl;
	}
	for (int i=0;i<SIZE;++i) {
		int random = rand() %10;
		int temp = nums[i];
		nums[i] = nums[random];
		nums[random] = temp;
	}
	for (int i=0;i<SIZE;++i) {
		cout << nums[i];
		if (i < (SIZE-1))
			cout << ", ";
		else
			cout << endl;
	}
	return 0;
}
