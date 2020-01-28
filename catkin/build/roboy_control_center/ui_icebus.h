/********************************************************************************
** Form generated from reading UI file 'icebus.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICEBUS_H
#define UI_ICEBUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Icebus
{
public:
    QCustomPlot *communication_quality;
    QLabel *icebus_name;

    void setupUi(QWidget *Icebus)
    {
        if (Icebus->objectName().isEmpty())
            Icebus->setObjectName(QStringLiteral("Icebus"));
        Icebus->resize(1324, 1234);
        communication_quality = new QCustomPlot(Icebus);
        communication_quality->setObjectName(QStringLiteral("communication_quality"));
        communication_quality->setGeometry(QRect(160, 0, 841, 111));
        icebus_name = new QLabel(Icebus);
        icebus_name->setObjectName(QStringLiteral("icebus_name"));
        icebus_name->setGeometry(QRect(30, 20, 111, 71));
        QFont font;
        font.setPointSize(15);
        icebus_name->setFont(font);

        retranslateUi(Icebus);

        QMetaObject::connectSlotsByName(Icebus);
    } // setupUi

    void retranslateUi(QWidget *Icebus)
    {
        Icebus->setWindowTitle(QApplication::translate("Icebus", "Form", Q_NULLPTR));
        icebus_name->setText(QApplication::translate("Icebus", "icebus", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Icebus: public Ui_Icebus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICEBUS_H
