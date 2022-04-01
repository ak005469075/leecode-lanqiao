#include<iostream>
using namespace std;
int wen,abwen;
int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int huiwen(int n)
{
    int a[8];
   a[0]=n/10000000;
   a[1]=n/1000000%10;
   a[2]=n/100000%10;
   a[3]=n/10000%10;
   a[4]=n/1000%10;
   a[5]=n/100%10;
   a[6]=n/10%10;
   a[7]=n%10;
   if((a[0]==a[7])&&(a[1]==a[6])&&(a[2]==a[5])&&a[3]==a[4]) return 1;
   else return -1;
}
void panduanhuiwen(int n)
{
    int y,m1,m2,d1,d2,m,d;
     int flag=0;
  for(int i=1;;i++)
  { 
      y=n/10000;
      y++;
    
      m1=y/1000;
      m2=y/100%10;
      d1=y%100/10;
      d2=y%10;
      m=m2*10+m1;
      d=d2*10+d1;
      if((m2==0)&&(m1>=1&&m1<=9))//1-9月
      {
          if(d<=day[m1])
          {
                 flag=1;
          }
      }
      else if(m2==1&&m1==0)//10月
      {
           if(d<=day[10])
          {
              flag=1;
          }
      }
      else if(m1==1&&(m2>=1&&m2<=2))//11-12月
      {
           if(d<=day[m])
          {
              flag=1;
          }
      }
      if(flag==1)
      {
          wen=y*10000+d2*1000+d1*100+m2*10+m1;
         break; 
      } 
  }
}
void puandaunabhuiwen(int n)
{
     int y,m,d,f=-1;
     y=n/10000;
     for(;;)
     {
        y=y%100*100+y%100;
        // if(y/100==y%100)
        // {
           m=y%10*10+y%100/10;
           //d=y/100%10+y/1000;
           if(m>=1&&m<=12)
           {
            abwen=y*10000+m*100+m;
             f=123;
           }
         if(f>0) break;  
         else y++;
         }

         //} 

}
int main()
{
    int n;
    cin>>n;
  //cout<<huiwen(n);
  if(huiwen(n)==1)
  {
     panduanhuiwen(n);
  cout<<wen<<endl;
  puandaunabhuiwen(wen);
  cout<<abwen;
  }
 
}