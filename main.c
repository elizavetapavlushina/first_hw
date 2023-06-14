#include <stdio.h>
int main(){
	
	int a = 0xDDCCAABB;
	unsigned char c;
	c = (a & 0x000000FF);
	printf("first byte: %x\n", c);

}
