#include<stdio.h>
void tukar(int x, int y);
main()
{
 int a, b;
 a=99;
 b=11;
 printf(“nilai sebelum pemanggilan fungsi :\n”);
 printf(“nilai a=%d nilai b=%d\n\n”,a,b);
 tukar(a,b);
 printf(“nilai sesudah pemanggilan fungsi :\n”);
 printf(“nilai a=%d nilai b=%d\n\n”,a,b);
}
void tukar (int px, int py)
{
 int z;
 z=px;
 px=py;
 py=z;
 printf(“nilai diakhir fungsi :\n”);
 printf(“nilai px=%d nilai py=%d\n\n”,px,py);
}
