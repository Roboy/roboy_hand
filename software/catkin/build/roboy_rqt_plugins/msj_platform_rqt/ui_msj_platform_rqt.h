/********************************************************************************
** Form generated from reading UI file 'msj_platform_rqt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MSJ_PLATFORM_RQT_H
#define UI_MSJ_PLATFORM_RQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MSJPlatformRQT
{
public:
    QCustomPlot *position_plot;
    QCustomPlot *velocity_plot;
    QCustomPlot *angle_plot;
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
    QPushButton *toggle_all;
    QLabel *label_3;
    QSlider *motor_pos_0;
    QSlider *motor_pos_1;
    QSlider *motor_pos_2;
    QSlider *motor_pos_3;
    QSlider *motor_pos_4;
    QSlider *motor_pos_5;
    QSlider *motor_pos_6;
    QPushButton *zero;
    QSlider *motor_pos_7;
    QPushButton *stop_button;
    QCustomPlot *magnetic_plot_0;
    QCustomPlot *magnetic_plot_1;
    QCustomPlot *magnetic_plot_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QSlider *top;
    QSlider *bottom;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *show_magnetic_field;
    QPushButton *clear_magnetic_field;
    QCustomPlot *joint_space;
    QPushButton *grid_map;
    QPushButton *zero_pose;
    QPushButton *acc;
    QPushButton *gyro;
    QPushButton *mag;
    QPushButton *system;
    QPushButton *heading;
    QPushButton *measure_joint_limits;
    QSlider *speed_axis0;
    QSlider *speed_axis1;
    QSlider *speed_axis2;
    QPushButton *grid;
    QPushButton *spiral;
    QPushButton *random;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *MSJPlatformRQT)
    {
        if (MSJPlatformRQT->objectName().isEmpty())
            MSJPlatformRQT->setObjectName(QStringLiteral("MSJPlatformRQT"));
        MSJPlatformRQT->resize(1020, 939);
        position_plot = new QCustomPlot(MSJPlatformRQT);
        position_plot->setObjectName(QStringLiteral("position_plot"));
        position_plot->setGeometry(QRect(0, 80, 341, 231));
        velocity_plot = new QCustomPlot(MSJPlatformRQT);
        velocity_plot->setObjectName(QStringLiteral("velocity_plot"));
        velocity_plot->setGeometry(QRect(0, 310, 341, 231));
        angle_plot = new QCustomPlot(MSJPlatformRQT);
        angle_plot->setObjectName(QStringLiteral("angle_plot"));
        angle_plot->setGeometry(QRect(0, 540, 341, 231));
        fpga = new QSpinBox(MSJPlatformRQT);
        fpga->setObjectName(QStringLiteral("fpga"));
        fpga->setGeometry(QRect(240, 0, 41, 30));
        fpga->setMaximum(5);
        fpga->setValue(5);
        label = new QLabel(MSJPlatformRQT);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 0, 31, 31));
        label_2 = new QLabel(MSJPlatformRQT);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 171, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_2->setFont(font);
        power_sense = new QFrame(MSJPlatformRQT);
        power_sense->setObjectName(QStringLiteral("power_sense"));
        power_sense->setGeometry(QRect(290, 0, 31, 31));
        power_sense->setFrameShape(QFrame::StyledPanel);
        power_sense->setFrameShadow(QFrame::Raised);
        motor_0 = new QCheckBox(MSJPlatformRQT);
        motor_0->setObjectName(QStringLiteral("motor_0"));
        motor_0->setGeometry(QRect(0, 60, 16, 21));
        motor_0->setChecked(true);
        motor_1 = new QCheckBox(MSJPlatformRQT);
        motor_1->setObjectName(QStringLiteral("motor_1"));
        motor_1->setGeometry(QRect(20, 60, 16, 21));
        motor_1->setChecked(true);
        motor_2 = new QCheckBox(MSJPlatformRQT);
        motor_2->setObjectName(QStringLiteral("motor_2"));
        motor_2->setGeometry(QRect(40, 60, 16, 21));
        motor_2->setChecked(true);
        motor_3 = new QCheckBox(MSJPlatformRQT);
        motor_3->setObjectName(QStringLiteral("motor_3"));
        motor_3->setGeometry(QRect(60, 60, 16, 21));
        motor_3->setChecked(true);
        motor_4 = new QCheckBox(MSJPlatformRQT);
        motor_4->setObjectName(QStringLiteral("motor_4"));
        motor_4->setGeometry(QRect(80, 60, 16, 21));
        motor_4->setChecked(true);
        motor_5 = new QCheckBox(MSJPlatformRQT);
        motor_5->setObjectName(QStringLiteral("motor_5"));
        motor_5->setGeometry(QRect(100, 60, 16, 21));
        motor_5->setChecked(true);
        motor_6 = new QCheckBox(MSJPlatformRQT);
        motor_6->setObjectName(QStringLiteral("motor_6"));
        motor_6->setGeometry(QRect(120, 60, 16, 21));
        motor_6->setChecked(true);
        motor_7 = new QCheckBox(MSJPlatformRQT);
        motor_7->setObjectName(QStringLiteral("motor_7"));
        motor_7->setGeometry(QRect(140, 60, 16, 21));
        motor_7->setChecked(true);
        toggle_all = new QPushButton(MSJPlatformRQT);
        toggle_all->setObjectName(QStringLiteral("toggle_all"));
        toggle_all->setGeometry(QRect(160, 60, 21, 21));
        label_3 = new QLabel(MSJPlatformRQT);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 40, 161, 20));
        motor_pos_0 = new QSlider(MSJPlatformRQT);
        motor_pos_0->setObjectName(QStringLiteral("motor_pos_0"));
        motor_pos_0->setGeometry(QRect(10, 780, 29, 141));
        motor_pos_0->setMinimum(-50000);
        motor_pos_0->setMaximum(50000);
        motor_pos_0->setSingleStep(100);
        motor_pos_0->setPageStep(1000);
        motor_pos_0->setValue(0);
        motor_pos_0->setSliderPosition(0);
        motor_pos_0->setOrientation(Qt::Vertical);
        motor_pos_1 = new QSlider(MSJPlatformRQT);
        motor_pos_1->setObjectName(QStringLiteral("motor_pos_1"));
        motor_pos_1->setGeometry(QRect(40, 780, 29, 141));
        motor_pos_1->setMinimum(-50000);
        motor_pos_1->setMaximum(50000);
        motor_pos_1->setSingleStep(100);
        motor_pos_1->setPageStep(1000);
        motor_pos_1->setValue(0);
        motor_pos_1->setSliderPosition(0);
        motor_pos_1->setOrientation(Qt::Vertical);
        motor_pos_2 = new QSlider(MSJPlatformRQT);
        motor_pos_2->setObjectName(QStringLiteral("motor_pos_2"));
        motor_pos_2->setGeometry(QRect(70, 780, 29, 141));
        motor_pos_2->setMinimum(-50000);
        motor_pos_2->setMaximum(50000);
        motor_pos_2->setSingleStep(100);
        motor_pos_2->setPageStep(1000);
        motor_pos_2->setValue(0);
        motor_pos_2->setSliderPosition(0);
        motor_pos_2->setOrientation(Qt::Vertical);
        motor_pos_3 = new QSlider(MSJPlatformRQT);
        motor_pos_3->setObjectName(QStringLiteral("motor_pos_3"));
        motor_pos_3->setGeometry(QRect(100, 780, 29, 141));
        motor_pos_3->setMinimum(-50000);
        motor_pos_3->setMaximum(50000);
        motor_pos_3->setSingleStep(100);
        motor_pos_3->setPageStep(1000);
        motor_pos_3->setValue(0);
        motor_pos_3->setSliderPosition(0);
        motor_pos_3->setOrientation(Qt::Vertical);
        motor_pos_4 = new QSlider(MSJPlatformRQT);
        motor_pos_4->setObjectName(QStringLiteral("motor_pos_4"));
        motor_pos_4->setGeometry(QRect(130, 780, 29, 141));
        motor_pos_4->setMinimum(-50000);
        motor_pos_4->setMaximum(50000);
        motor_pos_4->setSingleStep(100);
        motor_pos_4->setPageStep(1000);
        motor_pos_4->setValue(0);
        motor_pos_4->setSliderPosition(0);
        motor_pos_4->setOrientation(Qt::Vertical);
        motor_pos_5 = new QSlider(MSJPlatformRQT);
        motor_pos_5->setObjectName(QStringLiteral("motor_pos_5"));
        motor_pos_5->setGeometry(QRect(160, 780, 29, 141));
        motor_pos_5->setMinimum(-50000);
        motor_pos_5->setMaximum(50000);
        motor_pos_5->setSingleStep(100);
        motor_pos_5->setPageStep(1000);
        motor_pos_5->setValue(0);
        motor_pos_5->setSliderPosition(0);
        motor_pos_5->setOrientation(Qt::Vertical);
        motor_pos_6 = new QSlider(MSJPlatformRQT);
        motor_pos_6->setObjectName(QStringLiteral("motor_pos_6"));
        motor_pos_6->setGeometry(QRect(190, 780, 29, 141));
        motor_pos_6->setMinimum(-50000);
        motor_pos_6->setMaximum(50000);
        motor_pos_6->setSingleStep(100);
        motor_pos_6->setPageStep(1000);
        motor_pos_6->setValue(0);
        motor_pos_6->setSliderPosition(0);
        motor_pos_6->setOrientation(Qt::Vertical);
        zero = new QPushButton(MSJPlatformRQT);
        zero->setObjectName(QStringLiteral("zero"));
        zero->setGeometry(QRect(260, 780, 71, 27));
        motor_pos_7 = new QSlider(MSJPlatformRQT);
        motor_pos_7->setObjectName(QStringLiteral("motor_pos_7"));
        motor_pos_7->setGeometry(QRect(220, 780, 29, 141));
        motor_pos_7->setMinimum(-50000);
        motor_pos_7->setMaximum(50000);
        motor_pos_7->setSingleStep(100);
        motor_pos_7->setPageStep(1000);
        motor_pos_7->setValue(0);
        motor_pos_7->setSliderPosition(0);
        motor_pos_7->setOrientation(Qt::Vertical);
        stop_button = new QPushButton(MSJPlatformRQT);
        stop_button->setObjectName(QStringLiteral("stop_button"));
        stop_button->setGeometry(QRect(260, 860, 71, 71));
        stop_button->setCheckable(true);
        magnetic_plot_0 = new QCustomPlot(MSJPlatformRQT);
        magnetic_plot_0->setObjectName(QStringLiteral("magnetic_plot_0"));
        magnetic_plot_0->setGeometry(QRect(340, 80, 341, 231));
        magnetic_plot_1 = new QCustomPlot(MSJPlatformRQT);
        magnetic_plot_1->setObjectName(QStringLiteral("magnetic_plot_1"));
        magnetic_plot_1->setGeometry(QRect(340, 310, 341, 231));
        magnetic_plot_2 = new QCustomPlot(MSJPlatformRQT);
        magnetic_plot_2->setObjectName(QStringLiteral("magnetic_plot_2"));
        magnetic_plot_2->setGeometry(QRect(340, 540, 341, 231));
        label_4 = new QLabel(MSJPlatformRQT);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 920, 16, 17));
        label_5 = new QLabel(MSJPlatformRQT);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 920, 16, 17));
        label_6 = new QLabel(MSJPlatformRQT);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 920, 16, 17));
        label_7 = new QLabel(MSJPlatformRQT);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(110, 920, 16, 17));
        label_8 = new QLabel(MSJPlatformRQT);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(140, 920, 16, 17));
        label_9 = new QLabel(MSJPlatformRQT);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(170, 920, 16, 17));
        label_10 = new QLabel(MSJPlatformRQT);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(200, 920, 16, 17));
        label_11 = new QLabel(MSJPlatformRQT);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(230, 920, 16, 17));
        top = new QSlider(MSJPlatformRQT);
        top->setObjectName(QStringLiteral("top"));
        top->setGeometry(QRect(350, 780, 29, 131));
        top->setMinimum(-1000);
        top->setMaximum(1000);
        top->setSingleStep(10);
        top->setPageStep(50);
        top->setValue(0);
        top->setSliderPosition(0);
        top->setOrientation(Qt::Vertical);
        top->setTickPosition(QSlider::TicksAbove);
        top->setTickInterval(100);
        bottom = new QSlider(MSJPlatformRQT);
        bottom->setObjectName(QStringLiteral("bottom"));
        bottom->setGeometry(QRect(400, 780, 29, 131));
        bottom->setMinimum(-1000);
        bottom->setMaximum(1000);
        bottom->setSingleStep(10);
        bottom->setPageStep(50);
        bottom->setValue(0);
        bottom->setSliderPosition(0);
        bottom->setOrientation(Qt::Vertical);
        bottom->setTickPosition(QSlider::TicksAbove);
        bottom->setTickInterval(100);
        label_12 = new QLabel(MSJPlatformRQT);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(350, 920, 31, 20));
        label_13 = new QLabel(MSJPlatformRQT);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(390, 920, 61, 20));
        show_magnetic_field = new QPushButton(MSJPlatformRQT);
        show_magnetic_field->setObjectName(QStringLiteral("show_magnetic_field"));
        show_magnetic_field->setGeometry(QRect(480, 790, 171, 27));
        show_magnetic_field->setCheckable(true);
        clear_magnetic_field = new QPushButton(MSJPlatformRQT);
        clear_magnetic_field->setObjectName(QStringLiteral("clear_magnetic_field"));
        clear_magnetic_field->setGeometry(QRect(480, 820, 171, 27));
        joint_space = new QCustomPlot(MSJPlatformRQT);
        joint_space->setObjectName(QStringLiteral("joint_space"));
        joint_space->setGeometry(QRect(680, 80, 341, 461));
        grid_map = new QPushButton(MSJPlatformRQT);
        grid_map->setObjectName(QStringLiteral("grid_map"));
        grid_map->setGeometry(QRect(680, 540, 121, 27));
        grid_map->setCheckable(true);
        zero_pose = new QPushButton(MSJPlatformRQT);
        zero_pose->setObjectName(QStringLiteral("zero_pose"));
        zero_pose->setGeometry(QRect(910, 540, 111, 27));
        zero_pose->setCheckable(true);
        acc = new QPushButton(MSJPlatformRQT);
        acc->setObjectName(QStringLiteral("acc"));
        acc->setGeometry(QRect(680, 770, 71, 27));
        gyro = new QPushButton(MSJPlatformRQT);
        gyro->setObjectName(QStringLiteral("gyro"));
        gyro->setGeometry(QRect(750, 770, 71, 27));
        mag = new QPushButton(MSJPlatformRQT);
        mag->setObjectName(QStringLiteral("mag"));
        mag->setGeometry(QRect(820, 770, 71, 27));
        system = new QPushButton(MSJPlatformRQT);
        system->setObjectName(QStringLiteral("system"));
        system->setGeometry(QRect(890, 770, 131, 27));
        heading = new QPushButton(MSJPlatformRQT);
        heading->setObjectName(QStringLiteral("heading"));
        heading->setGeometry(QRect(800, 540, 111, 27));
        heading->setCheckable(true);
        measure_joint_limits = new QPushButton(MSJPlatformRQT);
        measure_joint_limits->setObjectName(QStringLiteral("measure_joint_limits"));
        measure_joint_limits->setGeometry(QRect(680, 570, 231, 27));
        measure_joint_limits->setCheckable(true);
        speed_axis0 = new QSlider(MSJPlatformRQT);
        speed_axis0->setObjectName(QStringLiteral("speed_axis0"));
        speed_axis0->setGeometry(QRect(690, 600, 20, 111));
        speed_axis0->setValue(20);
        speed_axis0->setOrientation(Qt::Vertical);
        speed_axis1 = new QSlider(MSJPlatformRQT);
        speed_axis1->setObjectName(QStringLiteral("speed_axis1"));
        speed_axis1->setGeometry(QRect(730, 600, 20, 111));
        speed_axis1->setValue(20);
        speed_axis1->setOrientation(Qt::Vertical);
        speed_axis2 = new QSlider(MSJPlatformRQT);
        speed_axis2->setObjectName(QStringLiteral("speed_axis2"));
        speed_axis2->setGeometry(QRect(770, 600, 20, 111));
        speed_axis2->setValue(20);
        speed_axis2->setOrientation(Qt::Vertical);
        grid = new QPushButton(MSJPlatformRQT);
        buttonGroup = new QButtonGroup(MSJPlatformRQT);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(grid);
        grid->setObjectName(QStringLiteral("grid"));
        grid->setGeometry(QRect(790, 600, 61, 27));
        grid->setCheckable(true);
        grid->setChecked(true);
        spiral = new QPushButton(MSJPlatformRQT);
        buttonGroup->addButton(spiral);
        spiral->setObjectName(QStringLiteral("spiral"));
        spiral->setGeometry(QRect(850, 600, 61, 27));
        spiral->setCheckable(true);
        random = new QPushButton(MSJPlatformRQT);
        buttonGroup->addButton(random);
        random->setObjectName(QStringLiteral("random"));
        random->setGeometry(QRect(910, 600, 61, 27));
        random->setCheckable(true);

        retranslateUi(MSJPlatformRQT);

        QMetaObject::connectSlotsByName(MSJPlatformRQT);
    } // setupUi

    void retranslateUi(QWidget *MSJPlatformRQT)
    {
        MSJPlatformRQT->setWindowTitle(QApplication::translate("MSJPlatformRQT", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("MSJPlatformRQT", "fpga", Q_NULLPTR));
        label_2->setText(QApplication::translate("MSJPlatformRQT", "MSJ PLATFORM", Q_NULLPTR));
        motor_0->setText(QString());
        motor_1->setText(QString());
        motor_2->setText(QString());
        motor_3->setText(QString());
        motor_4->setText(QString());
        motor_5->setText(QString());
        motor_6->setText(QString());
        motor_7->setText(QString());
        toggle_all->setText(QApplication::translate("MSJPlatformRQT", "O", Q_NULLPTR));
        label_3->setText(QApplication::translate("MSJPlatformRQT", " 0   1   2    3   4    5   6   7  ", Q_NULLPTR));
        zero->setText(QApplication::translate("MSJPlatformRQT", "zero", Q_NULLPTR));
        stop_button->setText(QApplication::translate("MSJPlatformRQT", "STOP", Q_NULLPTR));
        label_4->setText(QApplication::translate("MSJPlatformRQT", "0", Q_NULLPTR));
        label_5->setText(QApplication::translate("MSJPlatformRQT", "1", Q_NULLPTR));
        label_6->setText(QApplication::translate("MSJPlatformRQT", "2", Q_NULLPTR));
        label_7->setText(QApplication::translate("MSJPlatformRQT", "3", Q_NULLPTR));
        label_8->setText(QApplication::translate("MSJPlatformRQT", "4", Q_NULLPTR));
        label_9->setText(QApplication::translate("MSJPlatformRQT", "5", Q_NULLPTR));
        label_10->setText(QApplication::translate("MSJPlatformRQT", "6", Q_NULLPTR));
        label_11->setText(QApplication::translate("MSJPlatformRQT", "7", Q_NULLPTR));
        label_12->setText(QApplication::translate("MSJPlatformRQT", "top", Q_NULLPTR));
        label_13->setText(QApplication::translate("MSJPlatformRQT", "bottom", Q_NULLPTR));
        show_magnetic_field->setText(QApplication::translate("MSJPlatformRQT", "show magnetic field", Q_NULLPTR));
        clear_magnetic_field->setText(QApplication::translate("MSJPlatformRQT", "clear magnetic field", Q_NULLPTR));
        grid_map->setText(QApplication::translate("MSJPlatformRQT", "grid map", Q_NULLPTR));
        zero_pose->setText(QApplication::translate("MSJPlatformRQT", "zero pose", Q_NULLPTR));
        acc->setText(QApplication::translate("MSJPlatformRQT", "acc", Q_NULLPTR));
        gyro->setText(QApplication::translate("MSJPlatformRQT", "gyro", Q_NULLPTR));
        mag->setText(QApplication::translate("MSJPlatformRQT", "mag", Q_NULLPTR));
        system->setText(QApplication::translate("MSJPlatformRQT", "system", Q_NULLPTR));
        heading->setText(QApplication::translate("MSJPlatformRQT", "heading", Q_NULLPTR));
        measure_joint_limits->setText(QApplication::translate("MSJPlatformRQT", "measure joint limits", Q_NULLPTR));
        grid->setText(QApplication::translate("MSJPlatformRQT", "grid", Q_NULLPTR));
        spiral->setText(QApplication::translate("MSJPlatformRQT", "spiral", Q_NULLPTR));
        random->setText(QApplication::translate("MSJPlatformRQT", "random", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MSJPlatformRQT: public Ui_MSJPlatformRQT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MSJ_PLATFORM_RQT_H
