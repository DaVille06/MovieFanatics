#include "Movies.h"
#include <string>
#include <iostream>

Movies::Movies() { }
Movies::~Movies() { }

bool Movies::addMovie(std::string name, std::string rating, int watched)
{
	if (m_movies.count(name) > 0)
	{
		return false;
	}

	Movie* newMovie = new Movie(name, rating, watched);
	m_movies.insert({ name, newMovie });
	return true;
}

void Movies::display()
{
	if (m_movies.size() <= 0)
	{
		std::cout << "No movies in the list to display\n";
	}

	for (auto& movie : m_movies)
	{
		movie.second->display();
	}
}

bool Movies::incrementWatched(std::string name)
{
	if (m_movies.count(name) > 0)
	{
		m_movies[name]->incrementWatched();
		return true;
	}

	return false;
}