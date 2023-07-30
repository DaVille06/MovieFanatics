#include "Movies.h"

void Movies::addMovie(std::string, MovieRating rating, int watchCount)
{
	// add to map
}

void Movies::watchMovie(std::string& name)
{
	// increment count of movie
	// check if movie is in list
	// if so increment
	if (m_movieCollection.count("name") > 0)
	{
		m_movieCollection["name"].m_watchedCount++;
	}
	else
	{
		std::perror("The movie you entered is not in the collection. Please add it first.");
	}
}

void Movies::displayMovies()
{

}