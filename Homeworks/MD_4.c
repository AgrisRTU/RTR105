#include <stdio.h>

int main()          
{
  int i;
  int skaitlis;
  long long int dalijums = 0;
  long long int prev_fact = 0;
    
    
  printf("Ievadiet skaili kuram jaiegust faktorials: ");
  scanf("%d", &skaitlis);

  if (skaitlis == 1 || skaitlis == 0)
   {
    printf("Si skaitla faktorials ir 1");
    return 1;
   }
    else if (skaitlis < 0)
     {
      printf("Ievadiet pozitivu skaitli!");
      return 1;
     }
    

  printf("Izvelaties datu tipu\nchar - 1, int - 2, long long int - 3\n");
  scanf("%d", &i);
    
    
  switch (i)
   {
    case 1: //char
   { 

    char faktorials;
    faktorials = skaitlis;

    while (skaitlis != 2 && dalijums == prev_fact)
      {
        prev_fact = faktorials;

        kaitlis--;                             
        faktorials *= skaitlis;

        dalijums = faktorials/skaitlis;

        if (dalijums != prev_fact)
          {
           printf("Kluda! Faktorials ir arpus datu tipa robezas.\n");
           return 10;
                
          }

      }

        
       printf("Skaitla faktorials ir: %hhd \n", faktorials);
        
        
       break;
    }

  case 2: // int
   {
    int faktorials;
    faktorials = skaitlis;

    while (skaitlis != 2 && dalijums == prev_fact)
      {
          prev_fact = faktorials;

          skaitlis--;                             
          aktorials *= skaitlis;

          dalijums = faktorials/skaitlis;

          if (dalijums != prev_fact)
           {
            printf("Kluda! Faktorials ir arpus datu tipa robezas.\n");
            return 10;
           }

        }
        
        
        printf("Skaitla faktorials ir: %d \n", faktorials);
       
        
        
        break;
    }

     case 3: // long long
    {
      long long int faktorials;

      faktorials = skaitlis;
      while (skaitlis != 2 && dalijums == prev_fact)
       {
        prev_fact = faktorials;

        skaitlis--;                             
        faktorials *= skaitlis;

        dalijums = faktorials/skaitlis;

          if (dalijums != prev_fact)
           {
            printf("Kluda! Faktorials ir arpus datu tipa robezas.\n");
            return 10;
           }

       }
      
        printf("Skaitla faktorials ir: %lld \n", faktorials);
        
        
        
      break;
    }

     default:
    {
     printf("Ievadiet pareizu vertibu!\n");
    }

    }

    return 0;
}
