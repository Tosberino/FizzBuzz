#include <stdio.h>

int main(){

  for(int i = 1; i < 101; i++){
    if(i%15==0){
      printf("fizzbuzz");
    }else if(i%3==0){
      printf("fizz");
    }else if(i%5==0){
      printf("buzz");
    }else{
      printf("%i",i);
    }
    printf("\n");
  }

}
