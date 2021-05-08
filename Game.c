#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int rockPaperScissors(char player, char computer){
    //returns 1 if you win, -1 if you lose and 0 if you draw
    //Condition for draw
    //Cases covered: rr pp ss
    //Non-draw conditions
    //Cases covered: rp pr rs sr ps sp
    if(player=='R' && computer=='P'){
        return -1;
    }
    else if(player=='P' && computer=='R'){
        return 1;
    }
    if(player=='R' && computer=='S'){
        return 1;
    }
    else if(player=='S' && computer=='R'){
        return -1;
    }
    if(player=='P' && computer=='S'){
        return -1;
    }
    else if(player=='S' && computer=='P'){
        return 1;
    }
    return 0;
}
int main(){
char player, computer;
int player_score = 0, computer_score=0,n,i;
char space;
printf("\n            ROCKKKKK, PAPERRRR AND SCISSORSSS\n\n\n");
printf("\n\nFor how many points you want to challenge me in this game?\n");
printf("                 HIHIHUHA!!!!\n\n");
scanf("%d",&n);
srand(time(0));

for(i=0;i<n;i++){
printf("Enter 'R' for rock, 'P' for paper and 'S' for scissors:\n");
scanf("%c",&space);
scanf("%c",&player);

int comp_input = rand()%100+1;
if(comp_input<33){
    computer = 'R';
}
else if(comp_input>33 && comp_input<66){
    computer = 'P';
}
else{
    computer = 'S';
}
printf("\n I choose %c\n",computer);
if(rockPaperScissors(player,computer)== -1){
    computer_score++;
    printf("\n I got it!!\n");
}
else if(rockPaperScissors(player,computer)==0){
    computer_score++;
    player_score++;
    printf("\n Oh ho!! It's a draw. We both got 1 point.\n");
}
else{
    player_score++;
    printf("\n You win!!!\n");
}
}
printf("\n\n\n----------RESULTS----------\n\n\n");
printf("\n     Computer's Score: %d\n\n",computer_score);
printf("\n     Player's Score: %d\n\n",player_score);
if(player_score>computer_score){
    printf("\n Congrats!!!! You win the game\n\n");
}
else if(player_score<computer_score){
    printf("\n Sorry!! Better luck next time.Today I win the game\n\n");
}
else{
    printf("\n Bro!!! It's a draw game.\n\n");
}
return 0;
}
