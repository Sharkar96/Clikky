#include <iostream>
#include "Event.h"
#include "Click.h"
#include "ModelMain.h"
#include "ControllerMain.h"
#include "ViewMain.h"
#include <QApplication>



int main(int argc, char* argv[]) {

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication app(argc, argv);

    ModelMain* model = new ModelMain;
    ControllerMain* controller = new ControllerMain(model);
    ViewMain viewMain(model, controller);
    viewMain.show();

    return app.exec();

    return 0;
}