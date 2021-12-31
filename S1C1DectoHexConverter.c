#include <stdio.h>
#include <stdlib.h>

int main(void){
  int decimalNumber;

  system("clear");
  puts("\n\n\n\n\n\n");
  puts("********^^^^********\n");
  puts("The Decimal to Hexadecimal converter\n");
  puts("********^^^^********\n");
  puts("\n --Press enter to continue--\n");
  int c;
  while ((c = getchar()) != '\n' && c != EOF) { }
  puts("Continuing");
  system("clear");
  
  puts("\n\n\n\n\n\n");
  puts("********^^^^********\n");
  puts("Please enter a decimal number to\n"); 
  puts("convert to Hexadecimal and press -Enter-\n");
  puts("********^^^^********\n");
  scanf("%d", &decimalNumber);
  printf("\nYou entered:    %9d\n", decimalNumber);
  printf("\nIn Hexadecimal: %9X\n", decimalNumber);
  puts("\n --Press enter to continue-- ");
  int d;
  while ((d = getchar()) != '\n' && d != EOF) { }
  //Splash screen w/keypress prompt
  //Menu
  //Exit screen (possibly just listed in main func here
  
 return 0;
}
