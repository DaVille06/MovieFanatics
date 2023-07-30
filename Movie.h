#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie
{
public:
	Movie(std::string name, std::string rating, int watched);
	Movie(const Movie& source);
	Movie();
	~Movie();

	void setName(std::string name);
	std::string getName() const;

	void setRating(std::string rating);
	std::string getRating() const;

	void setWatched(int watched);
	int getWatched() const;

	void incrementWatched();
	void display() const;
private:
	std::string m_name;
	std::string m_rating;
	int m_watched;
};
#endif // !MOVIE_H
