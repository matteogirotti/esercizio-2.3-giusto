#include <iostream>

int main() {
    int ora1,ora2,min1,min2,sec1,sec2,diff;
    printf("calcola la differenza in secondi tra due orari :\ninserire l'ora del primo orario : ");
    scanf("%d",&ora1);
    printf("inserire i minuti del primo orario : ");
    scanf("%d",&min1);
    printf("inserire i secondi del primo orario : ");
    scanf("%d",&sec1);
    printf("inserire l'ora del secondo orario : ");
    scanf("%d",&ora2);
    printf("inserire i minuti del secondo orario : ");
    scanf("%d",&min2);
    printf("inserire i secondi del secondo orario : ");
    scanf("%d",&sec2);
    sec1 +=ora1*3600 + min1*60;
    sec2 +=ora2*3600 + min2*60;
    if(sec1>=sec2)
        diff = sec1-sec2;
    else
        diff = sec2-sec1;
    printf("differenza : %d secondi\n",diff); std::cout << "Hello, World!" << std::endl;
    return 0;
}
