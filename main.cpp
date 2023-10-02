#include <iostream>

using namespace std;
 char matrix[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
   string answer;
    int place;
    char turn;
    int c;

    void display_matrix();
    void player_turn();
int check_the_winner();
int main()
{
  cout<<"welcome in TIC TAC TOE game\n";
 cout<<"[x] for player_1 [o] for player_2\n\n\n";
  while(1){

  turn='x';
  while (check_the_winner()==0){
    display_matrix();
    player_turn();
    c=check_the_winner();

  }
  if (c==1&&turn=='x'){
    cout<<"player_2 wins\n";
    }
   else  if (c==1&&turn=='o'){
    cout<<"player_1 wins\n";
    }
else{
cout<<"game draw\n";}

char counter='1';
for (int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        matrix[i][j]=counter++;


    }


}
cout<<"do you want to play again?\n\n";
cin>>answer;
if (answer=="no")
{cout<<"GOOD BYE!\n";
    break;
}
else if (answer=="yes")
{
    continue;
}

  }
    return 0;
}
 void display_matrix()
    {

system("cls");
    cout<<"     |     |     \n";
    cout<<"  "<<matrix[0][0]<<"  | "<<matrix[0][1]<<"   |  "<<matrix[0][2]<<" \n";
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<"  "<<matrix[1][0]<<"  | "<<matrix[1][1]<<"   |  "<<matrix[1][2]<<" \n";
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<"  "<<matrix[2][0]<<"  | "<<matrix[2][1]<<"   |  "<<matrix[2][2]<<" \n";
    cout<<"     |     |     \n";
    }
    void player_turn(){
    if (turn=='x')
    {
        cout<<" player_1 [x] turn \n";


    }
    else if (turn=='o')
    {
        cout<<" player_2 [o] turn \n";
    }
    cout<<"please enter the place that you want to play in:  ";
    cin>>place;
    switch (place){
case 1:
    if (matrix[0][0]!='x'&&matrix[0][0]!='o'&&turn=='x'){
        matrix[0][0]='x';
        turn='o';
        }
     else if(matrix[0][0]!='x'&&matrix[0][0]!='o'&&turn=='o'){
        matrix[0][0]='o';
        turn='x';}
        break;
case 2:
    if (matrix[0][1]!='x'&&matrix[0][1]!='o'&&turn=='x'){
        matrix[0][1]='x';
        turn='o';}
     else if (matrix[0][1]!='x'&&matrix[0][1]!='o'&&turn=='o')
        {matrix[0][1]='o';
        turn='x';}
        break;
case 3:
     if (matrix[0][2]!='x'&&matrix[0][2]!='o'&&turn=='x')
        {matrix[0][2]='x';
        turn='o';}
     else if (matrix[0][2]!='x'&&matrix[0][2]!='o'&&turn=='o')
        {matrix[0][2]='o';
        turn='x';}
        break;
case 4:
     if (matrix[1][0]!='x'&&matrix[1][0]!='o'&&turn=='x')
        {matrix[1][0]='x';
        turn='o';}
     else if (matrix[1][0]!='x'&&matrix[1][0]!='o'&&turn=='o')
        {matrix[1][0]='o';
        turn='x';}
        break;
case 5:
     if (matrix[1][1]!='x'&&matrix[1][1]!='o'&&turn=='x')
        {matrix[1][1]='x';
        turn='o';}
     else if (matrix[1][1]!='x'&&matrix[1][1]!='o'&&turn=='o')
        {matrix[1][1]='o';
        turn='x';}
        break;
case 6:
     if (matrix[1][2]!='x'&&matrix[1][2]!='o'&&turn=='x')
        {matrix[1][2]='x';
        turn='o';}
     else if (matrix[1][2]!='x'&&matrix[1][2]!='o'&&turn=='o')
        {matrix[1][2]='o';
        turn='x';}
        break;
case 7:
     if (matrix[2][0]!='x'&&matrix[2][0]!='o'&&turn=='x')
        {matrix[2][0]='x';
        turn='o';}
     else if (matrix[2][0]!='x'&&matrix[2][0]!='o'&&turn=='o')
        {matrix[2][0]='o';
        turn='x';
        }break;
case 8:
     if (matrix[2][1]!='x'&&matrix[2][1]!='o'&&turn=='x')
        {matrix[2][1]='x';
        turn='o';}
     else if (matrix[2][1]!='x'&&matrix[2][1]!='o'&&turn=='o')
        {matrix[2][1]='o';
        turn='x';}
        break;
case 9:
     if (matrix[2][2]!='x'&&matrix[2][2]!='o'&&turn=='x')
        {matrix[2][2]='x';
        turn='o';}
     else if (matrix[2][2]!='x'&&matrix[2][2]!='o'&&turn=='o')
        {matrix[2][2]='o';
        turn='x';}
        break;
default:
    cout<<"wrong input please choose another number\n";
    player_turn();
    }

    }
    int check_the_winner(){
    if (matrix[0][1]==matrix[0][0]&&matrix[0][1]==matrix[0][2])
        return 1;
   else if (matrix[1][0]==matrix[1][1]&&matrix[1][0]==matrix[1][2])
        return 1;
    else if (matrix[2][0]==matrix[2][1]&&matrix[2][1]==matrix[2][2])
        return 1;
    else if (matrix[0][0]==matrix[1][1]&&matrix[1][1]==matrix[2][2])
        return 1;
    else if (matrix[0][2]==matrix[1][1]&&matrix[1][1]==matrix[2][0])
        return 1;
    else if (matrix[0][0]==matrix[1][0]&&matrix[1][0]==matrix[2][0])
        return 1;
    else if (matrix[0][1]==matrix[1][1]&&matrix[1][1]==matrix[2][1])
        return 1;
    else if (matrix[0][2]==matrix[1][2]&&matrix[1][2]==matrix[2][2])
        return 1;
    else
        return 0;


    }
