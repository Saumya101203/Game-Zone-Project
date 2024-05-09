#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// Some global arrays to be used later
    char arr[]={'0','1','2','3','4','5','6','7','8','9'};
    char parr[]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
    int arr2[101]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20
      ,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40
      ,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60
      ,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80
      ,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100};


// Function to printbox to be used in tic_tac_toe
void Printbox(){

    system("clear");
    printf("\nWelcome to TIC-TAC-TOE\n\nThe Rules of the game is as Follows:\n\n\n1.Players take turns putting their marks in empty squares.\n\n2.The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner.\n\n3.When all 9 squares are full, the game is over.\n\n4.If no player has 3 marks in a row, the game ends in a tie.\n\n5.DO not Cheat\n\n");
    
    printf("\n\n");
    printf("                        ▶️▶️===❇️==== TIC TAC TOE ===❇️===◀️◀️\n \n\n");
    printf("                                __________________ \n");
    printf("                               |     |     |     |\n");
    printf("                               |  %c  |  %c  |  %c  |\n",parr[1],parr[2],parr[3]);
    printf("                               |____1️⃣|____2️⃣|____3️⃣|\n");
    printf("                               |     |     |     |\n");
    printf("                               |  %c  |  %c  |  %c  | \n",parr[4],parr[5],parr[6]);
    printf("                               |____4️⃣|____5️⃣|____6️⃣|\n");
    printf("                               |     |     |     |\n");
    printf("                               |  %c  |  %c  |  %c  |\n",parr[7],parr[8],parr[9]);
    printf("                               |____7️⃣|____8️⃣|____9️⃣|\n");
    printf("\n\n");
}
// Function to Check winning condition for tic_tac_toe
int ifwin(){

    if(arr[1]==arr[2] && arr[2]==arr[3]){
        return 1;
    }
    if(arr[1]==arr[4] && arr[4]==arr[7]){
        return 1;
    }
    if(arr[7]==arr[8] && arr[8]==arr[9]){
        return 1;
    }
    if(arr[3]==arr[6] && arr[6]==arr[9]){
        return 1;
    }
    if(arr[1]==arr[5] && arr[5]==arr[9]){
        return 1;
    }
    if(arr[3]==arr[5] && arr[5]==arr[7]){
        return 1;
    }
    if(arr[2]==arr[5] && arr[5]==arr[8]){
        return 1;
    }
    if(arr[4]==arr[5] && arr[5]==arr[6]){
        return 1;
    }

    int count=0;
    for (int i = 1; i <=9; i++)
    {
        if(arr[i]=='X' || arr[i]=='O'){
            count++;
        }
    }
    
    if(count==9){
        return 0;
    }
    return -1;
}
// Code for tic_tac_toe
int tic_tac_toe(){
   
    int player=1,input,status=-1;
    Printbox();
    while (status==-1){
        player=(player%2==0) ? 2 : 1;
        char mark=(player==1) ? 'X' :'O';
        x:
        printf("                       Please enter Number For Player %d : ",player);
        scanf("%d",&input);
        if((input)>=1 && (input)<=9){
            }
        else{
            printf("                       Invalid Input \n");
            goto x;
            }
        if(arr[input]=='X'|| arr[input]=='O'){
        printf("                       Block %d is already filled.\n",input);
        goto x;
            }
        else{
            arr[input]=mark;
            parr[input]=mark;
            Printbox();
        }
    

    int result=ifwin();

    if(result==1){
        printf("                          Player %d is the Winner\n",player);
        status=1;
        
    }else if(result==0){
        printf("                                 !!Draw!!\n");
        status=1;
      
    }

    player++;
        }
    for(int i=0;i<10;i++){
        parr[i]=' ';
        arr[i]=i;
        }
    return 1;
    
}
// function to print grid for Snake and ladder
void PrintGrid(){
    printf("\nWelcome to Snake and Ladders\n\nThe Rules of the game is as Follows:\n\n\n1.Player should get 1 to move ahead of first square.\n\n2.If a beginning of Ladder 🟢 is encountered , it leads up on the player on the board\n\n5.3. If a snake 🔻 is encountered , it leads player down on the board.\n\n4.DO not Cheat\n\n");

    printf("\n\n");
    printf("                                           ======= Snake and Ladders ======\n \n\n");
    printf("                                ___________________________________________________________ \n");
    printf("                               | %d | %d🔻| %d🟢| %d  | %d  |  %d |  %d |  %d |  %d |  %d |\n",arr2[100],arr2[99],arr2[98],arr2[97],arr2[96],arr2[95],arr2[94],arr2[93],arr2[92],arr2[91]);
    printf("                               |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
    printf("                               | %d  | %d🔻| %d  |🟢 %d|  %d |  %d |  %d |  %d | %d🟢|  %d |\n",arr2[81],arr2[82],arr2[83],arr2[84],arr2[85],arr2[86],arr2[87],arr2[88],arr2[89],arr2[90]);
    printf("                               |_____|_____|🔻___|_____|_____|_____|_____|_____|_____|_____|\n");
    printf("                               | %d  |  %d | %d🔻| %d🟢|  %d | %d  | %d🔻|  %d |%d 🟢|  %d |\n",arr2[80],arr2[79],arr2[78],arr2[77],arr2[76],arr2[75],arr2[74],arr2[73],arr2[72],arr2[71]);
    printf("                               |_____|_____|_____|_____|🟢___|_____|_____|_____|_____|_____|\n");
    printf("                               |  %d |  %d |  %d | %d🔻| %d🟢|  %d |  %d |🔻%d | %d🟢|  %d |\n",arr2[61],arr2[62],arr2[63],arr2[64],arr2[65],arr2[66],arr2[67],arr2[68],arr2[69],arr2[70]);
    printf("                               |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
    printf("                               |  %d |  %d |  %d | %d🔻|  %d |🟢%d |  %d | %d🔻| %d🟢|  %d |\n",arr2[60],arr2[59],arr2[58],arr2[57],arr2[56],arr2[55],arr2[54],arr2[53],arr2[52],arr2[51]);
    printf("                               |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
    printf("                               |  %d |  %d |  %d |  %d |  %d |  %d |  %d | %d🔻| %d🟢|  %d |\n",arr2[41],arr2[42],arr2[43],arr2[44],arr2[45],arr2[46],arr2[47],arr2[48],arr2[49],arr2[50]);
    printf("                               |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n"); 
    printf("                               |  %d |%d 🟢|  %d |  %d |  %d | %d🔻|  %d |  %d |  %d |  %d |\n",arr2[40],arr2[39],arr2[38],arr2[37],arr2[36],arr2[35],arr2[34],arr2[33],arr2[32],arr2[31]);
    printf("                               |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
    printf("                               |  %d |%d 🟢|  %d |  %d |  %d | %d🔻|  %d | %d🟢|  %d |  %d |\n",arr2[21],arr2[22],arr2[23],arr2[24],arr2[25],arr2[26],arr2[27],arr2[28],arr2[29],arr2[30]);
    printf("                               |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
    printf("                               |  %d |%d 🟢|  %d |  %d |  %d |  %d | %d🔻| %d🟢|  %d |  %d |\n",arr2[20],arr2[19],arr2[18],arr2[17],arr2[16],arr2[15],arr2[14],arr2[13],arr2[12],arr2[11]);
    printf("                               |_____|_____|_____|_____|_____|_____|_____|_____|🟢___|_____|\n");
    printf("                               |  %d  |%d  🟢|  %d  |  %d  |  %d  |  %d  |   %d |  %d  | %d 🟢|  %d |\n",arr2[1],arr2[2],arr2[3],arr2[4],arr2[5],arr2[6],arr2[7],arr2[8],arr2[9],arr2[10]);
    printf("                               |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
    printf("\n\n");
}
//function to check snake and ladder hitting condition for snake and ladder game
int check(int n){
    //for ladders
    if (n==2)
        return 39;
    else if(n==9)
        return 28;
    else if(n==51)
        return 89;
    else if(n==55)
        return 98;
    //for snake
    else if(n==99)
        return 57;
    else if(n==35)
        return 14;
    else if(n==74)
        return 43;

        return n;
}
// code for snake laddder game
int snake_ladder(){
    srand(time(0));
   
    PrintGrid();
    int n;
    int c;
    printf("To roll the dice , press 1\n");
    scanf("%d",&c);
    n=rand()%6+1;
    while(n != 1){
        
         printf("You got %d \n",n);
         
         printf("Roll the dice again \n Get 1 to leave 1st square\n");
         scanf("%d",&c);
          n=rand()%6+1;
         if(n==1){
         break;
         }
    }
     printf("You got %d \n",n);
    int curr_val=1;
    while(curr_val != 100){
        printf("\nEnter 1 to roll the dice\n");
        scanf("%d",&c);
        int r=rand()%6+1;
        PrintGrid();
        if(curr_val+r >100 ){
            printf("Your present value: %d \n",curr_val);
            printf("You got %d\n ",r);
            printf("Roll again\n");
        continue;
        }
        curr_val+=r;

        if(curr_val == 100){
            printf("You got %d\n ",r);
            printf("YOU WON!!!!\n");
            break;
        }
        
        printf("You got %d\n ",r);
     
        curr_val=check(curr_val);
        printf("Your current Position = %d\n",curr_val);
    }

 return 1;
}
// code for hand cricket game
int hand_cricket(){
    //rules
   
    int user_num,score=0;
    start: printf("Enter your number between 1 to 6:\n\n");
    scanf("%d",&user_num);
    if(user_num>=1 && user_num<=6){
        srand(time(0));
        int initial_number=rand()%6+1;
        printf("Number entered by computer is:%d \n\n",initial_number);
    while(user_num!=initial_number){
       
        score+=user_num;
        printf("Your current score is:%d\n\n",score);
        goto start;
    }
    printf("Game over\n");
    printf("Your final score is:%d\n\n",score);
    }
    
    else{
        printf("Please Enter a valid number.\n\n");
        goto start;
    }
    return 1;
}
//Main driving function
int main(){
    again: printf("Welcome to GAME ZONE\n\n");
    printf("Enter 1 for TIC-TAC-TOE[2-P] \n\n");
    printf("Enter 2 for Snake And Ladders[1-P]\n\n");
    printf("Enter 3 for Hand Cricket[1-P]\n\n");
    printf("Enter 0 to exit.\n\n\n");
    printf("Select the game you want to play\n");
    int t;
    scanf("%d",&t);

    switch(t){
        case 1: //TIC-TAC-TOE

                
                
               //code of game
                tic_tac_toe();
                int alpha;
                printf("Enter 1 to continue or any other digit to exit the game zone.\n");
                scanf("%d",&alpha);
                if(alpha==1){
                    goto again;
                }
                else{
                    printf("\t \t \t Thank you for visiting our game zone,Hope you enjoyed.\n");
                    printf("\t \t \t We look forward to your visit again.\n");
                    
               
                    return 0;
                }
                break;

        case 2: //Snake And Ladders

                
               
                //code of game
                snake_ladder();
                int alphaa;
                printf("Enter 1 to continue or any other digit to exit the game zone.\n");
                scanf("%d",&alphaa);
                if(alphaa==1){
                    goto again;
                }
                else{
                    printf("\t \t \t Thank you for visiting our game zone,Hope you enjoyed.\n");
                    printf("\t \t \t We look forward to your visit again.\n");
                    
               
                    return 0;
                }
                break;

        case 3: //Hand cricket

                
                 printf("Rules of hand cricket are as follows:\n\n1.You enter a number between 1 and 6\n\n2.Computer will also play a number.\n\n3.If computer guesses the number you put,you lose ; otherwise your score gets added with your number.\n\n4.Can you cheat?\n\n");

                //code of game
                hand_cricket();
                int alphaaa;
                printf("Enter 1 to continue or any other digit to exit the game zone.\n");
                scanf("%d",&alphaaa);
                if(alphaaa==1){
                    goto again;
                }
                else{
                    printf("\t \t \t Thank you for visiting our game zone,Hope you enjoyed.\n");
                    printf("\t \t \t We look forward to your visit again.\n");
                    
               
                    return 0;
                }
                break;

          case 0:
                 printf("\t \t \t Thank you for visiting our game zone,Hope you enjoyed.\n");
                 printf("\t \t \t We look forward to your visit again.\n");
                    break;
        default: printf("Please enter a valid number\n\n\n");
        goto again;
    }
    

}