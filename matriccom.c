#include<stdio.h>

int main()
{
   int a[3][3],b[3][3],c[3][3],d[3][3],s[2][2];
   int *p,*q,*r,*t,i,j,k,min,max,sum=0,choice;
 
   p=&a[0][0];
   q=&b[0][0];  
   r=&d[0][0];
   t=&s[0][0];
   
do{ 
    printf("\n");
    printf(" \n Enter code  \n");
  printf("\n 1 - matrix addition \n");
    printf("\n 2 - matrix multiplication \n");
      printf("\n 3 - Saddle point  \n"); 
       printf("\n 4- Saddle point using pointer  \n"); 
       printf("\n 5 - EXIT   \n");
       
      
      scanf("%d",&choice);

 switch(choice){
     case 1:
      //addition 
       for(int i=0;i<3;i++)
{

    for(int j=0;j<3;j++)
  {
    printf("enter element a[%d][%d]",i,j);
    scanf("%d",(p+((i*3)+j)));
}
    
} 

 for(int i=0;i<3;i++)
{

    for(int j=0;j<3;j++)
  {
    printf("enter element b[%d][%d]",i,j);
    scanf("%d",(q+((i*3)+j)));
}
    
} 

printf("\n");
   for(int i=0;i<3;i++)
{

    for(int j=0;j<3;j++)
  {
      c[i][j]=*(p+((i*3)+j))+*(q+((i*3)+j));
      
      printf("%d \t ",c[i][j]);
   
  }
printf("\n");
}


      break;
      
     case 2:
      //multiplication 
        for(int i=0;i<3;i++)
{

    for(int j=0;j<3;j++)
  {
    printf("enter element a[%d][%d]",i,j);
    scanf("%d",(p+((i*3)+j)));
}
    
} 

 for(int i=0;i<3;i++)
{

    for(int j=0;j<3;j++)
  {
    printf("enter element b[%d][%d]",i,j);
    scanf("%d",(q+((i*3)+j)));
}
    
} 
      printf("\n");

 
 for(int i=0;i<3;i++)
{

    for(int j=0;j<3;j++)
  { sum=0;
       for(int k=0;k<3;k++)
     {
      
      sum+= *((p+(i*3))+k) * *((q+((i*3))+j));
      
      *((r+(i*3))+j)=sum;
       
     }
       printf("%d \t ",d[i][j]);
  }
  printf("\n");
}
      break;
      
     case 3:
      //saddle point
      for(int i=0;i<3;i++)
{

    for(int j=0;j<3;j++)
  {
    printf("enter element a[%d][%d]",i,j);
    scanf("%d",(p+((i*3)+j)));
}
    
} 
      
       for(int i=0;i<3;i++)
{
   min=a[i][0];
    for(int j=0;j<3;j++)
  {
    if(min>=a[i][j])
     {
       min=a[i][j];
       s[0][0]=i;
       s[0][1]=j;
     }
  }
  j=s[0][1];
  max=a[0][j];
     for(int k=0;k<3;k++)
 {
   if(max<=a[k][j])
     {
       max=a[k][j];
       s[1][0]=k;
       s[1][1]=j;
     }
 }

  if(min==max)
   {
     if(s[0][0]==s[1][0] && s[0][1]==s[1][1])
     {
       printf(" Saddle point of matrix is %d",max);
     }
   }
}
      break;

   case 4:
   //Saddle point using pointer 
      for(int i=0;i<3;i++)
{

    for(int j=0;j<3;j++)
  {
    printf("enter element a[%d][%d]",i,j);
    scanf("%d",(p+((i*3)+j)));
}
    
} 
        
       for(int i=0;i<3;i++)
{
   min=*(p+((i*3)+0));
    for(int j=0;j<3;j++)
  {
    if(min>=*(p+((i*3)+j)))
     {
       min=*(p+((i*3)+j));
      *(t+((0*3)+0))=i;
      *(t+((0*3)+1))=j;
     }
  }
  j=*(t+((0*3)+1));
  max=*(p+((0*3)+j));
     for(int k=0;k<3;k++)
 {
   if(max<=*(p+((k*3)+j)))
     {
       max=*(p+((k*3)+j));
      *(t+((1*3)+0))=k;
      *(t+((1*3)+1))=j;
     }
 }

  if(min==max)
   {
     if(*(t+((0*3)+0))==*(t+((1*3)+0)) && *(t+((0*3)+1))==*(t+((1*3)+1)))
     {
       printf(" Saddle point of matrix is %d",max);
     }
   }
}
      break;
    
    default:
    {
     printf("Please enter correct code [1-4]\n");
    }
 }
}while(choice<5);
 return 0;
}