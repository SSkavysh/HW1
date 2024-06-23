	#include <stdio.h>
	#include <locale.h>

	int main(int argc, char **argv)
	{
		setlocale(LC_ALL,"en_US.UTF-8");
	/*
	   *
    ***
   *****
  *******
   HHOHH
   ZZZZZ
	*/
    printf("     *\n");
    printf("    ***\n");
    printf("   *****\n");
    printf("  *******\n");
    printf("   HHOHH\n");
    printf("   ZZZZZ\n");
		return 0;
	}


