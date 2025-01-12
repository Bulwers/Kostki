#include "dices.h"


int main()
{

    string status;
    int i;

    for(i=1; i<10; i++)
    {

    cout << "Type 'Start' to roll the dices" << endl;
    cout << "Type 'Esc' to exit" << endl;
    cin >> status;
    if (status=="Start")

    {

    player_roll_dices();
    enemy_roll_dices();

    enemy_dice_result();
    player_dice_reset();
    
    results();
    cout << "Choose number of two dices" << endl << endl;
    
    dice_check(D_1, Player_choice_1);
    player_table_dice(D_1);

    dice_check(D_2, Player_choice_2);
    player_table_dice(D_2);
    
    cout << endl << "   enemy    " << endl;
    cout << E_1 << " " << E_2 << " " << E_3 << " " << E_4 << " x" << " x" << endl;
    cout << D_1 << " " << D_2 << " x" << " x" << " x" << " x" << endl;
    cout << "   player   " << endl << endl;
    results();
    cout << "Choose number of four dices" << endl << endl;

    dice_check(D_3, Player_choice_3);
    player_table_dice(D_3);

    dice_check(D_4, Player_choice_4);
    player_table_dice(D_4);

    dice_check(D_5, Player_choice_5);
    player_table_dice(D_5);

    dice_check(D_6, Player_choice_6);
    player_table_dice(D_6);

    cout << endl << "   enemy    " << endl;
    cout << E_1 << " " << E_2 << " " << E_3 << " " << E_4 << " " << E_5 << " " << E_6 << endl;
    cout << D_1 << " " << D_2 << " " << D_3 << " " << D_4 << " " << D_5 << " " << D_6 << endl;
    cout << "   player   " << endl << endl;

    compare_dices(D_1,E_1);

    compare_dices(D_2,E_2);

    compare_dices(D_3,E_3);

    compare_dices(D_4,E_4);

    compare_dices(D_5,E_5);

    compare_dices(D_6,E_6);

    cout << "Players points: " << playersPoints << endl;
    cout << "Enemys points: " << enemysPoints << endl << endl;

    battle_results();

    }
    else if (status=="Esc")
    {
    return 0;
    }
    }
    return 0;

}