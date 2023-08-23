// State Class, Abstract(Pure virtual)

#ifndef STATE_H
#define STATE_H

#include <string>

class State {

    public:
        virtual ~State();
        virtual void Addcondition(std::string)=0;
        virtual void Removecondition()=0;
        virtual void Acceptcontract()=0;
        virtual void Rejectcontract()=0;
        virtual void Completecontract()=0;
        virtual std::string ToString() const = 0;

};

#endif