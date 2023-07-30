/*
* create a movies obj
* ask to movies object to add a movie by providing name, rating, and watched count
* ask movies obj to increment the watched count by 1 for a movie with a given name
* ask moves obj to display all movies
* display error if movie is already in collection
* display error if increment count for movie not in collection
*/
#include "Movies.h"

int main(int argc, char* argv[])
{
	Movies movies;
	std::string goodfellas {"Goodfellas"};
	enum MovieRating rating = R;
	movies.addMovie(goodfellas, rating, 5);
	movies.addMovie(goodfellas, rating, 6);
	movies.watchMovie(goodfellas);
	return 0;
}