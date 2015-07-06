#include <QApplication>
//#include <QSqlDatabase>
//#include <QSqlError>
//#include <QMessageBox>
//#include <QDebug>

#include "main_window.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
////    db.setHostName("192.168.1.60");
////    db.setHostName("127.0.0.1");
//    db.setHostName("190.91.112.211");
//    db.setPort(3306);
//    db.setUserName("test");
//    db.setPassword("test");
//    if (db.open()) {
//        QMessageBox::information(0, "Connected", QString("The connection with:\n"
//                                                         "\thostname: '%1'\n"
//                                                         "\tport: '%2'\n"
//                                                         "\tusername: '%3'\n"
//                                                         "\tpassword: '%4'\n"
//                                                         "was established! Yeeeaaahhh!")
//                                 .arg(db.hostName()).arg(db.port()).arg(db.userName()).arg(db.password()));
//        db.close();
//    }
//    else {
//        QMessageBox::critical(0, "Don't connected", QString("Cannot connect to database with the next settings:\n"
//                                                            "\thostname: '%1'\n"
//                                                            "\tport: '%2'\n"
//                                                            "\tusername: '%3'\n"
//                                                            "\tpassword: '%4'\n\n"
//                                                            "The error message: %5")
//                              .arg(db.hostName()).arg(db.port()).arg(db.userName()).arg(db.password()).arg(db.lastError().text()));
////        close();
//    }

    MainWindow w;
    w.show();
    return a.exec();
}
