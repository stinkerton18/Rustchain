/* GENWALT.CPP - Generate RustChain wallet */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream.h>
#include <iostream.h>

int main() {
    int i;
    int temp;
    ofstream outfile;
    srand(time(NULL));
    outfile.open("rstmnr.ini");

    printf("Your RustChain wallet: ");
    for(i = 0; i < 40; i++) {
	temp = rand() % 16;
	printf("%x", temp);
	outfile << temp << "\n";
    }
    printf("RTC\n");
    outfile.close();
    printf("This has been stored in the miner's INI file\n");
    return 0;
}