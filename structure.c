#include<stdio.h>
                /*structure declaration*/

     struct employee{
    char    name[30];
    int     empId;
    float   salary;
};
int main(){

           /*declare structure variable*/

    struct employee emp;
    gets(emp.name);
    scanf("%d",&emp.empId);
    scanf("%f",&emp.salary);
    printf("\nEnter details :\n");
    printf("Name ?:");
    printf("ID ?:");
    printf("Salary ?:");

            /*print employee details*/

    printf("\nEntered detail is:");
    printf("Name: %s"   ,emp.name);
    printf("Id: %d"     ,emp.empId);
    printf("Salary: %f\n",emp.salary);
    return 0;
}
