#include<stdio.h>

#define COUNTRY India

#if COUNTRY == 'pakistan'
void main()
 {

    printf("pakistani rupees");
 }


#elif COUNTRY == 'Bangladesh'

void main(){
    printf("taka");
}

#elif COUNTRY == 'Nepal'

void main(){
    printf("Nepali Rupees");
}

#else
void main(){
    printf("Indian Rupees");
}

#endif // COUNTRY

