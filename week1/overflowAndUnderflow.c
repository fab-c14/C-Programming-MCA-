#include<stdio.h>
#include<limits.h> // for knowing the limits of various data types
#include<math.h> // for using pow function to calculate the powers

int main()
{
    printf("Interger Overflow and Underflow: \t");
    printf("\n max value an integer can have is %d, minimum value an integer can store is %d\n",INT_MAX,INT_MIN);

    // resolution use a larger data type
    int Holdable = INT_MAX;
    int notHoldable = Holdable + 1;
    unsigned char uc_max = UCHAR_MAX;
    unsigned char uc_min = 0;

    printf("adding 1 to max result in overflow, here is value after adding 1:  %d\n",notHoldable);

    // here is how to find this size
    printf("\n max no of characters a (my)machine can store is %.0f",pow(2.0,(sizeof(char)*8)));
    // that is how we calculate the range lets now calculate for each ,
    printf("\n the range of integers on my machine is %.0f",pow(2.0,(sizeof(int)*8)));
    // further there are two types unsigned and signed let's check for them also
    printf("\nthe range of unsigned int on my machine is %.0f",pow(2.0,(sizeof(unsigned)*8))/2);

    // the resolution of the overflow of operators is to use larger storing data types
    return 0;
}
