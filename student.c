#include<stdio.h>
#include<stdlib.h>
struct dob{
    int dd;
    int mm;
    int yyyy;
};
struct student {
    int roll;
    char name[50];
    struct dob d1;
    float cgpa;

};
struct student getdata();
void display(struct student );
int main(){
   struct student s1;
   
    s1=getdata();
    display(s1);
    return 0;
}
struct student getdata()
{
struct student s;
printf("Enter student Details:\n");
printf("Enter roll no :");
scanf("%d",&s.roll);
printf("Enter name : ");
scanf("%s",s.name);
printf("Enter DOB (dd mm yyyy) : ");
scanf("%d %d %d",&s.d1.dd,&s.d1.mm,&s.d1.yyyy);
printf("Enter CGPA : ");
scanf("%f",&s.cgpa);

return s;
}
void display(struct student s)
{


printf("\nStudent name is : %s",s.name);
printf("\nStudent Roll no. is : %d",s.roll);
printf("\nStudent DOB is : %d/%d/%d",s.d1.dd,s.d1.mm,s.d1.yyyy);
printf("\nStudent CGPA is :%.2f",s.cgpa);

}
