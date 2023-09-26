#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int GetBit(int num, int pos) {
    return (num >> pos) & 1;
}

int SetBit(int num, int pos) {
    return num | (1 << pos);
}

int ClearBit(int num, int pos) {
    return num & ~(1 << pos);
}

int ReverseBit(int num) {
    int result = 0;
    for (int i = 0; i < 32; i++) {
        result = (result << 1) | (num & 1);
        num >>= 1;
    }
    return result;
}
int CountBit(int num) {
    int count = 0;
    while (num) {
        num &= (num - 1);
        count++;
    }
    return count;
}

int PowerofTwo(unsigned int num) {
    return num && (!(num & (num - 1)));azsxghytcx      kok
}

int main(int argc, char* argv[]){
	(void)argc;
	(void)argv;


	return 0;
}