#include "Movie.h"

Movie::Movie(std::string& name, MovieRating& rating, int watchedCount)
	: m_name{ name }, m_rating{ rating }, m_watchedCount{ watchedCount }
{ }