#include <string>

using namespace std;

class Tehen {
    string szin;

public:
    Tehen(const string& szin) : szin(szin) {}

    const string& get_szin() const{
        return szin;
    }

};
