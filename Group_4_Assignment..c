/* GROUP 4 ASSIGNMENT SOLUTION */
/*
                  Question ?
  Write a C Program to accept a number and then convert the number into words. Your program
  should be able to handle any number LESS THAN 1,000,000.
  To be submitted on Tue, 30th Nov 2021 (Per group !)
  submit to: amobiledeveloper01@gmail.com
*/

#include <stdio.h>
#include <string.h>

void checkSingleDigit(int x){
  if(x == 1){
    printf("one");
  }else if(x == 2){
    printf("two");
  }else if(x == 3){
    printf("three");
  }else if(x == 4){
    printf("four");
  }else if(x == 5){
    printf("five");
  }else if(x == 6){
    printf("six");
  }else if(x == 7){
    printf("seven");
  }else if(x == 8){
    printf("eight");
  }else if(x == 9){
    printf("nine");
  }
   
}

void checkTwoDigit(int x){
  if(x == 10){
    printf("ten");
  }else if(x == 11){
    printf("eleven");
  }else if(x == 12){
    printf("twelve");
  }else if(x == 13){
    printf("thirteen");
  }else if(x == 14){
    printf("fourteen");
  }else if(x == 15){
    printf("fifteen");
  }else if(x == 16){
    printf("sixteen");
  }else if(x == 17){
    printf("seventeen");
  }else if(x == 18){
    printf("eighteen");
  }else if(x == 19){
    printf("nineteen");
  }
   
}

void checkTensMultiple(int x){
  int n, s;
  n = x/10;
  s = x - (n*10);

  if(n == 2){
    printf("twenty");
  }else if(n == 3){
    printf("thirty");
  }else if(n == 4){
    printf("forty");
  }else if(n == 5){
    printf("fifthy");
  }else if(n == 6){
    printf("sixty");
  }else if(n == 7){
    printf("seventy");
  }else if(n == 8){
    printf("eighty");
  }else if(n == 9){
    printf("ninety");
  }
  
  printf(" ");
  
  checkSingleDigit(s);
  
  
   
}

void checkHundred(int x){
  int f, s;
  f = x/100;
  s = x - (f*100);
  
  checkSingleDigit(f);
  
  if(s == 0){
    printf(" hundred" );
  }else if(s>0 && s<10){
    s = s%10;
    printf(" hundred and " );
    checkSingleDigit(s);
  }else if(s>9 && s<20){
    printf(" hundred and " );
    checkTwoDigit(s);
  }else{
    printf(" hundred and " );
    checkTensMultiple(s);
  }
   
}

void checkThousand(int x){
  int f, s, t;
  f = x/1000;
  s = x - (f*1000);
  
  checkSingleDigit(f);
  
  if(s == 0){
    printf(" thousand" );
  }else if(s>0 && s<10){
    s = s%10;
    printf(" thousand and " );
    checkSingleDigit(s);
  }else if(s>9 && s<20){
    printf(" thousand and " );
    checkTwoDigit(s);
  }else if(s>99 && s<1000){
    printf(" thousand " );
    checkHundred(s);
  }
   
}

void checkTenThousand(int x){
  int f, s, t;
  f = x/1000;
  s = x - (f*1000);
  
  if(f<20){
  checkTwoDigit(f);
  }else{
  checkTensMultiple(f);
  }
  
  if(s == 0){
    printf(" thousand" );
  }else if(s>0 && s<10){
    s = s%10;
    printf(" thousand and " );
    checkSingleDigit(s);
  }else if(s>9 && s<20){
    printf(" thousand and " );
    checkTwoDigit(s);
  }else if(s>99 && s<1000){
    printf(" thousand " );
    checkHundred(s);
  }
   
}

void checkHundredThousand(int x){
  int f, s, t;
  f = x/100000;
  s = x - (f*100000);
  
  checkSingleDigit(f);
  
  if(s == 0){
    printf(" thousand" );
  }else if(s>0 && s<10){
    s = s%10;
    printf(" hundred thousand and " );
    checkSingleDigit(s);
  }else if(s>9 && s<20){
    printf(" hundred thousand and " );
    checkTwoDigit(s);
  }else if(s>99 && s<1000){
    printf(" hundred thousand " );
    checkHundred(s);
  }else if(s>999 && s<10000){
    printf(" hundred and ");
    checkThousand(s);
  }else if(s>9999 && s<100000){
    printf(" hundred and ");
    checkTenThousand(s);
  }
   
}

void checkMillion(int x){
  int f, s, t;
  f = x/1000000;
  s = x - (f*1000000);
  
  checkSingleDigit(f);
  
  if(s == 0){
    printf(" million" );
  }else if(s>0 && s<10){
    s = s%10;
    printf(" million and " );
    checkSingleDigit(s);
  }else if(s>9 && s<20){
    printf(" million and " );
    checkTwoDigit(s);
  }else if(s>99 && s<1000){
    printf(" million, " );
    checkHundred(s);
  }else if(s>999 && s<10000){
    printf(" million ");
    checkThousand(s);
  }else if(s>9999 && s<100000){
    printf(" million ");
    checkTenThousand(s);
  }else if(s>99999 && s<1000000){
    printf(" million ");
    checkHundredThousand(s);
  }
   
}

void checkTenMillion(int x){
  int f, s, t;
  f = x/1000000;
  s = x - (f*1000000);
  
  if(f<20){
  checkTwoDigit(f);
  }else{
  checkTensMultiple(f);
  }
  
  if(s == 0){
    printf(" million" );
  }else if(s>0 && s<10){
    s = s%10;
    printf(" million and " );
    checkSingleDigit(s);
  }else if(s>9 && s<20){
    printf(" million and " );
    checkTwoDigit(s);
  }else if(s>99 && s<1000){
    printf(" million, " );
    checkHundred(s);
  }else if(s>999 && s<10000){
    printf(" million ");
    checkThousand(s);
  }else if(s>9999 && s<100000){
    printf(" million ");
    checkTenThousand(s);
  }else if(s>99999 && s<1000000){
    printf(" million ");
    checkHundredThousand(s);
  }
   
}

void checkHundredMillion(int x){
  int f, s, t;
  f = x/100000000;
  s = x - (f*100000000);
  
  checkSingleDigit(f);
  
  if(s == 0){
    printf(" hundred million" );
  }else if(s>0 && s<10){
    s = s%10;
    printf(" hundred million and " );
    checkSingleDigit(s);
  }else if(s>9 && s<20){
    printf(" hundred million and " );
    checkTwoDigit(s);
  }else if(s>99 && s<1000){
    printf(" hundred million, " );
    checkHundred(s);
  }else if(s>999 && s<10000){
    printf(" hundred million ");
    checkThousand(s);
  }else if(s>9999 && s<100000){
    printf(" hundred million ");
    checkTenThousand(s);
  }else if(s>99999 && s<1000000){
    printf(" hundred million ");
    checkHundredThousand(s);
  }else if(s>999999 && s<10000000){
    printf("%d", s);
    printf(" hundred and ");
    checkMillion(s);
  }else if(s>9999999 && s<100000000){
    printf(" hundred and ");
    checkTenMillion(s);
  }
   
}

int check(int n){
  int count = 0;
  while(n != 0){
    n /= 10;
    ++count;
  }
  return count;
}

int main(){
  int n;
  int count;
  printf("Enter number: ");
  scanf("%d", &n);
  
  if (n == 0){
      printf("Zero\n");
  }
  
  count = check(n);

  if (count > 9){
    printf("Number too large !\n");
}
  
  if (count == 1){
    if(n == 0){
      printf("Digit not allowed");
    }else{
    checkSingleDigit(n);
    }
    printf("\n");
  }else if(count == 2){
    if(n < 20){
    checkTwoDigit(n);
    }else{
    checkTensMultiple(n);
    }
    printf("\n");
  }else if(count == 3){
    checkHundred(n);
    printf("\n");
  }else if(count == 4){
    checkThousand(n);
    printf("\n");
  }else if(count == 5){
    checkTenThousand(n);
    printf("\n");
  }else if(count == 6){
    checkHundredThousand(n);
    printf("\n");
  }else if(count == 7){
    checkMillion(n);
    printf("\n");
  }else if(count == 8){
    checkTenMillion(n);
    printf("\n");
  }else if(count == 9){
    checkHundredMillion(n);
    printf("\n");   
  }
  
  
  
  
  
}

/*

GROUP ATTENDANCE
S/N	NAME	JAMB REG./ MATRIC NO.

1.Adeagbo Samson CSC/2018/1004
2.Adeosun Emmanuel CSC/2018/1014
3.Agbo Ogechi Martha CSC/2018/1024
4.Akindele Oluwadamilare  David CSC/2018/1034
5.Aladeyelu Ayodeji CSC/2018/1044
6.Awodola Olusola Ebenezer CSC/2018/1054
7.Bamidele Olaoluwa Caleb CSC/2018/1064
8.Dimgba David Chisom CSC/2018/1074
9.Faleye Oluwaseyi CSC/2018/1084
10.Israel Boluwatife Ogo-Oluwa	 CSC/2018/1094
11.Madamidola Samuel Eriwale CSC/2018/1104
12.Ogunnaike Abiola Fahad. CSC/2018/1114.
13.Oladepo Temitope Olasunkanmi CSC/2018/1124
14.Olatona Moyinoluwa Theophilus CSC/2018/1134
15.Olubusoye Isaac Opeyemi CSC/2018/1144
16.Otukoya Tijesunimi Ayotunde CSC/2018/1154
17.Taofeek Ibrahim Opeyemi CSC/2018/1164
18.Adetunmbi Peter CSC/2018/1174
19.Yusuf Mubarak CSC/2018/1184
20.Olanrewaju Seun Felix CSC/2018/1194
21.Ogundeji Emmanuel Damilare CSC/2019/2004
		
22.Eshiet Emem Emmanuel CSC/2017/1084
23.Kamaldeen Rakiya Mayowa CSC/2017/1104
24.Sobande Oluwakorede Ezekiel CSC/2017/1194
25.Afolabi Enoch Temidayo CSC/2017/1034
26.Olofinkua Thomas Adetola CSC/2017/1154
27.Olaleye Oluwafemi Damilola CSC/2017/1144
28.Adams Temidayo O. CSC/2017/1004
29.Arojojoye Victor Oluwatosin CSC/2017/1014
		
30.Opoola Timothy Oluwafemi CSC/2016/1174
31.Arojojoye Victor Oluwatosin CSC/2016/1014

*/
