#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(application);
    QApplication app(argc, argv);
    app.setApplicationName("Editor de Texto");
    app.setOrganizationName("DarkMembers");
    MainWindow w;
    w.show();
    
    return app.exec();
}
