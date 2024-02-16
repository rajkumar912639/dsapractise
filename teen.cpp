#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>

using namespace std;

// Structure to represent a card
struct Card {
    string suit;
    string rank;

    Card(const string& s, const string& r) : suit(s), rank(r) {}
};

// Function to display a card
void displayCard(const Card& card) {
    cout << card.rank << " of " << card.suit << endl;
}

// Function to create and return a deck of cards
vector<Card> createDeck() {
    vector<string> suits{"Spades", "Hearts", "Diamonds", "Clubs"};
    vector<string> ranks{"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};

    vector<Card> deck;
    for (const auto& suit : suits) {
        for (const auto& rank : ranks) {
            deck.emplace_back(suit, rank);
        }
    }

    return deck;
}

// Function to shuffle the deck of cards
void shuffleDeck(vector<Card>& deck) {
    srand(static_cast<unsigned>(time(0)));
    random_shuffle(deck.begin(), deck.end());
}

// Function to deal cards to players
void dealCards(const vector<Card>& deck, vector<vector<Card>>& players) {
    int numPlayers = players.size();
    int cardsPerPlayer = 3;

    for (int i = 0; i < numPlayers; i++) {
        for (int j = 0; j < cardsPerPlayer; j++) {
            players[i].push_back(deck[i * cardsPerPlayer + j]);
        }
    }
}

// Function to determine the winner based on card rankings
int determineWinner(const vector<vector<Card>>& players) {
    int numPlayers = players.size();
    int winner = 0;

    for (int i = 1; i < numPlayers; i++) {
        if (players[i][0].rank > players[winner][0].rank) {
            winner = i;
        }
    }

    return winner;
}

int main() {
    // Create and shuffle the deck
    vector<Card> deck = createDeck();
    shuffleDeck(deck);

    // Create a vector of players
    vector<vector<Card>> players(4);

    // Deal cards to players
    dealCards(deck, players);

    // Display the cards of each player
    for (int i = 0; i < players.size(); i++) {
        cout << "Player " << (i + 1) << "'s cards:\n";
        for (const auto& card : players[i]) {
            displayCard(card);
        }
        cout << endl;
    }

    // Determine the winner
    int winner = determineWinner(players);
    cout << "Player " << (winner + 1) << " wins!" << endl;

    return 0;
}

