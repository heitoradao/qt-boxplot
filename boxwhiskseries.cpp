#include "boxwhiskseries.h"
#include "boxdatareader.h"
#include <stdexcept>
#include <QFile>
using namespace QtCharts;

BoxWhiskSeries::BoxWhiskSeries(QObject *parent)
    : QBoxPlotSeries(parent)
{
    setName("BoxWhisk Inc");


    QFile boxwhiskData(":boxwhisk");
    if (!boxwhiskData.open(QIODevice::ReadOnly | QIODevice::Text)) {
        throw new std::runtime_error("Cannot open data file.");
    }

    BoxDataReader dataReader(&boxwhiskData);
    while (!dataReader.atEnd()) {
        QBoxSet *set = dataReader.readBox();
        if (set) {
            append(set);
        }
    }
}
