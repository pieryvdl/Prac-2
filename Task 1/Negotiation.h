// Concrete State Class

#ifndef NEGOTIATION_H
#define NEGOTIATION_H

class Negotiation : public State{
    public:
        
        virtual void Addcondition(std::string);
        virtual void Removecondition();
        virtual void Acceptcontract();
        virtual void Rejectcontract();
        virtual void Completecontract();
        virtual std::string ToString() const;
};

#endif