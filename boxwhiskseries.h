#ifndef BOXWHISKSERIES_H
#define BOXWHISKSERIES_H

#include <QtCharts/QBoxPlotSeries>

class BoxWhiskSeries : public QtCharts::QBoxPlotSeries
{
    Q_OBJECT
public:
    BoxWhiskSeries(QObject *parent = Q_NULLPTR);
};

#endif // BOXWHISKSERIES_H
