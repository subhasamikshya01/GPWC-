#include<stdio.h>
int main(){
	int i=23;
	int *ptr=&i;
	printf("value:- %d\naddress:- %p\n",*ptr,ptr);
}
