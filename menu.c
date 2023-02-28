#include <stdio.h>
#include "safeinput.h"

int getMenuSelection(){
    while(1){
        printf("Admin menu\n");
        printf("1. Remote open door\n");
        printf("2. List all cards in system\n");
        printf("3. Add remove access\n");
        printf("4. Exit\n");
        printf("9. FAKE TEST SCAN CARD\n");
        // TODO input
        int sel ;
        if(GetInputInt("Ange val:", &sel)) return sel;
    }
        


    return 4;
}
