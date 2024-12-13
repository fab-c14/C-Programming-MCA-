#include<stdio.h>
int chkPrime(int n){
    int i = 1;
    int count = 0;
    while(i<=n){
        if(n%i==0){
            count++;
        }
        i++;
    }
    return count;
}
int main(){
   int n=5;
    int count = chkPrime(n);
    // if(count==2){
    //     printf("%d is a prime",n);
    // }

    // now let's use for loop to check add the prime numbers from 100 to 500
    int sum=0;
    int numberCount=0;
    for(int i = 100; i<=500; i++){
        count = chkPrime(i);
        if(count==2){
            numberCount++;
            sum+=i;
        }
    }
    printf("\nthe sum of prime numbers in between 100 and 500 is %d",sum);
    printf("\nthe total count of primes is %d",numberCount);

    return 0;
}
