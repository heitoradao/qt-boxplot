#include "acmesharedeviationchart.h"
#include <QDebug>
#include "acmeseries.h"
#include "boxwhiskseries.h"

QT_CHARTS_USE_NAMESPACE
//using namespace QtCharts;

AcmeShareDeviationChart::AcmeShareDeviationChart(QGraphicsItem *parent, Qt::WindowFlags wFlags)
    : QChart(parent, wFlags)
{
    setTitle("Acme Ltd and BoxWhisk Inc share deviation in 2012");
    setAnimationOptions(QChart::SeriesAnimations);
    legend()->setAlignment(Qt::AlignBottom);


    this->addSeries(new AcmeSeries);
    this->addSeries(new BoxWhiskSeries);
    this->createDefaultAxes();
}

void AcmeShareDeviationChart::createDefaultAxes()
{
    QChart::createDefaultAxes();
    if (QAbstractAxis *axis = axisY()) {
        axis->setMin(15.0);
    }
    if (QAbstractAxis *axis = axisY()) {
        axis->setMax(34.0);
    }
}
