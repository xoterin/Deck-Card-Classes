// Deck class definition


/* Places all cards back into theDeck and shuffles them into random order.
*/
void Deck::shuffleDeck() {
	for (unsigned i = 0; i < dealtCards.size(); ++i) {
		theDeck.push_back(dealtCards.at(i));
	}
	dealtCards.clear();
	random_shuffle(theDeck.begin(), theDeck.end());
}
