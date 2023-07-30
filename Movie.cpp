#include "Movie.h"

Movie::Movie(std::string name, MovieRating rating)
	: m_name{ name }, m_rating{ rating }
{
	m_watchedCount = 0;
}