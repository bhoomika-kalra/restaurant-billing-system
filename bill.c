#include<stdio.h>

int main()
{
    
    int ch, price, qty, amt, total=0;
    float gst, bill;
    
    printf("\tTASTE OF INDIA RESTAURANT\n");
        
    do
    {
        printf("\n\t\tMENU\n\n");
        printf("1. Butter Chicken \t - Rs.220\n");
        printf("2. Chicken Chilly \t - Rs.180\n");
        printf("3. Naam \t\t - Rs.30\n");
        printf("4. Chicken 65 \t\t - Rs.200\n");
        printf("5. Tandoori Chicken \t - Rs.250\n");
        printf("0. Generate Bill\n\n");
        
        printf("Enter Choice of Item:");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1: price=220;
                
                printf("Enter quantity: ");
                scanf("%d", &qty);
                if(qty<=0)
                {
                    printf("Invalid Quantity! Please enter a valid quantity.");
                    break;
                }
                
                printf("\nSelected Item\t:Butter Chicken\n");
                printf("Price per item\t:Rs.220\n");
                printf("Quantity\t:%d\n", qty);              
                amt = price * qty;
                total += amt; 
                printf("Amount\t\t:Rs. %d\n", amt);
                printf("Total\t\t:Rs. %d\n",total);
                break;
                
            case 2: price=180;
                
                printf("Enter quantity: ");
                scanf("%d", &qty);
                if(qty<=0)
                {
                    printf("Invalid Quantity! Please enter a valid quantity.");
                    break;
                }
                
                printf("\nSelected Item\t:Chicken Chilly\n");
                printf("Price per item\t:Rs.180\n");
                printf("Quantity\t:%d\n", qty);              
                amt = price * qty;
                total += amt; 
                printf("Amount\t\t:Rs. %d\n", amt);
                printf("Total\t\t:Rs. %d\n",total);
                break;
                
            case 3: price=30;
                
                printf("Enter quantity: ");
                scanf("%d", &qty);
                if(qty<=0)
                {
                    printf("Invalid Quantity! Please enter a valid quantity.");
                    break;
                }
                
                printf("\nSelected Item\t:Naam\n");
                printf("Price per item\t:Rs.30\n");
                printf("Quantity\t:%d\n", qty);              
                amt = price * qty;
                total += amt; 
                printf("Amount\t\t:Rs. %d\n", amt);
                printf("Total\t\t:Rs. %d\n",total);
                break;
                
            case 4: price=200;
                
                printf("Enter quantity: ");
                scanf("%d", &qty);
                if(qty<=0)
                {
                    printf("Invalid Quantity! Please enter a valid quantity.");
                    break;
                }
                
                printf("\nSelected Item\t:Chicken 65\n");
                printf("Price per item\t:Rs.200\n");
                printf("Quantity\t:%d\n", qty);              
                amt = price * qty;
                total += amt; 
                printf("Amount\t\t:Rs. %d\n", amt);
                printf("Total\t\t:Rs. %d\n",total);
                break;
                
            case 5: price=250;
                
                printf("Enter quantity: ");
                scanf("%d", &qty);
                if(qty<=0)
                {
                    printf("Invalid Quantity! Please enter a valid quantity.");
                    break;
                }
                
                printf("\nSelected Item\t:Tandoori Chicken\n");
                printf("Price per item\t:Rs.250\n");
                printf("Quantity\t:%d\n", qty);              
                amt = price * qty;
                total += amt; 
                printf("Amount\t\t:Rs. %d\n", amt);
                printf("Total\t\t:Rs. %d\n",total);
                break;

            case 0:
                printf("\nTASTE OF INDIA FINAL BILL\n\n");
                gst = total * 0.05;
                bill = total + gst;

                printf("Subtotal \t: Rs. %d\n", total);
                printf("GST (5%%) \t: Rs. %.2f\n", gst);
                printf("Final Bill \t: Rs. %.2f\n", bill);
                break;
                
            default: printf("Invalid Choice!\n");
        }
    } 
    while(ch != 0);
    return 0;
}