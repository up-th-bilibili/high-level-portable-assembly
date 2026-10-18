// SPDX-License-Identifier: MPL-2.0
#include"hlpac_structure.h"
#include"hlpac_x86.c"
#define HLPA_VERSION "0.0.1" /* just for programmers */
#include"hlpac_mapping.c"
#include<stdio.h>
int main(int argc,char** argv){
    char *input,*output=nullptr,*config=nullptr;
    if(argc<2){
        fputs("Usage: hlpac <input-file> [options]*\n",stderr);
        return -1;
    }
    for(int i=2;i<argc;i++){
        ;
    }
    input=argv[1];
    puts("HLPAC is in unusable state");
    return 0;
}
