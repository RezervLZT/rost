#include <stdio.h>
#include <ctype.h>

int main()
{
	int count = 0, hoard = 0;
	double average = 0.0;
	unsigned char c;
	for (;;)
	{
		c = getc();
		if (c == 0 || c == 224)
		{
			c = getc();
			if (c == 59)
				return 0;
		}
		else
		{
			count++;
			hoard += (int) c;
			average = (double)hoard / count;
			printf("Symbol %d: %d\n", count, c);
			printf("The average is %.2lf\n\n", average);
		}
	}
}
