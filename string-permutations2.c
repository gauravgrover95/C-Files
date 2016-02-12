#include <stdio.h>
#define N 20
int my_strlen(unsigned char *string){
    int length;
    for (length = 0; *string != '\0'; string++){
        length++;
    }
    return(length);
}
int main()
{
    unsigned char string1[N], string2[N];
    int test=0, i=0, length1, length2;
    scanf("%s", string1);
    scanf("%s", string2);
    length1=my_strlen(string1);
    length2=my_strlen(string2);
    if(length1==length2){
        for(i=0; i<length1; i++){
            if(string1[i]==string2[i]){
                test=1;
                }
                else{
                    test=0;
                }
        }
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}