
// #include <stdio.h>
// int main()
// {
// 	char* a[] = { "January","February","March","April","May"\
// ,"June","July","August","September","October","November"\
// "December","\0" };
// 	int n = 0;
// 	scanf_s("%d", &n);
	
// 		printf("%s", a[n - 1]);

	
// }
#include <stdio.h>
int main(int argc,char const *argv[])
{
	int i;
	for(i=0;i<argc;i++){
		printf("%d:%s\n",i,argv[i]);
	}
	return 0;
}

