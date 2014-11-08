#include "graphMatrixControl.h"

graphMatrixControl::graphMatrixControl()
{
    //ctor
    for(int i = 0; i<1000; i++)
    {
        for(int x = 0; x<1000; x++)
        {
            edgeMatrix[x][i];
            //initializes horizontally row by row
        }
    }
}

graphMatrixControl::~graphMatrixControl()
{
    //dtor
}

void graphMatrixControl::addVertex(int data)
{

}

int graphMatrixControl::findVertex(int data)
{
    for(int l=0;l<verticesList.size(); l++)
    {
        if(data == verticesList[l])
        {
            return l;
        }
    }
    return -1;
}
