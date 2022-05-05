#include "gui.h"
#include <QCoreApplication>
#include "httpclient.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    HttpClient client(argc, argv);

    return a.exec();
}
