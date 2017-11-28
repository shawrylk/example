#include <iostream>
int main()
{
	int inda;
	int outda;
	std::cout << "Nhap cl gi cung duoc, tru so nguyen :))\n";
	std::cin >> inda;
	outda = (inda == 0)?(8):
			(inda == 1)?(9):
			(inda == 2)?(10):
			(inda == 3)?(11):
			(inda == 4)?(12):
			(inda == 5)?(13):
			(inda == 6)?(14):(15);
	std::cout << inda << " + 8 = "	<< outda <<" - 1 = " << outda -1 <<" quik matffs\nGG EASY NOOBS\n";
	return 0;
}