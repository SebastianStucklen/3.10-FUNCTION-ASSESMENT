//Write a function named drinkCoffee that takes a char parameter named size and returns an int representing the amount of caffiene in that cup. When called, the function checks what the parameter is. If it was passed a "L" for large, it prints "Large coffee!" and returns 180. If it's "m", it prints "medium coffee!" and returns 145. finally, if it is passed a "s" it prints "small coffee!" and returns 109.
// 
//Call your function in main IN a cout statement so it prints bout the size and the caffiene amount. It's up to you if you want to get user inptu or just shove an "L, "M", or "S" into the the function directly. 
#include<iostream>
using namespace std;
int drinkCoffee(char size);

int main() {
	char size;
	cout << " what size coffee would you like (L)arge (M)edium or (S)mall" << endl;
	cin >> size;
	cout << endl;
	cout << drinkCoffee(size);

}

int drinkCoffee(char size) {
	if (size == 'L') {
		cout << "LARGE" << endl;
		return 180;
	}
	else if (size == 'M') {
		cout << "MEDIUM" << endl;
		return 145;
	}
	else if (size == 'S') {
		cout << "SMALL" << endl;
		return 109;
	}
	else {
		return 0;
	}
}