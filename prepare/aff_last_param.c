#include<unistd.h>
#include<stdio.h>


int main(int argc,char **argv)
{
	int i;

	i = 0;
	if (argc > 1)
	{
		while (argv[argc - 1][i])
		{
				write(1, &argv[argc - 1][i], 1);
				i++;
		}
	}
	write(1, "\n", 1);
}
