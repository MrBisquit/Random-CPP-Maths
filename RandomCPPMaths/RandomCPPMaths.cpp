#include <vector>

using namespace std;

int TotalArray(vector<int> nums);
int Add(int a, int b);
int Subtract(int a, int b);
int Times(int a, int b);
int Divide(int a, int b);
int Square(int a, int by);
int SquareRoot(int n);

namespace MassNumbers {
	vector<int> SquareArray(vector<int> nums, int squareby) {
		vector<int> squared = {};

		for (int x : nums) {
			squared.push_back(x ^ squareby);
		}

		return squared;
	}

	vector<int> SquareRootArray(vector<int> nums) {
		vector<int> squareRooted = {};

		for (int x : nums) {
			squareRooted.push_back(SquareRoot(x));
		}

		return squareRooted;
	}

	vector<int> MultiplyArray(vector<int> nums, int multiplyby) {
		vector<int> multiplied = {};

		for (int x : nums) {
			multiplied.push_back(x * multiplyby);
		}

		return multiplied;
	}

	vector<int> DivideArray(vector<int> nums, int divideby) {
		if (divideby == 0) {
			throw new exception("Attempted to divide by 0.");
		}

		vector<int> divided = {};

		for (int x : nums) {
			divided.push_back(x / divideby);
		}

		return divided;
	}
}

int TotalArray(vector<int> nums) {
	int total = 0;

	for (int x : nums) {
		total += x;
	}

	return total;
}

int Add(int a, int b) { return a + b; }
int Subtract(int a, int b) { return a - b; }
int Times(int a, int b) { return a * b; }
int Divide(int a, int b) { if (a != 0 && b != 0) { return a / b; } else { throw new exception("Attempted to divide by 0."); } }
int Square(int a, int by) { return a ^ by; }
int SquareRoot(int n) {
	int g = n / 2;
	for (int i = 0; i < 10; i++) {
		g = 0.5 * (g + n / g);
	}
	return g;
}