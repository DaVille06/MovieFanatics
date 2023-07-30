#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include "MovieRating.h"

class Movie
{
	friend class Movies;

private:
	Movie(std::string name, MovieRating rating);

	const std::string m_name;
	const MovieRating m_rating;
	int m_watchedCount;
};
#endif