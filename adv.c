#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void generateBillHeader(char name[50], char date[30])
{
printf("\n\n");
printf("\t ADV. restaurent");
printf("\n\t   -----------------");
printf("\n Date:%s", date);
printf("\n Invoice To: %s",name);
printf("\n");
printf("--------------------------");
printf("Items\t\t");
printf("Qty\t\t");
printf("Total\t\t");
printf("\n---------------------------");
printf("\n\n");
}

void generateBillBody(char item[30],int qty, float price)
{
printf("%s\t\t",item);
printf("%d\t\t",qty);
printf("%.2f\t\t",qty*price);
printf("\n");
}

void generateBillFooter(float total)
{
printf("\n");
float dis= 0.1+total;
float netTotal = total-dis;
float cgst = 0.09 *netTotal,grandTotal=netTotal + 2*cgst;
printf("-----------------------------------\n");
printf("Sub Total\t\t\t%.2f",total);
printf("\n Discount @10 %s\t\t\t%.2f","%",dis);
printf("\n\t\t\t------------------");
printf("\nNet Total\t\t\t%.2f",netTotal);
printf("\nCGST @9 %s\t\t\t%.2f","%",cgst);
printf("\nSCGST @9 %s\t\t\t%.2f","%",cgst);
printf("\n------------------------------");
printf("\n Grand Total \t\t\t\t%.2f",grandTotal);
printf("\n--------------------------------");
}


int main()
{
printf("\t ~~~~~~~~~~~~~~~~Arain Resto~~~~~~~~~~~~~~~~~");
printf("\n 1.Generate Invoice");
printf("\n  2.show all Invoices");
printf("\n 3.search invoice");

printf("\n  4. Exit");
printf("\n\n");
return 0;
}
