// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
//     int playgame(int minnumber,int maxnumber,int guesstimes){
//         int Guessnumber;
//         int count =0;
//         int score,score1,score2,tscore;
//     printf("Guessing the number between (%d-%d):",minnumber,maxnumber);
//     srand(time(0));
//      int number=rand()%maxnumber+1;
//     //printf("%d\n",number);
//     do{
//            scanf("%d",&Guessnumber);
//         if(Guessnumber<number){
//             printf("Not matching and low! Please Try Again!\n");
//              if (number-Guessnumber<=5){
//                 printf("Your are very close to win !Please Try Again:\n");}
//                  score=maxnumber-(Guessnumber-number);
//             }
//         else if(Guessnumber>number){
//         printf(" Not matching and Too high! Please Try Again!\n");
//          if (Guessnumber-number<=5){
//                 printf("Your are very close to win !Please Try Again:\n");}
//                 score1=maxnumber-(Guessnumber-number);
//             }
//     else{
//         printf("Correct Gussing Number !Congratutation\n");
//          score2=maxnumber*10;
//          printf(" your score is %d",maxnumber*10);
//          return 0;
//     }
//     count++;
//     int tscore=score1+score2+score;
//     printf("number of atten:%d\n",count);
// }
//   while(count<guesstimes);
//   printf("\n");
//   printf("level failed\n");
//   printf("The correct number is %d\n",number);
//   printf("Totle number of atten:%d\n",count);
//   printf("Total number of your score is %d",tscore);
// }
 
// int main(){
//     int number;
//     int minnumber,maxnumber,Gusstime;
//     printf("enter 1 for easy level:\n");
//     printf("enter 2 for medium level:\n");
//     printf("enter 3 for hard level:\n");
//     scanf("%d",&number);
//     switch(number){
//      case 1:
//      printf("you can guess number 10 times:\n");
//      playgame(1,9,10);
//      break;
//      case 2:
//      printf("you can guess number 15 times:\n");
//      playgame(10,99,15);
//      break;
//      case 3:
//      printf("you can guess number 20 times:\n");
//      playgame(100,999,20);
//      break;
//      default :"invlaid number";
//     }
//   return 0;
// }        