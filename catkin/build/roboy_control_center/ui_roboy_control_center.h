/********************************************************************************
** Form generated from reading UI file 'roboy_control_center.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOY_CONTROL_CENTER_H
#define UI_ROBOY_CONTROL_CENTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_RoboyControlCenter
{
public:
    QLabel *label_2;
    QPushButton *stop_button_all;
    QTabWidget *tabs;
    QWidget *tab;
    QScrollArea *icebus;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_3;
    QWidget *tab_2;
    QScrollArea *motor;
    QWidget *scrollAreaWidgetContents_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *tab_3;
    QScrollArea *body_part_control;
    QWidget *scrollAreaWidgetContents_4;
    QWidget *plot_widget;
    QCustomPlot *plot;
    QScrollArea *quick_access;
    QWidget *scrollAreaWidgetContents_2;
    QFrame *frame_4;
    QLabel *label_10;
    QLineEdit *Kd;
    QPushButton *Kd_increase;
    QPushButton *Kd_decrease;
    QFrame *frame_2;
    QLabel *label;
    QLineEdit *Kp;
    QPushButton *Kp_increase;
    QPushButton *Kp_decrease;
    QFrame *frame_3;
    QLabel *label_8;
    QLineEdit *Ki;
    QPushButton *Ki_increase;
    QPushButton *Ki_decrease;
    QLabel *label_9;
    QLineEdit *control_mode_text;
    QSpinBox *control_mode;

    void setupUi(QWidget *RoboyControlCenter)
    {
        if (RoboyControlCenter->objectName().isEmpty())
            RoboyControlCenter->setObjectName(QStringLiteral("RoboyControlCenter"));
        RoboyControlCenter->resize(1647, 1063);
        label_2 = new QLabel(RoboyControlCenter);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 0, 321, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_2->setFont(font);
        stop_button_all = new QPushButton(RoboyControlCenter);
        stop_button_all->setObjectName(QStringLiteral("stop_button_all"));
        stop_button_all->setGeometry(QRect(10, 710, 561, 71));
        stop_button_all->setCheckable(true);
        tabs = new QTabWidget(RoboyControlCenter);
        tabs->setObjectName(QStringLiteral("tabs"));
        tabs->setGeometry(QRect(10, 30, 1201, 679));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        icebus = new QScrollArea(tab);
        icebus->setObjectName(QStringLiteral("icebus"));
        icebus->setGeometry(QRect(0, 50, 1197, 600));
        icebus->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1195, 598));
        icebus->setWidget(scrollAreaWidgetContents);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 321, 31));
        label_3->setFont(font);
        tabs->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        motor = new QScrollArea(tab_2);
        motor->setObjectName(QStringLiteral("motor"));
        motor->setGeometry(QRect(0, 47, 1197, 600));
        motor->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 1195, 598));
        motor->setWidget(scrollAreaWidgetContents_3);
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(180, 10, 171, 31));
        label_4->setFont(font);
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(420, 10, 171, 31));
        label_5->setFont(font);
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(650, 10, 171, 31));
        label_6->setFont(font);
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(880, 10, 171, 31));
        label_7->setFont(font);
        tabs->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        body_part_control = new QScrollArea(tab_3);
        body_part_control->setObjectName(QStringLiteral("body_part_control"));
        body_part_control->setGeometry(QRect(0, 0, 1197, 647));
        body_part_control->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 1195, 645));
        body_part_control->setWidget(scrollAreaWidgetContents_4);
        tabs->addTab(tab_3, QString());
        plot_widget = new QWidget();
        plot_widget->setObjectName(QStringLiteral("plot_widget"));
        plot = new QCustomPlot(plot_widget);
        plot->setObjectName(QStringLiteral("plot"));
        plot->setGeometry(QRect(0, 0, 1197, 645));
        tabs->addTab(plot_widget, QString());
        quick_access = new QScrollArea(RoboyControlCenter);
        quick_access->setObjectName(QStringLiteral("quick_access"));
        quick_access->setGeometry(QRect(1210, 57, 273, 651));
        quick_access->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 271, 649));
        frame_4 = new QFrame(scrollAreaWidgetContents_2);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(0, 103, 127, 32));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_10 = new QLabel(frame_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 1, 31, 30));
        QFont font1;
        font1.setPointSize(14);
        label_10->setFont(font1);
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
        frame_2 = new QFrame(scrollAreaWidgetContents_2);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 43, 127, 32));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 1, 31, 30));
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
        frame_3 = new QFrame(scrollAreaWidgetContents_2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 73, 127, 32));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(frame_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 1, 31, 30));
        label_8->setFont(font1);
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
        label_9 = new QLabel(scrollAreaWidgetContents_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 0, 121, 30));
        label_9->setFont(font1);
        control_mode_text = new QLineEdit(scrollAreaWidgetContents_2);
        control_mode_text->setObjectName(QStringLiteral("control_mode_text"));
        control_mode_text->setGeometry(QRect(170, 3, 101, 26));
        control_mode_text->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        control_mode = new QSpinBox(scrollAreaWidgetContents_2);
        control_mode->setObjectName(QStringLiteral("control_mode"));
        control_mode->setGeometry(QRect(120, 3, 48, 26));
        QFont font2;
        font2.setPointSize(13);
        control_mode->setFont(font2);
        control_mode->setMaximum(3);
        quick_access->setWidget(scrollAreaWidgetContents_2);
        QWidget::setTabOrder(tabs, quick_access);
        QWidget::setTabOrder(quick_access, stop_button_all);
        QWidget::setTabOrder(stop_button_all, icebus);

        retranslateUi(RoboyControlCenter);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RoboyControlCenter);
    } // setupUi

    void retranslateUi(QWidget *RoboyControlCenter)
    {
        RoboyControlCenter->setWindowTitle(QApplication::translate("RoboyControlCenter", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("RoboyControlCenter", "ROBOY CONTROL CENTER", Q_NULLPTR));
        stop_button_all->setText(QApplication::translate("RoboyControlCenter", "STOP", Q_NULLPTR));
        label_3->setText(QApplication::translate("RoboyControlCenter", "COMMUNICATION QUALITY", Q_NULLPTR));
        tabs->setTabText(tabs->indexOf(tab), QApplication::translate("RoboyControlCenter", "icebus", Q_NULLPTR));
        label_4->setText(QApplication::translate("RoboyControlCenter", "ENCODER0_POS", Q_NULLPTR));
        label_5->setText(QApplication::translate("RoboyControlCenter", "ENCODER1_POS", Q_NULLPTR));
        label_6->setText(QApplication::translate("RoboyControlCenter", "DISPLACEMENT", Q_NULLPTR));
        label_7->setText(QApplication::translate("RoboyControlCenter", "CURRENT", Q_NULLPTR));
        tabs->setTabText(tabs->indexOf(tab_2), QApplication::translate("RoboyControlCenter", "motors", Q_NULLPTR));
        tabs->setTabText(tabs->indexOf(tab_3), QApplication::translate("RoboyControlCenter", "body part control", Q_NULLPTR));
        tabs->setTabText(tabs->indexOf(plot_widget), QApplication::translate("RoboyControlCenter", "plot", Q_NULLPTR));
        label_10->setText(QApplication::translate("RoboyControlCenter", "Kd", Q_NULLPTR));
        Kd->setText(QApplication::translate("RoboyControlCenter", "0", Q_NULLPTR));
        Kd_increase->setText(QString());
        Kd_decrease->setText(QString());
        label->setText(QApplication::translate("RoboyControlCenter", "Kp", Q_NULLPTR));
        Kp->setText(QApplication::translate("RoboyControlCenter", "1", Q_NULLPTR));
        Kp_increase->setText(QString());
        Kp_decrease->setText(QString());
        label_8->setText(QApplication::translate("RoboyControlCenter", "Ki", Q_NULLPTR));
        Ki->setText(QApplication::translate("RoboyControlCenter", "0", Q_NULLPTR));
        Ki_increase->setText(QString());
        Ki_decrease->setText(QString());
        label_9->setText(QApplication::translate("RoboyControlCenter", "control mode", Q_NULLPTR));
        control_mode_text->setText(QApplication::translate("RoboyControlCenter", "encoder0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RoboyControlCenter: public Ui_RoboyControlCenter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOY_CONTROL_CENTER_H
