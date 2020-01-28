/********************************************************************************
** Form generated from reading UI file 'motor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTOR_H
#define UI_MOTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_motor
{
public:
    QFrame *frame;
    QLabel *muscleType;
    QCustomPlot *current;
    QCustomPlot *displacement;
    QCustomPlot *encoder0_pos;
    QLabel *globalID;
    QLabel *icebus;
    QCustomPlot *encoder1_pos;
    QLabel *icebusID;
    QSlider *setpoint_slider;
    QFrame *frame_2;
    QLabel *label;
    QLineEdit *Kp;
    QPushButton *Kp_increase;
    QPushButton *Kp_decrease;
    QFrame *frame_3;
    QLabel *label_3;
    QLineEdit *Ki;
    QPushButton *Ki_increase;
    QPushButton *Ki_decrease;
    QFrame *frame_4;
    QLabel *label_4;
    QLineEdit *Kd;
    QPushButton *Kd_increase;
    QPushButton *Kd_decrease;
    QSpinBox *control_mode;
    QLabel *label_5;
    QLineEdit *control_mode_text;

    void setupUi(QWidget *motor)
    {
        if (motor->objectName().isEmpty())
            motor->setObjectName(QStringLiteral("motor"));
        motor->resize(1381, 251);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(motor->sizePolicy().hasHeightForWidth());
        motor->setSizePolicy(sizePolicy);
        frame = new QFrame(motor);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 1381, 251));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        muscleType = new QLabel(frame);
        muscleType->setObjectName(QStringLiteral("muscleType"));
        muscleType->setGeometry(QRect(0, 70, 111, 17));
        current = new QCustomPlot(frame);
        current->setObjectName(QStringLiteral("current"));
        current->setGeometry(QRect(800, 0, 231, 251));
        displacement = new QCustomPlot(frame);
        displacement->setObjectName(QStringLiteral("displacement"));
        displacement->setGeometry(QRect(570, 0, 231, 251));
        encoder0_pos = new QCustomPlot(frame);
        encoder0_pos->setObjectName(QStringLiteral("encoder0_pos"));
        encoder0_pos->setGeometry(QRect(110, 0, 231, 251));
        globalID = new QLabel(frame);
        globalID->setObjectName(QStringLiteral("globalID"));
        globalID->setGeometry(QRect(0, 10, 111, 17));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Mono"));
        font.setBold(true);
        font.setWeight(75);
        globalID->setFont(font);
        icebus = new QLabel(frame);
        icebus->setObjectName(QStringLiteral("icebus"));
        icebus->setGeometry(QRect(0, 30, 111, 17));
        icebus->setFont(font);
        encoder1_pos = new QCustomPlot(frame);
        encoder1_pos->setObjectName(QStringLiteral("encoder1_pos"));
        encoder1_pos->setGeometry(QRect(340, 0, 231, 251));
        icebusID = new QLabel(frame);
        icebusID->setObjectName(QStringLiteral("icebusID"));
        icebusID->setGeometry(QRect(0, 50, 111, 17));
        icebusID->setFont(font);
        setpoint_slider = new QSlider(frame);
        setpoint_slider->setObjectName(QStringLiteral("setpoint_slider"));
        setpoint_slider->setGeometry(QRect(1050, 0, 51, 251));
        setpoint_slider->setStyleSheet(QLatin1String("QSlider::groove:vertical {\n"
"border: 1px solid #bbb;\n"
"background: white;\n"
"height: 251px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"background: qlineargradient(x1: 0, y1: 0,    x2: 0, y2: 1,\n"
"    stop: 0 #66e, stop: 1 #bbf);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #bbf, stop: 1 #55f);\n"
"border: 1px solid #777;\n"
"width: 10px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical {\n"
"background: #fff;\n"
"border: 1px solid #777;\n"
"width: 10px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"    stop:0 #eee, stop:1 #ccc);\n"
"border: 1px solid #777;\n"
"height: 45px;\n"
"margin-right: 2px;\n"
"margin-left: 2px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover {\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"    stop:0 #fff, stop:1 #ddd);\n"
"border: 1px solid #444;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSl"
                        "ider::sub-page:vertical:disabled {\n"
"background: #bbb;\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:vertical:disabled {\n"
"background: #eee;\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:vertical:disabled {\n"
"background: #eee;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        setpoint_slider->setMaximum(101);
        setpoint_slider->setSliderPosition(50);
        setpoint_slider->setOrientation(Qt::Vertical);
        setpoint_slider->setInvertedAppearance(false);
        setpoint_slider->setInvertedControls(false);
        setpoint_slider->setTickPosition(QSlider::TicksAbove);
        setpoint_slider->setTickInterval(10);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(1110, 40, 127, 32));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 1, 31, 30));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        Kp = new QLineEdit(frame_2);
        Kp->setObjectName(QStringLiteral("Kp"));
        Kp->setGeometry(QRect(30, 1, 81, 30));
        Kp->setFont(font1);
        Kp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Kp_increase = new QPushButton(frame_2);
        Kp_increase->setObjectName(QStringLiteral("Kp_increase"));
        Kp_increase->setGeometry(QRect(110, 1, 15, 15));
        Kp_decrease = new QPushButton(frame_2);
        Kp_decrease->setObjectName(QStringLiteral("Kp_decrease"));
        Kp_decrease->setGeometry(QRect(110, 16, 15, 15));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(1110, 70, 127, 32));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 1, 31, 30));
        label_3->setFont(font1);
        Ki = new QLineEdit(frame_3);
        Ki->setObjectName(QStringLiteral("Ki"));
        Ki->setGeometry(QRect(30, 1, 81, 30));
        Ki->setFont(font1);
        Ki->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Ki_increase = new QPushButton(frame_3);
        Ki_increase->setObjectName(QStringLiteral("Ki_increase"));
        Ki_increase->setGeometry(QRect(110, 1, 15, 15));
        Ki_decrease = new QPushButton(frame_3);
        Ki_decrease->setObjectName(QStringLiteral("Ki_decrease"));
        Ki_decrease->setGeometry(QRect(110, 16, 15, 15));
        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(1110, 100, 127, 32));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 1, 31, 30));
        label_4->setFont(font1);
        Kd = new QLineEdit(frame_4);
        Kd->setObjectName(QStringLiteral("Kd"));
        Kd->setGeometry(QRect(30, 1, 81, 30));
        Kd->setFont(font1);
        Kd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Kd_increase = new QPushButton(frame_4);
        Kd_increase->setObjectName(QStringLiteral("Kd_increase"));
        Kd_increase->setGeometry(QRect(110, 1, 15, 15));
        Kd_decrease = new QPushButton(frame_4);
        Kd_decrease->setObjectName(QStringLiteral("Kd_decrease"));
        Kd_decrease->setGeometry(QRect(110, 16, 15, 15));
        control_mode = new QSpinBox(frame);
        control_mode->setObjectName(QStringLiteral("control_mode"));
        control_mode->setGeometry(QRect(1230, 0, 48, 26));
        QFont font2;
        font2.setPointSize(13);
        control_mode->setFont(font2);
        control_mode->setMaximum(3);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(1110, -3, 121, 30));
        label_5->setFont(font1);
        control_mode_text = new QLineEdit(frame);
        control_mode_text->setObjectName(QStringLiteral("control_mode_text"));
        control_mode_text->setGeometry(QRect(1280, 0, 101, 26));
        control_mode_text->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(motor);

        QMetaObject::connectSlotsByName(motor);
    } // setupUi

    void retranslateUi(QWidget *motor)
    {
        motor->setWindowTitle(QApplication::translate("motor", "Form", Q_NULLPTR));
        muscleType->setText(QApplication::translate("motor", "muscleType", Q_NULLPTR));
        globalID->setText(QApplication::translate("motor", "global ID: ", Q_NULLPTR));
        icebus->setText(QApplication::translate("motor", "icebus:", Q_NULLPTR));
        icebusID->setText(QApplication::translate("motor", "icebus_ID:", Q_NULLPTR));
        label->setText(QApplication::translate("motor", "Kp", Q_NULLPTR));
        Kp->setText(QApplication::translate("motor", "1", Q_NULLPTR));
        Kp_increase->setText(QString());
        Kp_decrease->setText(QString());
        label_3->setText(QApplication::translate("motor", "Ki", Q_NULLPTR));
        Ki->setText(QApplication::translate("motor", "0", Q_NULLPTR));
        Ki_increase->setText(QString());
        Ki_decrease->setText(QString());
        label_4->setText(QApplication::translate("motor", "Kd", Q_NULLPTR));
        Kd->setText(QApplication::translate("motor", "0", Q_NULLPTR));
        Kd_increase->setText(QString());
        Kd_decrease->setText(QString());
        label_5->setText(QApplication::translate("motor", "control mode", Q_NULLPTR));
        control_mode_text->setText(QApplication::translate("motor", "encoder0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class motor: public Ui_motor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTOR_H
