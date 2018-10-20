# Deck-Card-Classes
// Overloading Lab

Write a Card class and a Deck class that stores a deck of these Cards.

Then, use the Monte Carlo method to determine the odds of receiving at least one pair in a hand of cards. A pair is any two cards with the same rank.

Along with outputting to the terminal the percentage of times a pair is found, your program should also give the user the option to output to a file the contents of each hand and whether it found a pair in that hand. Be sure to reshuffle the deck between each deal (simulation).

Your main function should seed the random function with the seed 2222.

Given this seed, here is what a sample run of your program will look like if the user chooses NOT to output to a file:

Do you want to output all hands to a file?(Yes/No) No

Enter number of cards per hand: 5

Enter number of deals (simulations): 10000

Chances of receiving a pair in a hand of 5 cards is: 49.34%
Here is what a sample run of your program will look like if the user DOES choose to output to a file:

Do you want to output all hands to a file?(Yes/No) Yes

Enter name of output file: hands.dat

Enter number of cards per hand: 5

Enter number of deals (simulations): 10

Chances of receiving a pair in a hand of 5 cards is: 40%
And the file hands.dat in this case would look like this:

             10 of Hearts, Ace of Spades, 6 of Clubs, 8 of Spades, Jack of Hearts
Found Pair!! Jack of Diamonds, 3 of Diamonds, 2 of Clubs, 2 of Diamonds, 7 of Diamonds
Found Pair!! 6 of Clubs, Queen of Hearts, 4 of Spades, 2 of Hearts, 6 of Hearts
             7 of Spades, 8 of Clubs, Queen of Hearts, 10 of Spades, 4 of Hearts
Found Pair!! 9 of Hearts, King of Clubs, 5 of Spades, 9 of Diamonds, 6 of Diamonds
             9 of Spades, 3 of Spades, 4 of Diamonds, Ace of Hearts, Queen of Diamonds
             5 of Clubs, 7 of Clubs, 9 of Hearts, Jack of Clubs, 8 of Hearts
             Jack of Diamonds, 4 of Hearts, 6 of Hearts, Queen of Diamonds, 7 of Diamonds
             Jack of Spades, 7 of Spades, 10 of Diamonds, 5 of Clubs, 3 of Clubs
Found Pair!! 8 of Clubs, Queen of Hearts, 5 of Hearts, Queen of Spades, 10 of Clubs
Required Card and Deck interfaces

Card.h and Deck.h contain the class declarations for the Card and Deck classes. Use these to create the class definitions in Card.cpp and Deck.cpp. Card.h and Deck.h files cannot be changed.

Required global functions (declared and implemented within main.cpp file)

/* Passes in a vector Cards and returns true if any 2 Cards have the same rank.
   Otherwise returns false.
*/
bool hasPair(const vector<Card> &);


/* Passes in a vector of Cards and outputs to the stream each Card
   separated by a comma and a space, 
   with no comma, space, or newline at the end.
*/
ostream & operator<<(ostream &, const vector<Card> &);
