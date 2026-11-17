#include"hlpac_structure.h"
#include"hlpac_functions.h"
BHPAData hlpac_hlpa_parser(const char* source_file){
    size_t file_size;
    uint8_t* file = hlpac_read_file(source_file,&file_size);
    free(file);
    return (BHPAData){0,0,0};
}