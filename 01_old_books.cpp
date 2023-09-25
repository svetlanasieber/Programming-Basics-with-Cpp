#include <iostream>

using namespace std;

int main() {
  string searched_book;
  getline(cin >> ws, searched_book);

  string current_book;
  getline(cin >> ws, current_book);

  int searched_books = 0;

  while (current_book != "No More Books" && searched_book != current_book) {
    searched_books += 1;

    getline(cin >> ws, current_book);
  }

  if (searched_book == current_book) {
    cout << "You checked " << searched_books << " books and found it." << endl;
    return 0;
  } else {
    cout << "The book you search is not here!" << endl;
    cout << "You checked " << searched_books << " books." << endl;
    return 1;
  }
}