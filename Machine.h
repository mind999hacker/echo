#include "r200.h"

class Machine
{
    public:
        Machine();
        void loop();
        void add();
        void track();
        void fetch(unsigned int tagToFind, int *anttenaArray);
    private:
        State activeState;
        AnttenaSwitcher anttena;
        LinkedList<Tag> Tags;
        r200 reader;
        bool notDuplicate;
        bool tagFound = false;

};