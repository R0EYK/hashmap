// using nob.h to make things easier, all of the required information in regards to this library can be found in https://github.com/tsoding/nob.h

#include <stdio.h>
#define NOB_IMPLEMENTATION
#include "nob.h"

typedef struct {
    Nob_String_View key;
    size_t value;
}FreqKeyValue;

typedef struct{
    FreqKeyValue* items;
    size_t count;
    size_t capacity;
}FreqKeyValueS;

FreqKeyValue* find_key(FreqKeyValueS freq, Nob_String_View key){ // TOOD TOMORROW , SHOULD I DO LINEAR SEARCH OR SOMETHING BETTER?

    
}

int main(){
    const char* file_path = "t8.shakespeare.txt"; 
    Nob_String_Builder buffer = {0};
    if(!nob_read_entire_file(file_path, &buffer)) return 1;
    printf("Size of %s is %lu bytes \n" , file_path , (unsigned long)buffer.count);

    Nob_String_View content;
    content.data = buffer.items;
    content.count = buffer.count;

    FreqKeyValueS freq = {0};

    for(size_t i = 0 ; i < 100 && content.count > 0 ; i++){
    content = nob_sv_trim_left(content);
       Nob_String_View token = nob_sv_chop_by_space(&content);
       printf("%.*s\n", (int)token.count, token.data);
       

    }

    return 0;


}