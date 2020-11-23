#ifndef ACMESERIES_H
#define ACMESERIES_H

#include <QtCharts/QBoxPlotSeries>

class AcmeSeries : public QtCharts::QBoxPlotSeries
{
    Q_OBJECT
public:
    AcmeSeries(QObject *parent = nullptr);
};

#endif // ACMESERIES_H
