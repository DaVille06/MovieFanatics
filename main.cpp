/*
* create a movies obj
* ask to movies object to add a movie by providing name, rating, and watched count
* ask movies obj to increment the watched count by 1 for a movie with a given name
* ask moves obj to display all movies
* display error if movie is already in collection
* display error if increment count for movie not in collection
*/

#include <iostream>
#include <string>
#include "Movies.h"

void addMovie(Movies& movies, std::string name, std::string rating, int watched);
void incrementWatched(Movies& movies, std::string name);

int main(int argc, char* argv[])
{
	Movies myMovies;
	myMovies.display();
	incrementWatched(myMovies, "Back to the Future");
	addMovie(myMovies, "Star Wars: A New Hope", "PG", 5);
	addMovie(myMovies, "Back to the Future", "PG-13", 10);
	addMovie(myMovies, "Batman", "PG-13", 3);
	myMovies.display();
	incrementWatched(myMovies, "Back to the Future");
	myMovies.display();
	return 0;
}

void addMovie(Movies& movies, std::string name, std::string rating, int watched)
{
	if (movies.addMovie(name, rating, watched))
	{
		std::cout << name << " added\n";
	}
	else
	{
		std::cout << name << " already exists\n";
	}
}

void incrementWatched(Movies& movies, std::string name)
{
	if (movies.incrementWatched(name))
	{
		std::cout << name << " watch incremented\n";
	}
	else
	{
		std::cout << name << " not found\n";
	}
}