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
    graphNode* holder;
    holder = new graphNode;
    holder->Setdata(data);
    if (findVertex(data)==-1)
    {
        verticesList.push_back(holder);
    }
}

int  graphMatrixControl::findVertex(int data)
{
    for(int l=0;l<verticesList.size(); l++)
    {
        if(data == verticesList[l]->Getdata())
        {
            return l;
        }
    }
    return -1;
}

void graphMatrixControl::removeVertex(int data)
{
    /*
    reset vertex's row in edge matrix to zeros
    from vertex row copy next
    reset vertex row next row
    repeat
    */

    int vertexRow;
    vertexRow = 0;

    if(findVertex(data)!=-1)
    {
        vertexRow = findVertex(data);
        for(int l = vertexRow; l<999; l++)
        {
            for(int x=0; x<1000;x++)
            {
                edgeMatrix[l][x] = 0;
            }
            for(int y=0; y<1000; y++)
            {
                edgeMatrix[l][y] = edgeMatrix[l+1][y];
            }
        }
        for(int x=0;x<1000;x++)
        {
            edgeMatrix[1000][x] = 0;
        }
    }
}

void graphMatrixControl::linkVertices(int first, int second)
{
    int firstRow,secondRow;
    firstRow = findVertex(first);
    secondRow = findVertex(second);
    if(firstRow!=-1 && secondRow!=-1)
    {
        edgeMatrix[firstRow][secondRow] = 1;
        edgeMatrix[secondRow][firstRow] = 1;
    }
}

void graphMatrixControl::unlinkVertices(int first, int second)
{
    int firstRow,secondRow;
    firstRow = findVertex(first);
    secondRow = findVertex(second);
    if(firstRow!=-1 && secondRow!=-1)
    {
        edgeMatrix[firstRow][secondRow] = 0;
        edgeMatrix[secondRow][firstRow] = 0;
    }
}
