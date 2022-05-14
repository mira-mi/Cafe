#include <cstdio>
#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
    double donut, bagel, sandwich, croissant, breakfastpizza, cupcakes, macarons, espresso, latte, water, smoothie, icedcoffee, coffee, cappachino, macchiato, total, tax;
    char answerType = 0;
    bagel = 1.50;
    sandwich = 4.50;
    croissant = 2.00;
    cupcakes = 2.99;
    macarons = 1.50;
    espresso = 3.50;
    latte = 3.00;
    water = 0.99;
    smoothie = 2.80;
    icedcoffee = 5.00;
    coffee = 5.25;
    cappachino = 5.50;
    macchiato = 4.99;
    total = 0.00;
    tax = 1.25;

    cout << "Welcome to Fancy Cafe by Maya H!";
    cout << "Just a quick reminder, you should answer yes or no to each question asked.";
    cout << "We have bagels for $1.50,";
    cout << "Sandwiches for $4.50, Croissants for $2.00,  Cupcakes for $2.99, Macarons for $1.50.";
    cout << "Espresso for $3.50, Lattes for $3.00, Water for $0.99, Smoothie for $2.80, Iced Coffee for $5.00, Coffee for $5.25";
    cout << "Cappachinos for $5.50, and Macchiatos for $4.99";

    //Now we begin the asking portion

    cout << "We have 7 bagels.";
    cout << "Would you like to buy a bagel for $" << bagel << ":";
    cin >> answerType;

    if (answerType == 'yes')
    {

        int amount;
        cout << "How many did you want? Please enter an integer between 1 - 7: ";
        cin >> amount;
        cout << "You entered:  ";
        cout << "Your current total is $" << amount * bagel + total << ".";

    }
    else if (answerType == 'no')
    {
        cout << "Your total is $" << total << ".";
    }
   // else if (answerType == 'eh')
  //  {
      //  cout << "That is not valid, please answer yes or no next time.";
      //  cout << "Your total is $" << total << ".";

   // }
   //decided to cut the
// item 2 is now added
    cout << "We have 5 sandwiches.";
    cout << "Would you like to buy a sandwich for $" << sandwich << ":";
    cin >> answerType;

    if (answerType == 'yes')
    {
        int amount;
        cout << "How many did you want? Please enter an integer between 1 - 5: ";
        cin >> amount;
        cout << "You entered:  ";
        cout << "Your current total is $" << amount * sandwich + total << ".";
    }
    else if (answerType == 'no')
    {
        cout << "Your total is $" << total << ".";
    }
   //it gone
    // item 3
    cout << "We have 4 croissant.";
    cout << "Would you like to buy a croissant for $" << croissant << ":";
    cin >> answerType;

    if (answerType == 'yes')
    {
        int amount;
        cout << "How many did you want? Please enter an integer between 1 - 4: ";
        cin >> amount;
        cout << "You entered:  ";
        cout << "Your current total is $" << amount * croissant + total << ".";
    }
    else if (answerType == 'no')
    {
        cout << "Your total is $" << total << ".";
    }
    //jhhj
    //item 4
    cout << "We have 20 cupcakes.";
    cout << "Would you like to buy a cupcake for $" << cupcakes << ":";
    cin >> answerType;

    if (answerType == 'yes')
    {
        int amount;
        cout << "How many did you want? Please enter an integer between 1 - 20: ";
        cin >> amount;
        cout << "You entered:  ";
        cout << "Your current total is $" << amount * cupcakes + total << ".";

    }
    else if (answerType == 'no')
    {
        cout << "Your total is $" << total << ".";
    }
    else if (answerType == 'eh')
    //s,
    //item 5
    cout << "We have 16 macarons.";
    cout << "Would you like to buy a macarons for $" << macarons << ":";
    cin >> answerType;

    if (answerType == 'yes')
    {
        int amount;
        cout << "How many did you want? Please enter an integer between 1 - 16: ";
        cin >> amount;
        cout << "You entered:  ";
        cout << "Your current total is $" << amount * macarons + total << ".";

    }
    else if (answerType == 'no')
    {
        cout << "Your total is $" << total << ".";
    }
   //djs
    // item 6
    cout << "We have 5 espressos.";
    cout << "Would you like to buy a espresso for $" << espresso << ":";
    cin >> answerType;

    if (answerType == 'yes')
    {
        int amount;
        cout << "How many did you want? Please enter an integer between 1 - 5: ";
        cin >> amount;
        cout << "You entered:  ";
        cout << "Your current total is $" << amount * espresso + total << ".";

    }
    else if (answerType == 'no')
    {
        cout << "Your total is $" << total << ".";
    }
    else if (answerType == 'maybe')
    //
    //item 7
    cout << "We have 4 lattes.";
    cout << "Would you like to buy a latte for $" << latte << ":";
    cin >> answerType;

    if (answerType == 'yes')
    {
        int amount;
        cout << "How many did you want? Please enter an integer between 1 - 4: ";
        cin >> amount;
        cout << "You entered:  ";
        cout << "Your current total is $" << amount * latte + total << ".";

    }
    else if (answerType == 'no')
    {
        cout << "Your total is $" << total << ".";
    }
    //
    //item 8
    cout << "We have 8 waters.";
    cout << "Would you like to buy a water for $" << water << ":";
    cin >> answerType;

    if (answerType == 'yes')
    {
        int amount;
        cout << "How many did you want? Please enter an integer between 1 - 8: ";
        cin >> amount;
        cout << "You entered:  ";
        cout << "Your current total is $" << amount * water + total << ".";

    }
    else if (answerType == 'no')
    {
        cout << "Your total is $" << total << ".";
    }
   //
    //item 9
    cout << "We only have 3 smoothies left.";
    cout << "Would you like to buy a smoothie for $" << smoothie << ":";
    cin >> answerType;

    if (answerType == 'yes')
    {
        int amount;
        cout << "How many did you want? Please enter an integer between 1 - 3: ";
        cin >> amount;
        cout << "You entered:  ";
        cout << "Your current total is $" << amount * smoothie + total << ".";

    }
    else if (answerType == 'no')
    {
        cout << "Your total is $" << total << ".";
    }
   //
    //item 10
    cout << "We have only 2 iced coffees left.";
    cout << "Would you like to buy an iced coffee for $" << icedcoffee << ":";
    cin >> answerType;

    if (answerType == 'yes')
    {
        int amount;
        cout << "How many did you want? Please enter an integer between 1 - 2: ";
        cin >> amount;
        cout << "You entered:  ";
        cout << "Your current total is $" << amount * icedcoffee + total << ".";

    }
    else if (answerType == 'no')
    {
        cout << "Your total is $" << total << ".";
    }
    //
    //item 11
    cout << "We have 12 coffes.";
    cout << "Would you like to buy a coffee for $" << coffee << ":";
    cin >> answerType;

    if (answerType == 'yes')
    {
        int amount;
        cout << "How many did you want? Please enter an integer between 1 - 12: ";
        cin >> amount;
        cout << "You entered:  ";
        cout << "Your current total is $" << amount * coffee + total << ".";

    }
    else if (answerType == 'no')
    {
        cout << "Your total is $" << total << ".";
    }
    //had to get rid of maybe it was causing problems
    //item 12 
    cout << "We have 8 cappachinos.";
    cout << "Would you like to buy a cappachino for $" << cappachino << ":";
    cin >> answerType;

    if (answerType == 'yes')
    {
        int amount;
        cout << "How many did you want? Please enter an integer between 1 - 8: ";
        cin >> amount;
        cout << "You entered:  ";
        cout << "Your current total is $" << amount * cappachino + total << ".";

    }
    else if (answerType == 'no')
    {
        cout << "Your total is $" << total << ".";
    }
    //this version debugs
    //item 13
    cout << "We only have 1 macchiato left.";
    cout << "Would you like to buy a macchiato for $" << macchiato << ":";
    cin >> answerType;

    if (answerType == 'yes')
    {
        cout << "A macchiato has been added to to your bag. Your total is $" << total + macchiato + cappachino + coffee + icedcoffee + smoothie + water + espresso + latte + macarons + cupcakes + croissant + bagel + sandwich + tax << ".";
        int money;
        cout << "Input an amount of money for what you owe: ";
        cin >> money;
        cout << "Here's your change $" << money - total << ".";


    }
    else if (answerType == 'no')
    {
        cout << "Your total is $" << total << ".";
        cout << "Your total is $" << total + cappachino + coffee + icedcoffee + smoothie + water + espresso + latte + macarons + cupcakes + croissant + bagel + sandwich + tax << ".";
        int money;
        cout << "Input an amount of money for what you owe: ";
        cin >> money;
        cout << "Here's your change $" << money - total << ".";

    }
   //

    cout << "Thank you for your time and I hope you enjoyed visting the Fancy Cafe!";
    while (1);
    return 0;


}