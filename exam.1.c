#include<stdio.h>
int main()
{
	int sum,avg,marks;
    int eng,math,phy,che,bio;
    printf("Enter your marks eng mark =");
    scanf("%d",&eng);
    
    printf("Enter your marks che mark =");
    scanf("%d",&che);
    
    printf("Enter your marks math mark =");
    scanf("%d",&math);
    
    printf("Enter your mark phy mark =");
    scanf("%d",&phy);
    
    printf("Enter your marks bio mark =");
    scanf("%d",&bio);
    
    sum = eng+che+math+phy+bio;
    printf("Sum of All Marks = %d\n",sum);
    avg=sum/5;    
    printf("Average of Total Marks = %d\n",avg);

    if(avg<0 || avg>100)
    {
        printf("Wrong Entry");
    }
    else if(avg<=49)
    {
        printf("Grade F");
    }
    else if(avg>=50 && avg<60)
    {
        printf("Grade D");
    }
    else if(avg>=60 && avg<70)
    {
        printf("Grade C");
    }
    else if(avg>=70 && avg<80)
    {
        printf("Grade B");
    }
    else if(avg>=80 && avg<90)
    {
        printf("Grade A");
    }
    else if(avg>=90 && avg<100)
    {
        printf("Grade A+");
    }
}