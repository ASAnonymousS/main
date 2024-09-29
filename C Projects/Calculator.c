//Created by Achyuta Shrimate
//Date - 27/07/24

#include <stdio.h>
#include <math.h>
//#include <iostream>

void calculation(float *ans, float *m){
    int oc;
    float a,b;
    if(*ans!=0.0){
        a = *ans;
        printf("\n Choose your operation which you want to perform \n \n1 - Addition \n2 - Subtraction \n3 - Multiplication \n4 - Divison \n5 - Remainder \n6 - Power \n7 - Square Root \n8 - History \n9 - M+ \n10 - M- \n11 - MC \n12 - MR \n");
        scanf("%d", &oc);
        printf("\n Enter the number\nDECIMALS ARE ACCEPTED\n");
        scanf("%f", &b);
    }
    else{
        printf("Enter two numbers and in such a order that the operation will be performed in such a manner: \n\n <FIRST NUMBER> <OPERATOR> <SECOND NUMBER>\nDECIMALS ARE ACCEPTED\n");
        scanf("%f%f", &a,&b);
        printf("\n Choose your operation which you want to perform \n \n1 - Addition \n2 - Subtraction \n3 - Multiplication \n4 - Divison \n5 - Remainder \n6 - Power \n7 - Square Root \n8 - History \n9 - M+ \n10 - M- \n11 - MC \n12 - MR \n");
        scanf("%d", &oc);
    }
    switch (oc)
    {
    case 1:
        *ans = a + b;
        break;
    case 2:
        *ans = a - b;
        break;
    case 3:
        *ans = a * b;
        break;
    case 4:
        *ans = a / b;
        break;
    case 5:
        *ans = (int)a % (int)b;
        break;
    case 6:
        *ans = powf(a,b); 
        break;
    case 7:
        *ans = sqrt(a);
        break;
    case 8:
        printf("\n History:");
        printf("\n Currently not made, will be completed in a few days");
        //history();
        break;
    case 9:
        printf("\n Memory+");
        *m += *ans;
        break;
    case 10:
        printf("\n Memory-");
        *m -= *ans;
        break;
    case 11:
        printf("\n Memory Cleared.");
        *m = 0;
        break;
    case 12:
        printf("\n Memory Recall.");
        printf("%f", *m);
        break;
    case 13:
        *ans = 0, a = 0, b = 0, *m = 0;
        printf("Cleared");
        break;
    default:
        printf("Invalid choice");
        break;
    }
}

int main(){
    //Use of program is given
    printf("This is a calculator program based on C language \nThere is a help menu designed to understand how to use multiple functions of the calculator if you are using it for the first time my advice would be to go through the help menu atleast once to understand all the functions of the calculator and use them for your benfit and efficiency \n Do you want to open the help menu ? \n \"Y/N\" \n");
    char hc, rc;
    float res = 0, mem = 0;
    scanf(" %c", &hc);
    //Help menu opening or not
    if(hc == 'Y' || hc == 'y')
    {
        printf("This program is a CUI/CLI based calculator which can let you perform all the actions that you can perform in a GUI based calculator. \nIt has the following functions available : \n1) Addition \n2) Subtraction \n3) Multiplication \n4) Divison \n5) Power \n6) Square Root \n7) Memory Functions \n8) History of previous calculations up to 100 calculations \n Now I hope you can use it. \n \n \n \n \n");
    }
    do
    {
        calculation(&res, &mem);
        printf("\n = %f", res);
        printf("\n Do you want to perform further calculations ? \n Y or N \n");
        scanf(" %c", &rc);
    } while (rc == 'Y' || rc == 'y');
    return 0;
}