#include<stdio.h>
#define Hight 10
int calculate(int Long,int Width)
int main()
{
    int m_Long;
    int m_Width;
    int result;

    printf("The hight of the rectangle is：%d\n",Hight);
    
    printf("Please enter the lenght\n");
    scanf("%d",&m_Long);

    printf("Please enter the width\n");
    scanf("%d",&m_Width);
    
    result=calculate(m_Long,m_Width);
    printf("The volume of the cube is：")；
    printf("%d\n",result);
    return 0;
}

int calculate(int Long,int Width)
{
    int result=Long*Wigth*Hight;
    return result;
}
