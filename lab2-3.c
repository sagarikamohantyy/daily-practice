#include <stdio.h>
#include <stdlib.h>
struct employee{
    int empid;
    char name[100];
    char desg[20];
    int basic_sal;
    double hra;
    double da;
};
int main()
{   struct employee*emp= (struct employee*)malloc(2*228);
    struct address*add=(struct address*)malloc(2*104);
    
    if(emp==NULL){
        printf("Memory id FULL");
    }
    double gross[2];
    int n;
    printf("enter the number of employees:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
         printf("Emp ID:\n",i+1);       
         scanf("%d",&emp[i].empid);
         printf("Name:\n",i+1);     
         scanf("%s",&emp[i].name);          
         printf("Emp Designation:\n",i+1);     
         scanf("%s",&emp[i].desg);       
         printf("Basic salary:\n",i+1);    
         scanf("%d",&emp[i].basic_sal);  
         printf("Enter HRA:",i+1);
         scanf("%lf",&emp[i].hra);
         printf("Enter DA:",i+1);
         scanf("%lf",&emp[i].da);
         gross[i]=(emp[i].basic_sal*1.0)+(emp[i].hra/100.0*emp[i].basic_sal*1.0)+(emp[i].da/100.0*emp[i].basic_sal*1.0);
         printf("Gross Salary:%lf\n",gross[i]);
    }
    return 0;
}