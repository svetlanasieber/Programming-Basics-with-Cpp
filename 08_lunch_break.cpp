#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int movie_duration, break_duration;
  string movie_name;

  getline(cin, movie_name);

  cin >> movie_duration >> break_duration;

  double lunch_time = break_duration * 1 / 8.0;
  double leisure_time = break_duration * 1 / 4.0;

  double time_for_movie = break_duration - (lunch_time + leisure_time);

  if (time_for_movie >= movie_duration) {
    cout << "You have enough time to watch " << movie_name << " and left with "
         << ceil(time_for_movie - movie_duration) << " minutes free time."
         << endl;
  } else {
    cout << "You don't have enough time to watch " << movie_name
         << ", you need " << ceil(movie_duration - time_for_movie)
         << " more minutes." << endl;
  }

  return 0;
}