#ifndef ACMESHAREDEVIATIONCHART_H
#define ACMESHAREDEVIATIONCHART_H

#include <QtCharts/QChart>

class AcmeShareDeviationChart : public QtCharts::QChart
{
    Q_OBJECT
public:
    AcmeShareDeviationChart(QGraphicsItem *parent = Q_NULLPTR, Qt::WindowFlags wFlags = Qt::WindowFlags());

    void createDefaultAxes();
};





#endif // ACMESHAREDEVIATIONCHART_H
