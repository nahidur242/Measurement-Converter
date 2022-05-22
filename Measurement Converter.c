#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metres, cms, ft;
    float days, weeks;
    float miles, kms;
    float lbs, kgs;
    int choice, count=0;

    printf("Conversion Program");
    printf("\n1. metres to centimetres");
    printf("\n2. centimetres to metres");
    printf("\n3. weeks to days");
    printf("\n4. days to weeks");
    printf("\n5. miles to kilometres");
    printf("\n6. kilometres to miles");
    printf("\n7. feet to metres");
    printf("\n8. metres to feet");
    printf("\n9. lbs to kgs");
    printf("\n10. kgs to lbs");
    printf("\n\nEnter your choice: ");
    scanf ("%d", &choice);


    while (choice != -1){
        if (choice == 1)
        {

            printf("Convert metres to centimetres\n");
            printf("Enter metres: \n");
            scanf ("%f", &metres);
            cms = metres * 100;
            printf("%.2f metres = %2.f centimetres \n", metres, cms);

        }

        else if (choice == 2)
        {

            printf("Convert centimetres to metres\n");
            printf("Enter centimetres: ");
            scanf ("%f", &cms);
            metres = cms/100;
            printf("%2f cms = %.2f metres", cms, metres);

        }

        else if (choice == 3)
        {

            printf("Convert weeks to days\n");
            printf("Enter weeks: ");
            scanf ("%f", &weeks);
            days = weeks * 7;
            printf("%.2f weeks = %.2f days", weeks, days);

        }

        else if (choice == 4)
        {

            printf("Convert days to weeks\n");
            printf("Enter days: ");
            scanf ("%f", &days);
            weeks = days/7;
            printf("%.2f days = %.2f weeks", days, weeks);

        }

        else if (choice == 5)
        {

            printf("Convert miles to kilometres\n");
            printf("Enter miles: ");
            scanf ("%f", &miles);
            kms = miles/0.62;
            printf("%.2f miles = %.2f kilometres", miles, kms);

        }

        else if (choice == 6)
        {

            printf("Convert kilometres to miles\n");
            printf("Enter kilometres: ");
            scanf ("%f", &kms);
            miles = kms * 0.62;
            printf("%.2f kilometres = %.2f miles", kms, miles);

        }

        else if (choice == 7)
        {

            printf("Convert feet to metres\n");
            printf("Enter feet: ");
            scanf ("%f", &ft);
            metres = ft * 0.30;
            printf("%.2f feet = %.2f metres", ft, metres);

        }

        else if (choice == 8)
        {

            printf("Convert metres to feet\n");
            printf("Enter metres: ");
            scanf ("%f", &metres);
            ft = metres/0.30;
            printf("%.2f metres = %.2f ft", metres, ft);

        }

        else if (choice == 9)
        {

            printf("Convert lbs to kgs\n");
            printf("Enter lbs: ");
            scanf ("%f", &lbs);
            kgs = lbs * 0.45;
            printf("%.2f lbs = %.2f kgs", lbs, kgs);

        }

        else if (choice == 10)
        {

            printf("Convert kgs to lbs\n");
            printf("Enter kgs: ");
            scanf ("%f", &kgs);
            lbs = kgs/0.45;
            printf("%.2f kgs = %.2f lbs", kgs, lbs);

        }

        else
        {

            printf("Invalid choice\n");

        }

        printf("\n\nConversion Program\n");
        printf("1. metres to centimetres\n");
        printf("2. centimetres to metres\n");
        printf("3. weeks to days\n");
        printf("4. days to weeks\n");
        printf("5. miles to Kilometres\n");
        printf("6. Kilometres to miles\n");
        printf("7. feet to metres\n");
        printf("8. metres to feet\n");
        printf("9. lbs to kgs\n");
        printf("10. kgs to lbs\n");
        printf("\n\nEnter your choice, use -1 to finish:  ");
        scanf("%d", &choice);
        count++;
        }

    printf("\nYou did %d conversions", count);
    printf("\nThank you for using this program");

    return 0;
}

