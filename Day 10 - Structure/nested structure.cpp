#include<stdio.h>

struct Address {
    char city[50];
    int pincode;
};

struct Student {
    char name[50];
    struct Address addr; 
};

int main() {
    struct Student s1 = {"Alice", {"New York", 10001}};
    printf("Name: %s\n", s1.name);
    printf("City: %s\n", s1.addr.city);
    printf("Pincode: %d\n", s1.addr.pincode);
    return 0;
}

