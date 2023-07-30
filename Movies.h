#ifndef MOVIES_H
#define MOVIES_H

#include <map>
#include "Movie.h"

class Movies
{
public:
	Movies();
	void addMovie(std::string&, MovieRating& rating, int watchCount);
	void watchMovie(std::string& name);
	void displayMovies();
private:
	std::map<std::string, Movie*> m_movieCollection;
};

#endif // !MOVIES_H
