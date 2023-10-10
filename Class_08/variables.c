#include<stdio.h>

int main(void)
{
char c1; //šī ir diskrētā mainīgā deklarēšana - noteikta izmēra atmiņas
         //apgabals (char -> 1byte) tiks sasaistīts ar noteiktu
         //identifikātoru (c1)
         //atmiņa nav vakums
printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (simbols): %c\n",c1);
printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (dec): %d\n",c1);
printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (hex): %#x\n",c1);
printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (oct): %#o\n",c1);
          // mainīgā "loma" ir - mainīties ..
c1 = 'A'; // visbiežāk  šo izmaiņu veiksim ar NB! piešķiršanas operāciju - =
          // piešķiršanas operācijai ir gandrīz viszemākā prioritāte
          // (tā tiek ispildīta viena no pēdējām)
          // labajā pusē izrēķinātais
printf("c1 mainīgā vērtība uzreiz pēc piešķiršanas operācijas (simbols): %c\n",c1);
printf("c1 mainīgā vērtība uzreiz pēc piešķiršanas operācijas (dec): %d\n",c1);
printf("c1 mainīgā vērtība uzreiz pēc piešķiršanas operācijas (hex): %#x\n",c1);
printf("c1 mainīgā vērtība uzreiz pēc piešķiršanas operācijas (oct): %#o\n",c1);

printf("\n");
c1 = 0125;
printf("c1 mainīgā vērtība uzreiz pēc piešķiršanas operācijas (simbols): %c\n",c1);
printf("c1 mainīgā vērtība uzreiz pēc piešķiršanas operācijas (dec): %d\n",c1);
printf("c1 mainīgā vērtība uzreiz pēc piešķiršanas operācijas (hex): %#x\n",c1);
printf("c1 mainīgā vērtība uzreiz pēc piešķiršanas operācijas (oct): %#o\n",c1);

int birth_year = 2000; // šī ir mainīgā definŗšana
                       // (atmiņas apgabala sasaistīšana ar identifikātoru 
                       // vērtības piešķiršana)
                       // manīgajiem identifikātoriem, jēb vārdiem vēlams
                       // izvelēties nemoniskus - nosaukuma
                       // vārds vai teksts atspoguļo nolūlu, kuram šis
                       // manīgais ir paredzēts
                       // identifikātors nevar sākties ar ciparu
                       // 
printf("\n");
printf("birth_year mainīgā vērtība (simbols): %c\n",birth_year);
printf("birth_year mainīgā vērtība (dec): %d\n",birth_year);
printf("birth_year mainīgā vērtība (hex): %x\n",birth_year);
printf("birth_year mainīgā vērtība (oct): %o\n",birth_year);

int i1, i2 = 0, i3 = 0x13, i4 = 025;

int modified_birth_year = birth_year >> 4;

printf("\n");
printf("modified_birth_year (simbols): %c\n",modified_birth_year);
printf("modified_birth_year (dec): %d\n",modified_birth_year);
printf("modified_birth_year (hex): %x\n",modified_birth_year);
printf("modified_birth_year (oct): %o\n",modified_birth_year);

// htpa://wwwgeeksforgeeks.org/data-type-in-c/
// +, -, *, /, %,  ...
char c = 10, cc = 127;
int i = 4569, ii =126;
float f = 3.e-16, ff = 0.2569;
double d = 4.789e39, dd = -13.56;

printf("c=%d\t\t (piešķirtāsa atmiņas baitos - %ld,\n\t\t ",c,sizeof(c));
printf("atrašanās vietaa atmiņā - %p)\n",&c);
printf("i=%d\t\t (piešķirtāsa atmiņas baitos - %ld,\n\t\t ",i,sizeof(i));
printf("atrašanās vietaa atmiņā - %p)\n",&i);
printf("f=%.2e\t (piešķirtāsa atmiņas baitos - %ld,\n\t\t ",f,sizeof(f));
printf("atrašanās vietaa atmiņā - %p)\n",&f);
printf("d=%.3e\t (piešķirtāsa atmiņas baitos - %ld,\n\t\t ",d,sizeof(d));
printf("atrašanās vietaa atmiņā - %p)\n",&d);

int *i_adrese = &i;
printf("i mainīgā adrese - %p\n",i_adrese);
int *i_adreses_kopija = i_adrese;
printf("i adreses kopija - %p\n",i_adreses_kopija);
printf("i mainīgā vērtība, izgūta pielietojot tā adresi - %d\n",*i_adrese);
printf("i mainīgā vērtība, izgūta pielietojot tā adreses kopiju - %d\n",*i_adreses_kopija);

int **i_adreses_adrese =&i_adrese;
printf("i adreses adrese - %p\n", i_adreses_adrese);
printf("i adreses adreses izmērs baitos - %ld\n",sizeof(i_adreses_adrese));

printf("\n/ perācijas petīšana: -n");
printf("char = ?");
printf("%d / %d = %d (rezultāta izmērs baitos - %ld)\n",cc,c,cc/c,sizeof(cc/c));

return 0;
}

