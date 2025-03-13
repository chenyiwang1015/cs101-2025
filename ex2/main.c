#include <stdio.h>
#include <string.h>
typedef struct{
  int id;
  char name[12]; 
  int emp_age; 
  float salary;
}employee_t;
void emp_ info (employee_t emp){} 
int emp_average_age (employee_t emp[], int n){}
void emp_writefile(employee_t emp[], int n){}
void emp_readfile(employee_t emp[], int n){}
int main(){
  employee_t emp [3]; 
  emp [0].id=1;
  emp [0].emp_age=20; 
  emp [0].salary=30000.0; 
  strcpy (emp [0]. name,"IU");
  
  emp [1].id=2;
  emp [1].emp_age=26;
  emp [1].salary=36000.0; 
  strcpy (emp [1].name,"talor");
  
  emp [2].id=3; 
  emp [2].emp_age=31; 
  emp [2].salary=90000.0; 
  strcpy (emp [2].name,"swift");
  for (int i=0;i<3;i++){
    printf("ID:%d,Name:%s,Age:%d,Salary:%.2f\n",emp[i].id,emp[i].name,emp[i]emp_age,emp[i].salary);
}
return 0;
}
