    #ifndef MOVIE_HPP
#define MOVIE_HPP
#include <string>

class Movie {

private:
    std::string name;
    std::string rating;
    int watched;
public:
    Movie();
    Movie(std::string name, std::string rating, int watched);
    Movie(const Movie &source);
    
    ~Movie();
    
    void set_name(std::string name) {this->name = name;}
    std::string get_name() const {return name;}
    
    void set_rating(std::string rating) {this->rating = rating;}
    std::string get_rating() {return rating;}
    
    void set_watched(int watched) {this->watched = watched;}
    
    void increment_watched() {++watched;}
    
    void display() const;
    

};

#endif // MOVIE_HPP
