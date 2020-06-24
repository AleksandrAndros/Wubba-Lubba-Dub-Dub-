#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << left << setw(3) << "#" << setw(20) << "Name" << setw(30) << "Surname" << endl;
	cout << setw(3) << "01" << setw(20) << "Aleksandr" << setw(30) << "Andros" << endl;
	cout << setw(3) << "02" << setw(20) << "Natalia" << setw(30) << "Chokan" << endl;
	cout << setw(3) << "03" << setw(20) << "Natalia" << setw(30) << "Borovkova" << endl;
	cout << setw(3) << "04" << setw(20) << "Aleksandr" << setw(30) << "Borovkov" << endl;

	return(0);
}