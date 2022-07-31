#include<stdio.h>
 main()
 {
 float me,usp,fs,cn2,st,cd,avmar;
 printf("Letter Grading Program");
 printf("Enter the marks for ME");
 scanf("%f",&me);
 printf("Enter the marks for USP");
scanf("%f",&usp);
 printf("Enter the marks for FS");
scanf("%f",&fs);
 printf("Enter the marks for CN2");
 scanf("%f",&cn2);
 printf("Enter the marks for ST");
 scanf("%f",&st);
 printf("Enter the marks for CD");
 scanf("%f",&cd);
if((me>=0&&me<=100)&&(usp>=0&&usp<=100)&&(fs>=0&&fs<=100)&&(c
n2>=0&&cn2<=100)&&(st>=0&&st<=100)&&(cd>=0&&cd<=100))
 {
 if(me<35||usp<35||fs<35||cn2<35||st<35||cd<35)
 {
 printf("\nFail");
 goto end;
}
avmar=(me+usp+fs+cn2+st+cd)/6;
 printf("The average marks= %2f\n",avmar);
 if((avmar>=35)&&(avmar<=40))
 printf("Grade C");
 else if((avmar>40)&&(avmar<=50))
 printf("grade C+");
 else if((avmar>50)&&(avmar<=60))
 printf("Grade B");
 else if((avmar>60)&&(avmar<=70))
 printf("Grade B+");
 else if((avmar>70)&&(avmar<=80))
 printf("Grade A");
 else printf("Grade A+");
 }
 else{
 printf("\n Invalid Data");
 }
 end:return;
}
