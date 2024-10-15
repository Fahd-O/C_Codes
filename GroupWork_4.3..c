#include <stdio.h>
#include <string.h>


void checkSingleDigit(int x){
  if(x == 0){
    printf("zero\n");
  }else if(x == 1){
    printf("one\n");
  }else if(x == 2){
    printf("two\n");
  }else if(x == 3){
    printf("three\n");
  }else if(x == 4){
    printf("four\n");
  }else if(x == 5){
    printf("five\n");
  }else if(x == 6){
    printf("six\n");
  }else if(x == 7){
    printf("seven\n");
  }else if(x == 8){
    printf("eight\n");
  }else if(x == 9){
    printf("nine\n");
  }
   
}

void checkTwoDigit(int x){
  if(x == 10){
    printf("ten\n");
  }else if(x == 11){
    printf("eleven\n");
  }else if(x == 12){
    printf("twelve\n");
  }else if(x == 13){
    printf("thirteen\n");
  }else if(x == 14){
    printf("fourteen\n");
  }else if(x == 15){
    printf("fifteen\n");
  }else if(x == 16){
    printf("sixteen\n");
  }else if(x == 17){
    printf("seventeen\n");
  }else if(x == 18){
    printf("eighteen\n");
  }else if(x == 19){
    printf("nineteen\n");
  }
   
}

void checkTensMultiple(int x){
  int n, s;
  n = x/10;
  s = x - (n*10);

  if(n == 2){
    printf("twenty\n");
  }else if(n == 3){
    printf("thirty\n");
  }else if(n == 4){
    printf("forty\n");
  }else if(n == 5){
    printf("fifthy\n");
  }else if(n == 6){
    printf("sixty\n");
  }else if(n == 7){
    printf("seventy\n");
  }else if(n == 8){
    printf("eighty\n");
  }else if(n == 9){
    printf("ninety\n");
  }
  
  printf(" \n");
  
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
    printf(" hundred and \n");
    checkThousand(s);
  }else if(s>9999 && s<100000){
    printf(" hundred and \n");
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
    printf(" million \n");
    checkThousand(s);
  }else if(s>9999 && s<100000){
    printf(" million \n");
    checkTenThousand(s);
  }else if(s>99999 && s<1000000){
    printf(" million \n");
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
    printf(" million \n");
    checkThousand(s);
  }else if(s>9999 && s<100000){
    printf(" million \n");
    checkTenThousand(s);
  }else if(s>99999 && s<1000000){
    printf(" million \n");
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
    printf(" hundred million \n");
    checkThousand(s);
  }else if(s>9999 && s<100000){
    printf(" hundred million \n");
    checkTenThousand(s);
  }else if(s>99999 && s<1000000){
    printf(" hundred million \n");
    checkHundredThousand(s);
  }else if(s>999999 && s<10000000){
    printf("%d", s);
    printf(" hundred and \n");
    checkMillion(s);
  }else if(s>9999999 && s<100000000){
    printf(" hundred and \n");
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
    if(n > 0){
    checkSingleDigit(n);
    }
  }else if(count == 2){
    if(n < 20){
    checkTwoDigit(n);
    }else{
    checkTensMultiple(n);
    }
  }else if(count == 3){
    checkHundred(n);
  }else if(count == 4){
    checkThousand(n);
  }else if(count == 5){
    checkTenThousand(n);
  }else if(count == 6){
    checkHundredThousand(n);
  }else if(count == 7){
    checkMillion(n);
  }else if(count == 8){
    checkTenMillion(n);
  }else if(count == 9){
    checkHundredMillion(n);
  }
  
  
  
  return 0;
}
