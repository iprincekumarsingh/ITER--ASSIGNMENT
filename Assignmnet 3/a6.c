/*
Write a program to calculate the bill amount for a given item given its quantity sold, value, 
discount and tax. Prepare the bill in the following format:
****************** BILL *******************
QUANTITY SOLD: 20
PRICE PER ITEM: 300
---------------------------------
AMOUNT: 6000
DISCOUNT: - 600
DISCOUNTED TOTAL: 5400
TAX: + 648
---------------------------------
TOTAL AMOUNT 6048
*/
#include <stdio.h>
int main()
{
    int qsold, pitem, amount, dis, disPer, dis_total, tax, taxAmount,total_amount;
    printf("QUANTITY SOLD: \n");
    scanf("%d", &qsold);

    printf("PRICE PER ITEM: \n");
    scanf("%d", &pitem);
    amount = pitem * qsold;
    printf("AMOUNT: %d\n", amount);

    printf("Enter the discount percentage\n");
    scanf("%d", &disPer);
    // dis = amount / disPer;
   dis=amount*disPer/100;

    printf("Discounted Amountage %d \n",dis);
      dis_total=amount-dis;
    printf("DISCOUNTED TOTAL: %d \n",dis_total);
    printf("Enter the tax percentage \n");
    scanf("%d", &tax);


    taxAmount=dis_total*tax/100;

    printf("TAX: + %d\n",taxAmount);

  total_amount=taxAmount+dis_total;
  printf("TOTAL AMOUNT : %d",total_amount);

    // taxAmount = 

    // printf("%d \n", taxAmount);
}