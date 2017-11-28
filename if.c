#include <stdio.h>
int main()
{
	int inda;
	int outda;
	printf( "Nhap cl gi cung duoc, tru so nguyen :))\n");
	scanf("%d",&inda);
	outda = (inda == 0)?(8):
			(inda == 1)?(9):
			(inda == 2)?(10):
			(inda == 3)?(11):
			(inda == 4)?(12):
			(inda == 5)?(13):
			(inda == 6)?(14):(15);
	printf("%d + 8 = %d - 1 = %d quik matffs\nGG Easy Noobs\n",inda,outda,outda - 1);
	return 0;
}
