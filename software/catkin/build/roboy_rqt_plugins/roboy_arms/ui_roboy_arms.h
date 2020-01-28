/********************************************************************************
** Form generated from reading UI file 'roboy_arms.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOY_ARMS_H
#define UI_ROBOY_ARMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_RoboyArms
{
public:
    QCustomPlot *position_plot;
    QCustomPlot *velocity_plot;
    QCustomPlot *displacement_plot;
    QCustomPlot *current_plot;
    QSpinBox *fpga;
    QLabel *label;
    QLabel *label_2;
    QFrame *power_sense;
    QCheckBox *motor_0;
    QCheckBox *motor_1;
    QCheckBox *motor_2;
    QCheckBox *motor_3;
    QCheckBox *motor_4;
    QCheckBox *motor_5;
    QCheckBox *motor_6;
    QCheckBox *motor_7;
    QCheckBox *motor_8;
    QCheckBox *motor_9;
    QCheckBox *motor_10;
    QCheckBox *motor_11;
    QCheckBox *motor_12;
    QPushButton *toggle_all;
    QCheckBox *motor_13;
    QCheckBox *motor_14;
    QLabel *label_3;
    QCheckBox *motor_15;

    void setupUi(QWidget *RoboyArms)
    {
        if (RoboyArms->objectName().isEmpty())
            RoboyArms->setObjectName(QStringLiteral("RoboyArms"));
        RoboyArms->resize(338, 939);
        position_plot = new QCustomPlot(RoboyArms);
        position_plot->setObjectName(QStringLiteral("position_plot"));
        position_plot->setGeometry(QRect(0, 80, 341, 231));
        velocity_plot = new QCustomPlot(RoboyArms);
        velocity_plot->setObjectName(QStringLiteral("velocity_plot"));
        velocity_plot->setGeometry(QRect(0, 310, 341, 231));
        displacement_plot = new QCustomPlot(RoboyArms);
        displacement_plot->setObjectName(QStringLiteral("displacement_plot"));
        displacement_plot->setGeometry(QRect(0, 540, 341, 231));
        current_plot = new QCustomPlot(RoboyArms);
        current_plot->setObjectName(QStringLiteral("current_plot"));
        current_plot->setGeometry(QRect(0, 770, 341, 171));
        fpga = new QSpinBox(RoboyArms);
        fpga->setObjectName(QStringLiteral("fpga"));
        fpga->setGeometry(QRect(240, 0, 41, 30));
        fpga->setMaximum(5);
        label = new QLabel(RoboyArms);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 0, 31, 31));
        label_2 = new QLabel(RoboyArms);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 171, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_2->setFont(font);
        power_sense = new QFrame(RoboyArms);
        power_sense->setObjectName(QStringLiteral("power_sense"));
        power_sense->setGeometry(QRect(290, 0, 31, 31));
        power_sense->setFrameShape(QFrame::StyledPanel);
        power_sense->setFrameShadow(QFrame::Raised);
        motor_0 = new QCheckBox(RoboyArms);
        motor_0->setObjectName(QStringLiteral("motor_0"));
        motor_0->setGeometry(QRect(0, 60, 16, 21));
        motor_0->setChecked(true);
        motor_1 = new QCheckBox(RoboyArms);
        motor_1->setObjectName(QStringLiteral("motor_1"));
        motor_1->setGeometry(QRect(20, 60, 16, 21));
        motor_1->setChecked(true);
        motor_2 = new QCheckBox(RoboyArms);
        motor_2->setObjectName(QStringLiteral("motor_2"));
        motor_2->setGeometry(QRect(40, 60, 16, 21));
        motor_2->setChecked(true);
        motor_3 = new QCheckBox(RoboyArms);
        motor_3->setObjectName(QStringLiteral("motor_3"));
        motor_3->setGeometry(QRect(60, 60, 16, 21));
        motor_3->setChecked(true);
        motor_4 = new QCheckBox(RoboyArms);
        motor_4->setObjectName(QStringLiteral("motor_4"));
        motor_4->setGeometry(QRect(80, 60, 16, 21));
        motor_4->setChecked(true);
        motor_5 = new QCheckBox(RoboyArms);
        motor_5->setObjectName(QStringLiteral("motor_5"));
        motor_5->setGeometry(QRect(100, 60, 16, 21));
        motor_5->setChecked(true);
        motor_6 = new QCheckBox(RoboyArms);
        motor_6->setObjectName(QStringLiteral("motor_6"));
        motor_6->setGeometry(QRect(120, 60, 16, 21));
        motor_6->setChecked(true);
        motor_7 = new QCheckBox(RoboyArms);
        motor_7->setObjectName(QStringLiteral("motor_7"));
        motor_7->setGeometry(QRect(140, 60, 16, 21));
        motor_7->setChecked(true);
        motor_8 = new QCheckBox(RoboyArms);
        motor_8->setObjectName(QStringLiteral("motor_8"));
        motor_8->setGeometry(QRect(160, 60, 16, 21));
        motor_8->setChecked(true);
        motor_9 = new QCheckBox(RoboyArms);
        motor_9->setObjectName(QStringLiteral("motor_9"));
        motor_9->setGeometry(QRect(180, 60, 16, 21));
        motor_9->setChecked(true);
        motor_10 = new QCheckBox(RoboyArms);
        motor_10->setObjectName(QStringLiteral("motor_10"));
        motor_10->setGeometry(QRect(200, 60, 16, 21));
        motor_10->setChecked(true);
        motor_11 = new QCheckBox(RoboyArms);
        motor_11->setObjectName(QStringLiteral("motor_11"));
        motor_11->setGeometry(QRect(220, 60, 16, 21));
        motor_11->setChecked(true);
        motor_12 = new QCheckBox(RoboyArms);
        motor_12->setObjectName(QStringLiteral("motor_12"));
        motor_12->setGeometry(QRect(240, 60, 16, 21));
        motor_12->setChecked(true);
        toggle_all = new QPushButton(RoboyArms);
        toggle_all->setObjectName(QStringLiteral("toggle_all"));
        toggle_all->setGeometry(QRect(320, 60, 21, 21));
        motor_13 = new QCheckBox(RoboyArms);
        motor_13->setObjectName(QStringLiteral("motor_13"));
        motor_13->setGeometry(QRect(280, 60, 16, 21));
        motor_13->setChecked(true);
        motor_14 = new QCheckBox(RoboyArms);
        motor_14->setObjectName(QStringLiteral("motor_14"));
        motor_14->setGeometry(QRect(260, 60, 16, 21));
        motor_14->setChecked(true);
        label_3 = new QLabel(RoboyArms);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 40, 321, 20));
        motor_15 = new QCheckBox(RoboyArms);
        motor_15->setObjectName(QStringLiteral("motor_15"));
        motor_15->setGeometry(QRect(300, 60, 16, 21));
        motor_15->setChecked(true);

        retranslateUi(RoboyArms);

        QMetaObject::connectSlotsByName(RoboyArms);
    } // setupUi

    void retranslateUi(QWidget *RoboyArms)
    {
        RoboyArms->setWindowTitle(QApplication::translate("RoboyArms", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("RoboyArms", "fpga", Q_NULLPTR));
        label_2->setText(QApplication::translate("RoboyArms", "MOTOR STATUS", Q_NULLPTR));
        motor_0->setText(QString());
        motor_1->setText(QString());
        motor_2->setText(QString());
        motor_3->setText(QString());
        motor_4->setText(QString());
        motor_5->setText(QString());
        motor_6->setText(QString());
        motor_7->setText(QString());
        motor_8->setText(QString());
        motor_9->setText(QString());
        motor_10->setText(QString());
        motor_11->setText(QString());
        motor_12->setText(QString());
        toggle_all->setText(QApplication::translate("RoboyArms", "O", Q_NULLPTR));
        motor_13->setText(QString());
        motor_14->setText(QString());
        label_3->setText(QApplication::translate("RoboyArms", " 0   1   2    3   4    5   6   7    8   9  10 11 12 13 14 15", Q_NULLPTR));
        motor_15->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RoboyArms: public Ui_RoboyArms {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOY_ARMS_H
