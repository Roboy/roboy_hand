/********************************************************************************
** Form generated from reading UI file 'roboy_motor_calibration.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOY_MOTOR_CALIBRATION_H
#define UI_ROBOY_MOTOR_CALIBRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_RoboyMotorCalibration
{
public:
    QLabel *label_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QCustomPlot *displacement;
    QLabel *label_11;
    QCustomPlot *adc_value;
    QLabel *label_10;
    QCustomPlot *load;
    QLabel *label_9;
    QWidget *tab_2;
    QCustomPlot *motorAngle;
    QLabel *label_15;
    QPushButton *motorAngle_zero;
    QCustomPlot *winchAngle;
    QLabel *label_16;
    QPushButton *winchAngle_zero;
    QCustomPlot *load_2;
    QLabel *label_17;
    QCustomPlot *springAngle;
    QLabel *label_18;
    QLineEdit *setpoint_max;
    QSpinBox *motor;
    QSpinBox *fpga;
    QLabel *label_7;
    QLineEdit *setpoint_min;
    QLabel *label_8;
    QPushButton *load_motor_config;
    QLabel *label_5;
    QLabel *label_3;
    QPushButton *calibrate;
    QLineEdit *degree;
    QCustomPlot *force_displacement;
    QPushButton *fit_curve;
    QLineEdit *data_points;
    QLabel *label;
    QCustomPlot *displacement_force;
    QLabel *label_6;
    QLabel *label_4;
    QLineEdit *motor_config_path;
    QLineEdit *timeout;
    QPushButton *stop_button_all;
    QLineEdit *testrig_pos;
    QLabel *label_12;
    QPushButton *zero_testrig_position;
    QProgressBar *progressBar;

    void setupUi(QWidget *RoboyMotorCalibration)
    {
        if (RoboyMotorCalibration->objectName().isEmpty())
            RoboyMotorCalibration->setObjectName(QStringLiteral("RoboyMotorCalibration"));
        RoboyMotorCalibration->resize(858, 778);
        label_2 = new QLabel(RoboyMotorCalibration);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 271, 31));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_2->setFont(font);
        tabWidget = new QTabWidget(RoboyMotorCalibration);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 30, 821, 341));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        displacement = new QCustomPlot(tab);
        displacement->setObjectName(QStringLiteral("displacement"));
        displacement->setGeometry(QRect(540, 10, 271, 281));
        label_11 = new QLabel(displacement);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(0, 0, 101, 20));
        adc_value = new QCustomPlot(tab);
        adc_value->setObjectName(QStringLiteral("adc_value"));
        adc_value->setGeometry(QRect(270, 10, 271, 281));
        label_10 = new QLabel(adc_value);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 0, 68, 20));
        load = new QCustomPlot(tab);
        load->setObjectName(QStringLiteral("load"));
        load->setGeometry(QRect(0, 10, 271, 281));
        label_9 = new QLabel(load);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 0, 68, 20));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        motorAngle = new QCustomPlot(tab_2);
        motorAngle->setObjectName(QStringLiteral("motorAngle"));
        motorAngle->setGeometry(QRect(420, 10, 211, 281));
        label_15 = new QLabel(motorAngle);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(0, 0, 111, 20));
        motorAngle_zero = new QPushButton(motorAngle);
        motorAngle_zero->setObjectName(QStringLiteral("motorAngle_zero"));
        motorAngle_zero->setGeometry(QRect(170, 250, 41, 28));
        winchAngle = new QCustomPlot(tab_2);
        winchAngle->setObjectName(QStringLiteral("winchAngle"));
        winchAngle->setGeometry(QRect(210, 10, 211, 281));
        label_16 = new QLabel(winchAngle);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(0, 0, 101, 20));
        winchAngle_zero = new QPushButton(winchAngle);
        winchAngle_zero->setObjectName(QStringLiteral("winchAngle_zero"));
        winchAngle_zero->setGeometry(QRect(168, 250, 41, 28));
        load_2 = new QCustomPlot(tab_2);
        load_2->setObjectName(QStringLiteral("load_2"));
        load_2->setGeometry(QRect(0, 10, 211, 281));
        label_17 = new QLabel(load_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(0, 0, 68, 20));
        springAngle = new QCustomPlot(tab_2);
        springAngle->setObjectName(QStringLiteral("springAngle"));
        springAngle->setGeometry(QRect(630, 10, 211, 281));
        label_18 = new QLabel(springAngle);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(0, 0, 111, 20));
        tabWidget->addTab(tab_2, QString());
        setpoint_max = new QLineEdit(RoboyMotorCalibration);
        setpoint_max->setObjectName(QStringLiteral("setpoint_max"));
        setpoint_max->setGeometry(QRect(750, 740, 81, 27));
        motor = new QSpinBox(RoboyMotorCalibration);
        motor->setObjectName(QStringLiteral("motor"));
        motor->setGeometry(QRect(700, 580, 41, 30));
        motor->setMaximum(20);
        motor->setValue(15);
        fpga = new QSpinBox(RoboyMotorCalibration);
        fpga->setObjectName(QStringLiteral("fpga"));
        fpga->setGeometry(QRect(790, 580, 41, 31));
        fpga->setMinimum(3);
        fpga->setMaximum(5);
        fpga->setValue(3);
        label_7 = new QLabel(RoboyMotorCalibration);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(690, 680, 51, 21));
        label_7->setFont(font);
        setpoint_min = new QLineEdit(RoboyMotorCalibration);
        setpoint_min->setObjectName(QStringLiteral("setpoint_min"));
        setpoint_min->setGeometry(QRect(750, 710, 81, 27));
        label_8 = new QLabel(RoboyMotorCalibration);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(660, 620, 91, 21));
        label_8->setFont(font);
        load_motor_config = new QPushButton(RoboyMotorCalibration);
        load_motor_config->setObjectName(QStringLiteral("load_motor_config"));
        load_motor_config->setGeometry(QRect(640, 490, 191, 31));
        load_motor_config->setCheckable(true);
        label_5 = new QLabel(RoboyMotorCalibration);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(650, 740, 101, 21));
        label_5->setFont(font);
        label_3 = new QLabel(RoboyMotorCalibration);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(650, 580, 41, 31));
        label_3->setFont(font);
        calibrate = new QPushButton(RoboyMotorCalibration);
        calibrate->setObjectName(QStringLiteral("calibrate"));
        calibrate->setGeometry(QRect(550, 410, 281, 31));
        calibrate->setCheckable(true);
        degree = new QLineEdit(RoboyMotorCalibration);
        degree->setObjectName(QStringLiteral("degree"));
        degree->setGeometry(QRect(750, 680, 81, 27));
        force_displacement = new QCustomPlot(RoboyMotorCalibration);
        force_displacement->setObjectName(QStringLiteral("force_displacement"));
        force_displacement->setGeometry(QRect(330, 490, 301, 281));
        fit_curve = new QPushButton(RoboyMotorCalibration);
        fit_curve->setObjectName(QStringLiteral("fit_curve"));
        fit_curve->setGeometry(QRect(640, 530, 191, 31));
        data_points = new QLineEdit(RoboyMotorCalibration);
        data_points->setObjectName(QStringLiteral("data_points"));
        data_points->setGeometry(QRect(750, 620, 81, 27));
        label = new QLabel(RoboyMotorCalibration);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(750, 580, 31, 31));
        label->setFont(font);
        displacement_force = new QCustomPlot(RoboyMotorCalibration);
        displacement_force->setObjectName(QStringLiteral("displacement_force"));
        displacement_force->setGeometry(QRect(30, 490, 301, 281));
        label_6 = new QLabel(RoboyMotorCalibration);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(650, 650, 101, 21));
        label_6->setFont(font);
        label_4 = new QLabel(RoboyMotorCalibration);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(650, 710, 101, 21));
        label_4->setFont(font);
        motor_config_path = new QLineEdit(RoboyMotorCalibration);
        motor_config_path->setObjectName(QStringLiteral("motor_config_path"));
        motor_config_path->setGeometry(QRect(20, 450, 811, 31));
        timeout = new QLineEdit(RoboyMotorCalibration);
        timeout->setObjectName(QStringLiteral("timeout"));
        timeout->setGeometry(QRect(750, 650, 81, 27));
        stop_button_all = new QPushButton(RoboyMotorCalibration);
        stop_button_all->setObjectName(QStringLiteral("stop_button_all"));
        stop_button_all->setGeometry(QRect(20, 380, 511, 61));
        stop_button_all->setCheckable(true);
        testrig_pos = new QLineEdit(RoboyMotorCalibration);
        testrig_pos->setObjectName(QStringLiteral("testrig_pos"));
        testrig_pos->setGeometry(QRect(290, 4, 81, 21));
        label_12 = new QLabel(RoboyMotorCalibration);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(160, 0, 121, 31));
        label_12->setFont(font);
        zero_testrig_position = new QPushButton(RoboyMotorCalibration);
        zero_testrig_position->setObjectName(QStringLiteral("zero_testrig_position"));
        zero_testrig_position->setGeometry(QRect(380, 0, 121, 31));
        zero_testrig_position->setCheckable(false);
        progressBar = new QProgressBar(RoboyMotorCalibration);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(550, 380, 281, 23));
        progressBar->setValue(24);
        tabWidget->raise();
        label_2->raise();
        setpoint_max->raise();
        motor->raise();
        fpga->raise();
        label_7->raise();
        setpoint_min->raise();
        label_8->raise();
        load_motor_config->raise();
        label_5->raise();
        label_3->raise();
        calibrate->raise();
        degree->raise();
        force_displacement->raise();
        fit_curve->raise();
        data_points->raise();
        label->raise();
        displacement_force->raise();
        label_6->raise();
        label_4->raise();
        motor_config_path->raise();
        timeout->raise();
        stop_button_all->raise();
        testrig_pos->raise();
        label_12->raise();
        zero_testrig_position->raise();
        progressBar->raise();

        retranslateUi(RoboyMotorCalibration);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RoboyMotorCalibration);
    } // setupUi

    void retranslateUi(QWidget *RoboyMotorCalibration)
    {
        RoboyMotorCalibration->setWindowTitle(QApplication::translate("RoboyMotorCalibration", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("RoboyMotorCalibration", "MOTOR CALIBRATION", Q_NULLPTR));
        label_11->setText(QApplication::translate("RoboyMotorCalibration", "displacement", Q_NULLPTR));
        label_10->setText(QApplication::translate("RoboyMotorCalibration", "adc", Q_NULLPTR));
        label_9->setText(QApplication::translate("RoboyMotorCalibration", "load", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("RoboyMotorCalibration", "myoMuscle", Q_NULLPTR));
        label_15->setText(QApplication::translate("RoboyMotorCalibration", "motorAngle", Q_NULLPTR));
        motorAngle_zero->setText(QApplication::translate("RoboyMotorCalibration", "zero", Q_NULLPTR));
        label_16->setText(QApplication::translate("RoboyMotorCalibration", "winchAngle", Q_NULLPTR));
        winchAngle_zero->setText(QApplication::translate("RoboyMotorCalibration", "zero", Q_NULLPTR));
        label_17->setText(QApplication::translate("RoboyMotorCalibration", "load", Q_NULLPTR));
        label_18->setText(QApplication::translate("RoboyMotorCalibration", "springAngle", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("RoboyMotorCalibration", "myoBrick", Q_NULLPTR));
        setpoint_max->setText(QApplication::translate("RoboyMotorCalibration", "200", Q_NULLPTR));
        label_7->setText(QApplication::translate("RoboyMotorCalibration", "degree", Q_NULLPTR));
        setpoint_min->setText(QApplication::translate("RoboyMotorCalibration", "0", Q_NULLPTR));
        label_8->setText(QApplication::translate("RoboyMotorCalibration", "data points", Q_NULLPTR));
        load_motor_config->setText(QApplication::translate("RoboyMotorCalibration", "load motor config", Q_NULLPTR));
        label_5->setText(QApplication::translate("RoboyMotorCalibration", "setpoint_max", Q_NULLPTR));
        label_3->setText(QApplication::translate("RoboyMotorCalibration", "motor", Q_NULLPTR));
        calibrate->setText(QApplication::translate("RoboyMotorCalibration", "calibrate", Q_NULLPTR));
        degree->setText(QApplication::translate("RoboyMotorCalibration", "1", Q_NULLPTR));
        fit_curve->setText(QApplication::translate("RoboyMotorCalibration", "estimate spring parameters", Q_NULLPTR));
        data_points->setText(QApplication::translate("RoboyMotorCalibration", "3000", Q_NULLPTR));
        label->setText(QApplication::translate("RoboyMotorCalibration", "fpga", Q_NULLPTR));
        label_6->setText(QApplication::translate("RoboyMotorCalibration", "timeout [ms]", Q_NULLPTR));
        label_4->setText(QApplication::translate("RoboyMotorCalibration", "setpoint_min", Q_NULLPTR));
        motor_config_path->setText(QApplication::translate("RoboyMotorCalibration", "/home/roboy/workspace/roboy_control/src/roboy_rqt_plugins/roboy_motor_calibration/config/roboy.yaml", Q_NULLPTR));
        timeout->setText(QApplication::translate("RoboyMotorCalibration", "500000", Q_NULLPTR));
        stop_button_all->setText(QApplication::translate("RoboyMotorCalibration", "STOP", Q_NULLPTR));
        label_12->setText(QApplication::translate("RoboyMotorCalibration", "test rig weight height", Q_NULLPTR));
        zero_testrig_position->setText(QApplication::translate("RoboyMotorCalibration", "zero position", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RoboyMotorCalibration: public Ui_RoboyMotorCalibration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOY_MOTOR_CALIBRATION_H
