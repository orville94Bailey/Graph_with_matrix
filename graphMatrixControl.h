#ifndef GRAPHMATRIXCONTROL_H
#define GRAPHMATRIXCONTROL_H

#include <vector>
#include "graphNode.h"

class graphMatrixControl
{
    public:
        graphMatrixControl();
        virtual ~graphMatrixControl();
        void addVertex(int data);
        void removeVertex(int data);
        void linkVertices(int, int);
        void unlinkVertices(int,int);
        int  findVertex(int);
    protected:
    private:
        const static int maxSize=1000;
        int edgeMatrix[maxSize][maxSize];
        std::vector<graphNode*> verticesList;
};

#endif // GRAPHMATRIXCONTROL_H
