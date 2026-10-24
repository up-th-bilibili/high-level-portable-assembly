#include"hlpac_structure.h"
[[nodiscard]] uint8_t* hlpac_read_file(const char* source_file,size_t* file_size){
    if(!(source_file&&file_size)){
        errno = EINVAL;
        return nullptr;
    }
    errno = 0;
    *file_size = 0;
    FILE* file = fopen(source_file,"rb");
    uint8_t *string=nullptr,*temp;
    if(!file)return nullptr;
    if(fseek(file,0,SEEK_END))goto end;
    long size = ftell(file),cache=size;
    if(size<0)goto end;
    rewind(file);
    string = malloc(size+1);
    if(!string)goto end;
    fread(string,1,size,file);
    if(ferror(file))string=(free(string),nullptr);
    else string[size]=0,*file_size = size;
end:
    int cache_errno=errno;
    fclose(file);
    errno=cache_errno;
    return string;
}
uint8_t* hlpac_hlpa_parser(const char* source_file){
    ;
}