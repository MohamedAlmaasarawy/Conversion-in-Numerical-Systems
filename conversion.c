/********************************************* Start of Function Definition ********************************************************/
void Main_Function(void)
{
    printf("____________________________________________________________\n");
    printf("|                                                           |\n");
    printf("|     ENTER WHICH CONVERSION OPERATION YOU WANT             |\n");
    printf("|                                                           |\n");
    printf("|     1.CONVERT FROM DECIMAL TO BINARY                      |\n");
    printf("|     2.CONVERT FROM DECIMAL TO HEXA                        |\n");
    printf("|     3.CONVERT FROM HEXA TO BINARY                         |\n");
    printf("|     4.CONVERT FROM HEXA TO Decimal                        |\n");
    printf("|     5.CONVERT FROM BINARY TO DECIMAL                      |\n");
    printf("|     6.CONVERT FROM BINARY TO HEXA                         |\n");
    printf("____________________________________________________________\n");
    unsigned char Choice = 0;
    scanf("%hhu", &Choice);

    switch(Choice)
    {
    case 1:
        Convert_From_Dec_To_Binary();
        break;
    case 2:
        Convert_From_Dec_To_Hexa();
        break;
    case 3:
        Convert_From_Hexa_To_Binary();
        break;
    case 4:
        Convert_From_Hexa_To_Dec();
        break;
    case 5:
        Convert_From_Binary_To_Dec();
        break;
    case 6:
        Convert_From_Binary_To_Hexa();
    default:
        printf("Invalid Conversion !!\n");
        exit(0);
    }
}

unsigned char index;
unsigned char Counter = 0;
void Convert_From_Dec_To_Binary(void)
{
    unsigned short Dec_To_Binary = 0;
    printf("Enter decimal number to convert it to binary number = ");
    scanf(" %hu", &Dec_To_Binary);

    unsigned short Temprory_Variable = Dec_To_Binary;
    Counter = 0;
    while(Temprory_Variable) // Use Temprory_Variable for counting bits
    {
        Temprory_Variable /= 2;
        Counter++;
    }

    unsigned char Binary_From_Dec[Counter];
    Temprory_Variable = Dec_To_Binary;
    for(index = 0 ; index < Counter ; index++)
    {
        Binary_From_Dec[index] = Temprory_Variable % 2;
        Temprory_Variable /= 2;
    }

    printf("The number you inputted by decimal to convert it to binary is = ");
    for(index = Counter; index > 0 ; index--)
    {
        printf("%i", Binary_From_Dec[index-1]);
    }
    printf("\n");
}
void Convert_From_Dec_To_Hexa(void)
{
    unsigned short Dec_To_Hexa = 0;
    printf("Enter decimal number to convert it to Hexa number = ");
    scanf(" %i", &Dec_To_Hexa);
    printf("The number you inputted by decimal [%i] to convert it to hexa is = %X\n", Dec_To_Hexa, Dec_To_Hexa);
}
void Convert_From_Hexa_To_Binary(void)
{
    unsigned short Hexa_To_Binary = 0;
    printf("Enter Hexa number to convert it to Binary number = ");
    scanf(" %x", &Hexa_To_Binary);


    unsigned short Temprory_Variable = (unsigned short)Hexa_To_Binary;
    Counter = 0;
    while(Temprory_Variable) // Use Temprory_Variable for counting bits
    {
        Temprory_Variable /= 2;
        Counter++;
    }

    unsigned char Binary_From_Hexa[Counter];
    Temprory_Variable = (unsigned short)Hexa_To_Binary;
    for(index = 0 ; index < Counter ; index++)
    {
        Binary_From_Hexa[index] = Temprory_Variable % 2;
        Temprory_Variable /= 2;
    }

    printf("The number you inputted by decimal to convert it to binary is = ");
    for(index = Counter; index > 0 ; index--)
    {
        printf("%i", Binary_From_Hexa[index-1]);
    }
    printf("\n");
}
void Convert_From_Hexa_To_Dec(void)
{
    unsigned short Hexa_To_Dec = 0;
    printf("Enter Hexa number to convert it to Dec number = ");
    scanf(" %x", &Hexa_To_Dec);
    printf("The number you inputted by Hexa [%X] to convert it to Dec is = %i\n", Hexa_To_Dec, Hexa_To_Dec);
}
void Convert_From_Binary_To_Dec(void)
{
    unsigned int Dec_From_Binary = 0;
    unsigned char Number_Of_Digits = 0;
    printf("Enter the number of digit = ");
    scanf(" %hhu", &Number_Of_Digits);
    unsigned char Binary_To_Dec [Number_Of_Digits];


    printf("Enter Binary number to convert it to Dec number = ");
    for(index = 0 ; index < Number_Of_Digits ; index++)
    {
        scanf(" %c", &Binary_To_Dec[index]);
        if( Binary_To_Dec[index] == '1')
        {
            Dec_From_Binary += (unsigned int)pow(2, Number_Of_Digits - 1 - index);
        }
    }

    printf("The number you inputted by Binary to convert it to Dec = %u\n", Dec_From_Binary);
}
void Convert_From_Binary_To_Hexa(void)
{
    unsigned int Hexa_From_Binary = 0;
    unsigned char index = 0;
    unsigned char Number_Of_Digits = 0;
    printf("Enter the number of digit = ");
    scanf(" %hhu", &Number_Of_Digits);
    unsigned char Binary_To_Dec [Number_Of_Digits];


    printf("Enter Binary number to convert it to Dec number = ");
    for(index = 0 ; index < Number_Of_Digits ; index++)
    {
        scanf(" %c", &Binary_To_Dec[index]);
        if( Binary_To_Dec[index] == '1')
        {
            Hexa_From_Binary += (unsigned int)pow(2, Number_Of_Digits - 1 - index);
        }
    }

    printf("The number you inputted by Binary to convert it to Dec = %X\n", Hexa_From_Binary);
}
/********************************************* End of Function Definition ********************************************************/
