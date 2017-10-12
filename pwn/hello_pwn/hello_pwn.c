#include <stdio.h>

char flag[] = "flag{th1s_Hel10_W0r1d}";  //bin for server
// char flag[] = "flag{flag is on server}";   //bin for user

struct bof
{
	int input;
	int key;
	
}test;

int main()
{
	puts("~~ welcome to nuaa ctf ~~");
	puts("lets get helloworld for bof");
	read(0,&test.input,16);
	if (test.key==0x6e756161)
	{
		printf("%s\n", flag);
	}
    return 0;
}