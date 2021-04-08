

#include"HW1 P4 task1.h"


void Film:: copy(const Film& other) {
    this->companyName = new char[strlen(other.companyName) + 1];
    strcpy_s(this->companyName, strlen(other.companyName) + 1, other.companyName);

    this->directorName = new char[strlen(other.directorName) + 1];
    strcpy_s(this->directorName, strlen(other.directorName) + 1, other.directorName);

    this->rewards = other.rewards;
}

Film::Film() {
    this->companyName = new char[1];
    this->companyName[0] = '\0';

    this->directorName = new char[1];
    this->directorName[0] = '\0';

    this->rewards = 1;
}
Film::Film(const Film& other) {
    this->copy(other);
}
Film& Film::operator=(const Film& other) {
    if (this != &other) {
        delete[]this->companyName;
        delete[]this->directorName;
        this->copy(other);

    }
    return *this;
}
Film::~Film() {
    delete[]this->companyName;
    delete[]this->directorName;
}
void Film::setCompanyName(const char* _companyName) {

    delete[]this->companyName;
    this->companyName = new char[strlen(_companyName) + 1];
    strcpy_s(this->companyName, strlen(_companyName) + 1, _companyName);



}
char*Film:: getCompanyName() {
    return this->companyName;

}
void Film:: setDirectorName(const char* _directorName) {

    delete[]this->directorName;
    this->directorName = new char[strlen(_directorName) + 1];
    strcpy_s(this->directorName, strlen(_directorName) + 1, _directorName);


}
char* Film:: getDirectorName()const {
    return this->directorName;

}
void Film:: setRewards(int _rewards) {
    this->rewards = _rewards;
}
int Film::getRewards() const {
    return this->rewards;
}
void Film:: print() {
    std::cout << companyName << std::endl;
    std::cout << directorName << std::endl;
    std::cout << rewards << std::endl;

}