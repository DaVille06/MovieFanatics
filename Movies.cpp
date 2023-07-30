#include "Movies.h"

Movies::Movies()
{

}

void Movies::addMovie(std::string& name, MovieRating& rating, int watchCount)
{
	// add to map
	// search map for movie
	if (m_movieCollection.count(name) > 0)
	{
		std::perror("The movie has already been added.");
	}
	else
	{
		Movie movie(name, rating, watchCount);
		m_movieCollection.insert({ name, &movie });
	}
}

void Movies::watchMovie(std::string& name)
{
	// increment count of movie
	// check if movie is in list
	// if so increment
	if (m_movieCollection.count("name") > 0)
	{
		(*m_movieCollection["name"]).m_watchedCount++;
	}
	else
	{
		std::perror("The movie you entered is not in the collection. Please add it first.");
	}
}

void Movies::displayMovies()
{

}