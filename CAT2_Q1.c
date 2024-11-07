//program to define a structure named employee
#include<stdio.h>
#include<string.h>//strcpy
struct employee{
char name [26];
int Id;
char department [20];
float salary; 
char email [50];
};
int main (){
struct employee employee1;
strcpy(employee1.name,"John Doe");
employee1.Id=12345;
strcpy(employee1.department,"human resource");
employee1.salary=55000.50;
strcpy (employee1.email,"john.doe@company.com");

printf("name=%s\n",employee1.name);
printf("Id=%d\n",employee1.Id);
printf("department=%s\n", employee1.department);
printf("salary=%f\n", employee1.salary);
printf("email=%s\n",employee1.email);
return 0;
}