#include <stdio.h>
void k(void){
int x,y;
*(&x+2) -= 24;
}
void main(void){
int x,y=0;
x=0;
if(x < 10){
	printf("Selam %d\n",x);
	x++;
}
else
	return -1;
k();
}
