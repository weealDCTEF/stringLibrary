#include <stdio.h>
#include <ctype.h>

void clearBuffer(){
    setbuf(stdin,NULL);
    setbuf(stdout,NULL);
}
int returnSizeArray(const char array[])
{
    int i = 0;
    for(i;;i++)
    {
        if(array[i] == '\0')
        {
            return i++;
        }
    }
    return -1;
}   

unsigned int locateIndexChar(char string[],char charll_locate)
{
    for(int i = 0; i < returnSizeArray(string);i++)
    {
        if(string[i] == charll_locate)
        {
            return i;
        }
    }
}

int compareStrings(const char string1[],const char string2[])
{
    unsigned int string1_size,string2_size,aux;

    string1_size = returnSizeArray(string1);
    string2_size = returnSizeArray(string2);

    if(string1_size == string2_size)
    {

        for(int x = 0;x < string1_size;x++)
        {
            if(string1[x] == string2[x])
            {
                aux++;
            }
            else
            {
                return -1;
            }
        }

        if(aux != string1_size){
            return -1;
        }
    }

    return 0;
}
int compareSizes(const char string[],const char newArray[]){
    int i = returnSizeArray(string);

    if(newArray[i] != '\0'){
        return -1;
    }
    return 0;
}
int copyString(const char oldArray[],char newArray[])
{
    const unsigned int sz_array = returnSizeArray(oldArray);

    for(unsigned int i = 0; i < sz_array;i++)
    {   
        newArray[i] = oldArray[i];
    }
    if(compareStrings(newArray,oldArray)!= 0){
        return -1;
    }
    return 0;
}
void toLowerCase_low(char string[])
{
    char upper[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char lower[] = {"abcdefghijklmnopqrstuvwxyz"};

    const int size_array = returnSizeArray(string);

    for(unsigned int ctrl = 0; ctrl < size_array;ctrl++)
    {   
        for(unsigned int ctrl1 = 0; ctrl1 < returnSizeArray(upper);ctrl1++)
        {
            if(string[ctrl] == upper[ctrl1])
            {
                string[ctrl] == lower[ctrl];
            }
        }
    }
    
}
void toUpperCase_low(char string[])
{
    char upper[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char lower[] = {"abcdefghijklmnopqrstuvwxyz"};

    const int size_array = returnSizeArray(string);

    for(unsigned int ctrl = 0; ctrl < size_array;ctrl++)
    {   
        for(unsigned int ctrl1 = 0; ctrl1 < returnSizeArray(upper);ctrl1++)
        {
            if(string[ctrl] == lower[ctrl1])
            {
                string[ctrl] == upper[ctrl];
            }
        }
    }
}

void toUpperCase_optimized(char string[]){
    int i;
    for(i = 0; i < returnSizeArray(string);i++){
        string[i] = toupper(string[i]);
    }
}

void toLowerCase_optimized(char string[]){
    int i;
    for(i = 0; i < returnSizeArray(string);i++){
        string[i] = tolower(string[i]);
    }
}
