#include <bits/stdc++.h>
#include <ctime>
using namespace std;

int main(){
    string input;
    srand(time(0));
    cout<<"****************\n";
    cout<<"Snakes And Ladder GAME\n";
    cout<<"******************\n";
    cout<<"there are snakes at these points among total 100:\n";
    cout<<"13 , 29 , 56 , 78 , 86 , 94 , 99 \n";
    cout<<"the relative position after snake's bite will be:\n";
    cout<<"3 , 9 , 47 , 34 , 55 , 87 , 51\n";
    cout<<"there are ladders at these points among total 100:\n";
    cout<<"4 , 20 , 38 , 58 , 64 , 82\n";
    cout<<"the relative position after ladder will be:\n";
    cout<<"24 , 26 , 48 , 74 , 80 , 92";
    cout<<".........................\n";
    
    char position;
    do{
        cout<<"type 'roll' for rolling dice\n";
        cout<<"type 'exit' for exit the game\n";
        cout<<"........................\n";
        cin>>input;
        if(input=="roll"){
            char roll;
            roll = rand()%6+1;
            cout<<"your roll is: "<<roll<<endl;
            switch(roll){
                case '1':
                    position++;
                    break;
                case '2':
                    position +=2;
                    break;
                case '3':
                    position +=3;
                    break;
                case '4':
                    position +=4;
                    break;
                case '5':
                    position +=5;
                    break;
                case '6':
                    position +=6;
                    break;
            }
            switch(position){
                case '13':
                    position==3 ;
                    break;
                case '29':
                    position==19 ;
                    break;
                case '56':
                    position==47 ;
                    break;
                case '78':
                    position==34 ;
                    break;
                case '86':
                    position==55 ;
                    break;
                case '94':
                    position==87;
                    break;
                case '99':
                    position==51 ;
                    break;
                case '4':
                    position==24 ;
                    break;
                case '20':
                    position==26;
                    break;
                case '38':
                    position==48 ;
                    break;
                case '58':
                    position==74;
                    break;
                case '64':
                    position==80;
                    break;
                case '82':
                    position==92;
                    break;
                
            }


        }
       cout<<"your position is: "<<position<<endl; 

    }while(input !="exit" || position !='100');
    if(input == "exit"){
        cout<<"Thanks For Playing!!\n";
        cout<<"*******************";
    }
    else if(positon == 100){
        cout<<"Congratulations, you won!\n";
        cout<<"**********************\n";
    }
}