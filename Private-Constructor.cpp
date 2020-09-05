#include <iostream>
using namespace std;

class Programmer
{
private:
    int id;
    string name;
    string progLang;

public:
    // Constructor
    Programmer(int ID, string NAME, string LANG)
    {
        id = ID;
        name = NAME;
        progLang = LANG;
    }

    // Constructor overloading
    Programmer(int id, string name)
    {
        this->id = id;
        this->name = name;
        this->progLang = "C++";
    }

    // Empty constructor
    Programmer()
    {
        this->id = 0;
        this->name = "No name...";
        this->progLang = "No language...";
    }

    /*
    What is 'this' pointer?
    We can use this pointer for this example below:

    int id;
    int age;
    Programmer(int id, int age)
    {
        this->id = id;
        this->age = age;
    } 
    */

    // Setter
    void setId(int ID)
    {
        id = ID;
    }

    // Getter
    int getId()
    {
        return id;
    }
    void setName(string NAME)
    {
        name = NAME;
    }
    string getName()
    {
        return name;
    }
    void setProgLang(string LANG)
    {
        progLang = LANG;
    }
    string getProgLang()
    {
        return progLang;
    }

    void showInfos()
    {
        cout << "ID: " << id << endl;
        cout << "NAME: " << name << endl;
        cout << "Programming Skill: " << progLang << endl;
    }
};

int main()
{
    /*
    // Using create object.
    Programmer programmer; 
    programmer.setId(1);
    cout << "ID: " << programmer.getId() << endl;
    programmer.setName("Hussein");
    cout << "Name: " << programmer.getName() << endl;
    programmer.setProgLang("JavaScript");
    cout << "Programming Skill: " << programmer.getProgLang() << endl;

    // Using pointers.
    Programmer *programmer1 = new Programmer(); 
    programmer1->setId(2);
    programmer1->setName("Cavidan");
    programmer1->setProgLang("C++");
    cout << "ID: " << programmer1->getId() << endl;
    cout << "Name: " << programmer1->getName() << endl;
    cout << "Programming Skill: " << programmer1->getProgLang() << endl;
    */

    // Using constructor.
    Programmer programmer2(3, "Cavid", "SQL");
    programmer2.showInfos();

    // Using overloading constructor.
    Programmer programmer3(1, "Hussein");
    programmer3.showInfos();

    // Using empty constructor.
    Programmer programmer4;
    programmer4.showInfos();
}