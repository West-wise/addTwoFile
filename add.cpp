#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>

uint32_t returnAdd(char *fname){
	FILE *fp;
	uint32_t buffer[10];
	uint32_t a,b;
	size_t n_size;
	
	fp = fopen(fname,"r");
	while(0<(n_size = fread(buffer,1,sizeof(uint32_t),fp))){	
		b = ntohl(buffer[0]);
	}

	fclose(fp);
	return b;
}

int main(){
	char path[] = "/home/kali/gilgil/thousand.bin";
	char path2[] = "/home/kali/gilgil/five-hundred.bin";

	printf("%d",returnAdd(path)+returnAdd(path2));
	return 0;
}

