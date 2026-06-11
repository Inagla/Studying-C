#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// int main() {
    
    // my first c

        /* printf("Hello, World!\n")*/

//     printf("aku gani\n");
//     printf("aku akan masuk ui");
//     // printf("Hello, World!\n")
//     return 0;
// }

// int main() {

//     int birthdate = 9;
//     int birthmonth = 5;
//     int tahun = 1998;

//     printf("saya lahir %d mei\n", birthdate);
//     printf("saya lahir pada bulan %d haha\n", birthmonth);
//     printf("tahun %d", tahun);

//     return 0;
// }

// int main() {
//     float panjang = 8.5123456789;
//     float lebar = 27.5;

//     printf("panjang rumahnya adalah %f meter\n", panjang);
//     printf("lebar rummahnya adalah %f meter\n", lebar);
//     return 0;
// } 

// int main() {
//     double ip = 3.987654321;
//     double ip2 = 3.87654321;

//     double ipk[] = {3.1321321321, 2.434243423, 4.999999999};

//     printf("ip 1 saya adalah %.7lf\n", ip);
//     printf("ip 2 saya adalah %.7lf\n", ip2);
//     printf("ipk saya adalah %.7lf\n", ipk[0]);
//     printf("ipk saya adalah %.7lf\n", ipk[1]);
//     printf("ipk saya adalah %.7lf\n", ipk[2]);

//     return 0;
// }

// int main() {
//     char nama[] = "sigma boy";
//     char anime[] = "eva";

//     printf("nama saya adalah %s mewing\n", nama);
//     printf("goat of anime is %s\n", anime);

//     return 0;
// }

// int main() {
//     bool isOnline = 0;
//     bool isStudying = 0;

//     if (isOnline) {
//         printf("hes playing\n");
//     }
    
//     else if (isStudying) {
//         printf("hes studying\n");
//     } 

//     else {
//         printf("hes sleeping\n");
//     }

//     return 0;

// }

// int main() {
//     char nama[] = "Alghani";
//     char currency = 'R';
//     int age = 18;
//     float ip = 3.9549;
//     double ipk = 3.912345678;

//     printf("%s\n", nama);
//     printf("%c\n", currency);
//     printf("%d\n", age);
//     printf("%.2f\n", ip);
//     printf("%.2lf\n", ipk);

//     return 0;
// }

// int main () {
//     int x = 10;
//     int y = 5;
    
    // int z = x + y;
    // int z = x - y;
    // int z = x * y;
    // int z = x / y;

    // x = x + 1;
    // x+=1;  

    // x = x - 3;
    // x-=3;  

    // x*=2;
    // x/=2;

//     printf("%d", x);

//     return 0;
// }

// int main() {
//     char name [30] = "";
//     int age = 0;
//     float gpa = 0.0f;
//     char grade = '\0';

//     // getchar();
//     printf("enter your name! ");
//     fgets(name, sizeof(name), stdin);
//     name[strlen(name) -1] = '\0';
    
//     printf("enter your age! ");
//     scanf(" %d", &age);

//     printf("enter your gpa! ");
//     scanf(" %f", &gpa);

//     printf("enter your grade! ");
//     scanf(" %c", &grade);

//     printf ("%s\n", name);
//     printf ("%d\n", age);
//     printf ("%.2f\n", gpa);
//     printf ("%c\n", grade);

// }


/*SHOPPING CART PROGRAM*/

// int main() {

//     char product [50] = "";
//     char currency = '$';
//     int quantity = 0;
//     float price = 0.0f;
//     float total = 0.0f;

//     printf("what u wanna buy? ");
//     fgets(product, sizeof(product), stdin);
//     product[strlen(product) -1] = '\0';

//     printf("What is the price for each? ");
//     scanf("%f", &price);

//     printf("How many u wanna buy? ");
//     scanf("%d", &quantity);

//     total = price * quantity;

//     printf("\nyou bought %d %s/s\n", quantity,product);
//     printf("the total is %c%.2f", currency,total);

//     return 0;
// }


/*MAD LIBS GAME*/

int main() {

    char noun [50] = "";
    char verb [50] = "";
    char adjective1 [50] = "";
    char adjective2 [50] = "";
    char adjective3 [50] = "";
    
    printf("what is your adjective? ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) -1] = '\0';

    printf("what is your noun? ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) -1] = '\0';

    printf("what is your adjective? ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) -1] = '\0';

    printf("what is your verb? ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) -1] = '\0';

    printf("what is your adjective? ");
    fgets (adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) -1] = '\0';

    printf("\ni have a/n %s \nfriend his name is %s \nhe is really %s. \nEveryday he always %s, \nbut he is %s", adjective2, noun, adjective1, verb, adjective3);
}