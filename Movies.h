#ifndef MOVIES_H
#define MOVIES_H

//#include <vector>
#include <map>
#include "Movie.h"

class Movies
{
public:
	Movies();
	~Movies();
	
	bool addMovie(std::string name, std::string rating, int watched);
	void display();
	bool incrementWatched(std::string name);
private:
	//std::vector<Movie> m_movies;
	std::map<std::string, Movie*> m_movies;
};
#endif // !MOVIES_H
