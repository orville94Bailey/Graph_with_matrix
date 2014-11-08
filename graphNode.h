#ifndef GRAPHNODE_H
#define GRAPHNODE_H


class graphNode
{
    public:
        graphNode();
        virtual ~graphNode();
        int Getdata() { return data; }
        void Setdata(int val) { data = val; }
        bool GetwasVisited() { return wasVisited; }
        void SetwasVisited(bool val) { wasVisited = val; }
    protected:
    private:
        int data;
        bool wasVisited;
};

#endif // GRAPHNODE_H
