#include <stdio.h>
#include <stdlib.h>

int b=8;
char c='a';
int bitcount(int i_count);
int main()
{
    int a;
 scanf("%d",&a);
 printf("number of bits: %d\n %x",bitcount(a),a);
 while (c=getchar())
 {
	 switch (c)
	 {
	 case'a': printf("a\n");
		 break;
	 case'b': printf("b\n");
		 break;

	 default:
		 printf("Default:%d\n",c);
	 }
 }
    return 0;
}

int bitcount(int i_count)
{
    int number=0;
   do
   {
      i_count&=i_count-1;
      i_count>>=1;
       number++;
   }while(i_count);
   return number;
}
