#include <stdio.h>
void decimaltoOctal(int deciNum)
{
 
    int octalNum = 0, countval = 1;
    int dNo = deciNum;
 
    while (deciNum != 0) {
        // decimals remainder is calculated
        int remainder = deciNum % 8;
 
        // storing the octalvalue
        octalNum += remainder * countval;
 
        // storing exponential value
        countval = countval * 10;
        deciNum /= 8;
    }
    printf("%d", octalNum);
}
 
// Driver Code
int main()
{
    int n;
    scanf("%d", &n);
 
    // Function Call
    decimaltoOctal(n); 
      
    return 0; 
} 