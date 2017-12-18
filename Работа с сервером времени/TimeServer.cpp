#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <exception>
#include <sstream>
#include <stdexcept>

using namespace std;

string AskTimeServer() {
	/* ��� ������������ ������������ ���� ���, ����������� ��������� ��������� ���� ������:
	* ���������� ������� ���������� ��������
	* ������ ���������� system_error
	* ������ ������� ���������� � ����������.
	*/

	ifstream input("unit.txt");
	string line;

	while (getline(input, line)) {
		return line;
	}
}

class TimeServer {
public:
	string GetCurrentTime() {
		/* ���������� ���� �����:
		* ���� AskTimeServer() ������� ��������, �������� ��� � LastFetchedTime � �������
		* ���� AskTimeServer() ������� ���������� system_error, ������� ������� ��������
		���� LastFetchedTime
		* ���� AskTimeServer() ������� ������ ����������, ���������� ��� ������.
		*/
		try {
			LastFetchedTime = AskTimeServer();
			return LastFetchedTime;
		}
		catch (system_error&) {
			return LastFetchedTime;
		}
	}

private:
	string LastFetchedTime = "00:00:00";
};

int main() {
	// ����� ���������� ������� AskTimeServer, ���������, ��� ��� ��� �������� ���������
	TimeServer ts;
	try {
		cout << ts.GetCurrentTime() << endl;
	}
	catch (exception& e) {
		cout << "Exception got: " << e.what() << endl;
	}
	return 0;
}