#include <stdio.h>
#include <string.h>
/*
int main() {
  long long n;
  int count = 0;
  printf("Enter an integer: ");
  scanf("%lld", &n);
  
  while(n != 0){
    n /= 10;
    ++count;
  }
  
  //while(n != 0);
  
  printf("Number of digits: %d", count);
}
*/


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
  checkTensMultiple(f);
  
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
  
  count = check(n);
  
  if (count == 1){
    if(n == 0){
      printf("Digit not allowed");
    }else{
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
  }
  
  
  
  
  
}
