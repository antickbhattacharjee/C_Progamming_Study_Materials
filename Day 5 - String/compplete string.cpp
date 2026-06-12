
#include <stdio.h>

int main() {
    char name[50];
    int age;
    
    printf("Enter age: ");
    scanf("%d", age);

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);  
    
    printf("Hello, %s\n", name);
    return 0;
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[12];
    fgets(str, sizeof(str), stdin); //	hello world
    printf("%s\n", str);
    char sub_str[6];
    for (int i = 0; i <= strlen(str); i++){
    	if(str[i]>=6){
    		sub_str[i-6]=str[i];
		}
	}
    printf("%s", sub_str);

    return 0;
}
*/
