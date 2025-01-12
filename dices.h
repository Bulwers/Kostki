#include <iostream>
#include <string>
#include <random>
using namespace std;

random_device rd;
uniform_int_distribution<int> dist(1,6);

int D1;
int D2;
int D3;
int D4;
int D5;
int D6;

int E1;
int E2;
int E3;
int E4;
int E5;
int E6;

int D_1;
int D_2;
int D_3;
int D_4;
int D_5;
int D_6;

int Player_choice_1;
int Player_choice_2;
int Player_choice_3;
int Player_choice_4;
int Player_choice_5;
int Player_choice_6;

int E_1;
int E_2;
int E_3;
int E_4;
int E_5;
int E_6;

int playersPoints = 0;
int enemysPoints = 0;
int ties = 0;


void player_roll_dices()
{
    D1 = dist(rd);
    D2 = dist(rd);
    D3 = dist(rd);
    D4 = dist(rd);
    D5 = dist(rd);
    D6 = dist(rd);
}

void enemy_roll_dices()
{
    E1 = dist(rd);
    E2 = dist(rd);
    E3 = dist(rd);
    E4 = dist(rd);
    E5 = dist(rd);
    E6 = dist(rd);
}

void enemy_dice_result()
{
    E_1 = E1;
    E_2 = E2;
    E_3 = E3;
    E_4 = E4;
    E_5 = E5;
    E_6 = E6;
}

void player_dice_reset()
{
    D_1 = 0;
    D_2 = 0;
    D_3 = 0;
    D_4 = 0;
    D_5 = 0;
    D_6 = 0;

    Player_choice_1 = 0;
    Player_choice_2 = 0;
    Player_choice_3 = 0;
    Player_choice_4 = 0;
    Player_choice_5 = 0;
    Player_choice_6 = 0;
}

void results()
{
    cout << "Your results are: " << D1 << " " << D2 << " " << D3 << " " << D4 << " " << D5 << " " << D6 << endl << endl;
}

void dice_check(int& player_dice, int& player_choice)
{
    int dice;
    do 
    {
        cout << "Choose a dice: ";
        if (cin >> dice);
        {
            if ((dice==1) || (dice==2) || (dice==3) || (dice==4) || (dice==5) || (dice==6))
            {
                if (dice==Player_choice_1 || dice==Player_choice_2 || dice==Player_choice_3 || dice==Player_choice_4 || dice==Player_choice_5 || dice==Player_choice_6)
                {
                    cout << endl << "This dice has been used (" << dice << "), choose another" << endl;
                    results();
                }
                else
                {
                    break;
                }   
            } 
            else 
            {
                cout << endl << "There is no such dice (" << dice << "), choose another" << endl; 
                results();
            }
        }    
        
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    while (true); 
    player_dice = dice;
    player_choice = dice;
}

void player_table_dice(int& player_dice)
{
    switch(player_dice)
    {
    case 1:
        player_dice = D1;
        break;
    case 2:
        player_dice = D2;
        break;
    case 3: 
        player_dice = D3;
        break;
    case 4:
        player_dice = D4;
        break;
    case 5:
        player_dice = D5;
        break;
    case 6:
        player_dice = D6;
        break;
    }
}

void compare_dices(int player_dice, int enemy_dice)
{
    if(enemy_dice-player_dice==1||player_dice-enemy_dice==1)
    {
        ties++;
    }
    else if(enemy_dice>player_dice)
    {
        enemysPoints++;
    }
    else if(player_dice>enemy_dice)
    {
        playersPoints++;
    }
}

void battle_results()
{
    if(playersPoints>enemysPoints)
    {
        cout << "You won!" << endl << endl;
    }
    else if(enemysPoints>playersPoints)
    {
        cout << "You lose!" << endl << endl;
    }
    else if(enemysPoints=playersPoints)
    {
        cout << "Tie!" << endl << endl;
    }
}