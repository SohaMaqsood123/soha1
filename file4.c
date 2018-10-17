#include <stdio.h>
int main()
{


  int Cpid1=fork();
  if(Cpid1==0)
  {
    for(int i=0;i<100;i++){
       Sum1=Sum1+i;
     }
      close(p1[0]);
      write(p1[1],&Sum1,sizeof(Sum1);
  }
   else{
      
    int  Cpid2=fork();
     if(Cpid2==0)
   {
     for(int i=100;i<200;i++)
     {
       Sum2=Sum+i;
     }
   close(p2[0]);
   write(p2[1],&Sum2,sizeof(Sum2));
    }
   else
    {
     int Cpid3=fork();
     if(Cpid3==0)
     {
       for(int i=200;i<300;i++){
          Sum3=Sum3+i;
          }
         close(p3[0]);
         write(p3[1],&Sum3,sizeof(sum3));
      }

      else
      {
      int Cpid4=fork();
       if(Cpid4==0)
      {
        
      for(int i=300;i<400;i++){
          Sum4=Sum4+i;
         }
         close(p4[0]);
         write(p4[1],&Sum4,sizeof(Sum4));
      }

       
     else
      {
       int Cpid5=fork();
       if(Cpid5==0)
      {
        
      for(int i=400;i<500;i++){
          Sum5=Sum5+i;
         }
         close(p5[0]);
         write(p5[1],&Sum5,sizeof(Sum5));
      }


      else
      {
       int Cpid6=fork();
       if(Cpid6==0)
      {
        
      for(int i=500;i<600;i++){
          Sum6=Sum6+i;
         }
         close(p6[0]);
         write(p6[1],&Sum6,sizeof(Sum6));
      }

      else
      {
      int  Cpid7=fork();
       if(Cpid7==0)
      {
        
      for(int i=600;i<700;i++){
          Sum7=Sum7+i;
         }
         close(p7[0]);
         write(p7[1],&Sum7,sizeof(Sum7));
      }

      else
      {
      int  Cpid8=fork();
       if(Cpid8==0)
      {
        
      for(int i=700;i<800;i++){
          Sum8=Sum8+i;
         }
         close(p8[0]);
         write(p8[1],&Sum8,sizeof(Sum8));
      }

     else
      {
       int Cpid9=fork();
       if(Cpid9==0)
      {
        
      for(int i=800;i<900;i++){
          Sum9=Sum9+i;
         }
         close(p9[0]);
         write(p9[1],&Sum9,sizeof(Sum9));
      }

    else
      {
      int Cpid10=fork();
       if(Cpid10==0)
      {
        
      for(int i=900;i<1000;i++){
          Sum10=Sum10+i;
         }
         close(p10[0]);
         write(p10[1],&Sum10,sizeof(Sum10));
      }

  else{
      for(int i=0;i<10;i++){
      {
        wait(0);
       }
       close(p1[1]);
       read(p1[0],&Sum1,sizeof(Sum1));

       close(p2[1]);
       read(p2[0],&Sum2,sizeof(Sum2));

       close(p3[1]);
       read(p3[0],&Sum3,sizeof(Sum3));

       close(p4[1]);
       read(p4[0],&Sum4,sizeof(Sum4));
       
       close(p5[1]);
       read(p5[0],&Sum5,sizeof(Sum5));

       close(p6[1]);
       read(p6[0],&Sum6,sizeof(Sum6));

       close(p7[1]);
       read(p7[0],&Sum7,sizeof(Sum7));

       close(p8[1]);
       read(p8[0],&Sum8,sizeof(Sum8));

       close(p9[1]);
       read(p9[0],&Sum9,sizeof(Sum9));

        close(p10[1]);
       read(p10[0],&Sum10,sizeof(Sum10));
      Sum=Sum1+Sum2+Sum3+Sum4+Sum5+Sum6+Sum7+Sum8+Sum9+Sum10;
     printf("%d\n",Sum);
       














     









