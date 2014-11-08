#ifndef GRAPHMATRIXCONTROL_H
#define GRAPHMATRIXCONTROL_H

#include <vector>

class graphMatrixControl
{
    public:
        graphMatrixControl();
        virtual ~graphMatrixControl();
        void addVertex(int data);
        void removeVertex(int data);
        void linkVertices(int, int);
        void unlinkVertices(int,int);
        int findVertex(int);
    protected:
    private:
        int edgeMatrix[1000][1000];
        std::vector<int> verticesList;
};

#endif // GRAPHMATRIXCONTROL_H
