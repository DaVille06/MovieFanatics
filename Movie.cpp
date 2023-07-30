#include "Movie.h"
#include <iostream>

Movie::Movie(std::string name, std::string rating, int watched)
	: m_name{ name }, m_rating{ rating }, m_watched{ watched }
{ }

Movie::Movie(const Movie& source)
	: Movie(source.m_name, source.m_rating, source.m_watched)
{ }

Movie::Movie() {}

Movie::~Movie() { }

void Movie::setName(std::string name)
{
	this->m_name = name;
}

std::string Movie::getName() const
{
	return m_name;
}

void Movie::setRating(std::string rating)
{
	this->m_rating = rating;
}

std::string Movie::getRating() const
{
	return m_rating;
}

void Movie::setWatched(int watched)
{
	this->m_watched = watched;
}

int Movie::getWatched() const
{
	return m_watched;
}

void Movie::incrementWatched()
{
	++m_watched;
}

void Movie::display() const
{
	std::cout << m_name << ", " << m_rating << ", " << m_watched << "\n";
}