#ifndef NPC_H
#define NPC_H


class NPC {
    public:
        virtual void describe() = 0;
        virtual ~NPC() {}
};

class DesertNPC : public NPC {
    public:
        void describe() override;
};

class ForestNPC : public NPC {
    public:
        void describe() override;
};

#endif