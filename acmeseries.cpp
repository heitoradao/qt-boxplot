#include "acmeseries.h"
#include "boxdatareader.h"
#include <QFile>

using namespace QtCharts;

AcmeSeries::AcmeSeries(QObject *parent)
    : QBoxPlotSeries(parent)
{
    setName("Acme Ltd");


    QFile acmeData(":acme");
    if (!acmeData.open(QIODevice::ReadOnly | QIODevice::Text)) {
        throw new std::runtime_error("Cannot open data file.");
    }

    BoxDataReader dataReader(&acmeData);
    while (!dataReader.atEnd()) {
        QBoxSet *set = dataReader.readBox();
        if (set) {
            append(set);
        }
    }
}
