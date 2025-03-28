#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
    cout<<"welcome to rock paper scissors,can't wait to play with you"<<endl;
    cout<<"choose 1.start  2.exit"<<endl;
    int startStop;
    cin>>startStop;
    cout<<"you chose:"<<startStop<<endl;
    do{
    cout<<"----------------------------------------------------------------------------------------------------------"<<endl;

    //user input
    cout<<"enter your choice:rock,paper or scissors"<<endl;
    string userChoice;
    cin>>userChoice;
    if(userChoice!="rock"&&userChoice!="paper"&&userChoice!="scissors"){
        cout<<"please enter a valid choice or check your spelling!"<<endl;
    }
    //computer generation
    srand(time(0));//generates a random number
    int compChoice=rand()%3; //chooses between 0 and 2

     string choices1[]={"rock","paper","scissors"};//string array of choices
    string compChoiceStr=choices1[compChoice];//new string variable is assigned the choice made
    cout<<"i chose:"<<compChoiceStr<<endl;
    cout<<"you entered:"<<userChoice<<endl;

    //comparing input and computer choice

        if(compChoiceStr==userChoice){
        cout<<"sorry its a draw!"<<endl;
        }else if((compChoiceStr=="paper"&&userChoice=="scissors")||(compChoiceStr=="paper"&&userChoice=="rock")||(compChoiceStr=="scissors"&&userChoice=="rock")){//double equal signs for string comparison
        cout<<"congratulations you winnn!!!"<<endl;
        }else{
         cout<<"i win! better luck next time"<<endl;
        }
cout<<"want to leave the game? yes or no?"<<endl;
string leave;
cin>>leave;
if(leave=="yes"){
    break;
}else{
continue;
}

    cout<<"-----------------------------------------------------------------------------------------------------------"<<endl;
    }while(startStop!=2);
    return 0;
}
