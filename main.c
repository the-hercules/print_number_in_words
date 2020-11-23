#include<stdio.h>
#include<math.h>
int main()
{
int no,nodigit,tenpowera,tenpowerb,tenpowerc,tenpowerd,i,l,t,h,tens,temp1,temp2,temp3,s,f,y;
printf("Enter a number ");
scanf("%d",&no);
nodigit=log10(no);
nodigit += 1;
if(nodigit==9)
{
tenpowera=pow(10,(nodigit-2));
tenpowerb=pow(10,(nodigit-4));
tenpowerc=pow(10,(nodigit-6));
tenpowerd=pow(10,(nodigit-7));
i=no/tenpowera;
temp1=no/tenpowerb;
l=temp1%100;
temp2=no/tenpowerc;
t=temp2%100;
temp3=no/tenpowerd;
h=temp3%10;
tens=no%100;
}
if(nodigit==8)
{
tenpowera=pow(10,(nodigit-1));
tenpowerb=pow(10,(nodigit-3));
tenpowerc=pow(10,(nodigit-5));
tenpowerd=pow(10,(nodigit-6));
i=no/tenpowera;
temp1=no/tenpowerb;
l=temp1%100;
temp2=no/tenpowerc;
t=temp2%100;
temp3=no/tenpowerd;
h=temp3%10;
tens=no%100;
}
if(nodigit==7)
{
tenpowerb=pow(10,(nodigit-2));
tenpowerc=pow(10,(nodigit-4));
tenpowerd=pow(10,(nodigit-5));
i=0;
l=no/tenpowerb;
temp2=no/tenpowerc;
t=temp2%100;
temp3=no/tenpowerd;
h=temp3%10;
tens=no%100;
}
if(nodigit==6)
{
tenpowerb=pow(10,(nodigit-1));
tenpowerc=pow(10,(nodigit-3));
tenpowerd=pow(10,(nodigit-4));
i=0;
l=no/tenpowerb;
temp2=no/tenpowerc;
t=temp2%100;
temp3=no/tenpowerd;
h=temp3%10;
tens=no%100;
}
if(nodigit==5)
{
tenpowerc=pow(10,(nodigit-2));
tenpowerd=pow(10,(nodigit-3));
i=0;
l=0;
temp2=no/tenpowerc;
t=no/tenpowerc;
temp3=no/tenpowerd;
h=temp3%10;
tens=no%100;
}
if(nodigit==4)
{
tenpowerc=pow(10,(nodigit-1));
tenpowerd=pow(10,(nodigit-2));
i=0;
l=0;
t=no/tenpowerc;
temp3=no/tenpowerd;
h=temp3%10;
tens=no%100;
}
if(nodigit==3)
{
tenpowerd=pow(10,(nodigit-1));
i=0;
l=0;
t=0;
h=no/tenpowerd;
tens=no%100;
}
if(nodigit==2)
{
i=0;
l=0;
t=0;
h=0;
tens=no;
}

for(y=1;y<6;y++)
{
if(((i>0)&&(i<10)) || ((i>20) && (i<100)))
{
s=i%10;
f=i/10;
switch(f)
{
case 2:
printf("twenty ");
break;

case 3:
printf("thirty ");
break;

case 4:
printf("fourty ");
break;

case 5:
printf("fifty ");
break;

case 6:
printf("sixty ");
break;

case 7:
printf("seventy ");
break;

case 8:
printf("eighty ");
break;

case 9:
printf("ninety ");
break;
}
switch(s)
{
case 1:
printf("one ");
break;

case 2:
printf("two ");
break;

case 3:
printf("three ");
break;

case 4:
printf("four ");
break;

case 5:
printf("five ");
break;

case 6:
printf("six ");
break;

case 7:
printf("seven ");
break;

case 8:
printf("eight ");
break;

case 9:
printf("nine ");
break;
}
}
if((i>10) && (i<20))
{
switch(i)
{
case 11:
printf("eleven ");
break;

case 12:
printf("twelve " );
break;

case 13:
printf("thirteen ");
break;

case 14:
printf("fourteen ");
break;

case 15:
printf("fifteen ");
break;

case 16:
printf("sixteen ");
break;

case 17:
printf("seventeen ");
break;

case 18:
printf("eighteen ");
break;

case 19:
printf("nineteen ");
break;

case 20:
printf("twenty ");
break;
}
}
switch(y)
{
case 1: 
if(i!=0)
{
printf("crore ");
}
i=l;
break;

case 2:
if(l!=0)
{ 
printf("lakh ");
}
i=t;
break;

case 3:
if(t!=0)
{ 
printf("thousand ");
}
i=h;
break;

case 4:
if(h!=0)
{ 
printf("hundred ");
}
i=tens;
break;
}
}
}









    
