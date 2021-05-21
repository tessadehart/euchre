#include <string>
#include <iostream>
#include <array>
#include <algorithm>
#include <random>

//enums
enum Suit
{
    Spade,
    Heart,
    Club,
    Diamond
};
enum Num
{
    A,
    K,
    Q,
    J,
    T,
    N
}; //T for 10, N for 9

class Card
{
public:
    //properties
    Suit suit;
    std::string num;
    int value;

    //constructors
    Card()
    {
        suit = Spade;
        num = A;
    }

    Card(Suit s, Num n)
    {
        suit = s;
        num = n;
    }
};

class Player
{
public:
    //properties
    std::string name;
    Card hand[5];
    int order;

    //constructors
    Player()
    {
        name = "Player 1";
        order = 1;
    }

    Player(std::string n, int o)
    {
        name = n;
        order = o;
    }

    //functions
};

int main()
{
    //make a deck
    Card deck[24];
    //creat cards to fill the deck
    int x = 0; //keeps place in deck
    for (int s = 0; s < 4; s++)
    {
        for (int n = 0; n < 6; n++)
        {
            deck[x] = Card(static_cast<Suit>(s), static_cast<Num>(n));
            x++;
        }
    }

    //create players
    Player p1 = Player("p1", 1);
    Player p2 = Player("p2", 2);
    Player p3 = Player("p3", 3);
    Player p4 = Player("p4", 4);

    //deal cards to players
}
