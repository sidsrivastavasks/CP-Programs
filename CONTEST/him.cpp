#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    int a=t*2;
   while(t--)
    {
        int ch;
        printf("loop\n");
        scanf("%d",&ch);
        switch(ch){
        	
            case 1: printf("BattleShip\n");
                    break;
            case 2: printf("BattleShip\n");
                    break;
            case 3: printf("Cruiser\n");
                    break;
            case 4: printf("Cruiser\n");
                    break;
            case 5: printf("Destroyer\n");
                    break;
            case 6: printf("Destroyer\n");
                    break;
            case 7: printf("Frigate\n");
                    break;
            case 8: printf("Frigate\n");
                    break;
            default: printf("Invalid\n");
        }
        printf("%d\n",t);
       // t--;
    }

	return 0;
}
