// SPDX-License-Identifier: MPL-2.0
#include"hlpac_structure.h"
#include"hlpac_x86.c"
#define HLPA_VERSION "0.0.1" /* just for programmers */
#include"hlpac_mapping.c"
#include<stdio.h>
int main(int argc,char** argv){
    if(argc<3){
        fputs("Usage: hlpac <input-file> <options>\n",stderr);
        return -1;
    }
    puts("HLPAC is in unusable state");
    return 0;
}
