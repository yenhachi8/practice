#include <string>
class airTicket
{
private:
    std::string name;
    int miles;

public:
    airTicket();
    ~airTicket();
    std::string getName();
    void setName(std::string inName);
    void setMiles(int inMiles);
    int calculatePrice();
};