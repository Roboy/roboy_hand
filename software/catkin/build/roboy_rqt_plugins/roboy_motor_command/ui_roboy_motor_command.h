/********************************************************************************
** Form generated from reading UI file 'roboy_motor_command.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOY_MOTOR_COMMAND_H
#define UI_ROBOY_MOTOR_COMMAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RoboyMotorCommand
{
public:
    QLabel *label_2;
    QPushButton *stop_button_all;
    QFrame *frame_15;
    QLabel *name_15;
    QSlider *motor_setPoint_slider_all;
    QLineEdit *motor_setPoint_all;
    QLabel *scale_15;
    QLineEdit *motor_scale;
    QRadioButton *pos;
    QRadioButton *vel;
    QRadioButton *dis;
    QLineEdit *motor_config_path;
    QPushButton *load_motor_config;
    QRadioButton *force;
    QScrollArea *motor_command;
    QWidget *scrollAreaWidgetContents;
    QFrame *frame;
    QLabel *label_3;
    QLineEdit *Kp;
    QLabel *name_16;
    QLabel *name_17;
    QLineEdit *Kd;
    QLineEdit *Ki;
    QLabel *name_18;
    QLabel *name_19;
    QLineEdit *forwardGain;
    QLineEdit *deadband;
    QLabel *name_20;
    QPushButton *update_config;
    QLabel *name_26;
    QLineEdit *outputPosMax;
    QLabel *name_27;
    QLineEdit *outputNegMax;
    QLineEdit *integralNegMax;
    QLabel *name_30;
    QLineEdit *integralPosMax;
    QLabel *name_31;
    QLabel *name_29;
    QLineEdit *spPosMax;
    QLabel *name_28;
    QLineEdit *spNegMax;
    QRadioButton *dis_motor_config;
    QRadioButton *vel_motor_config;
    QRadioButton *pos_motor_config;
    QLabel *name_21;
    QLineEdit *outputDivider;
    QRadioButton *cur_motor_config;
    QRadioButton *dir_motor_config;
    QSpinBox *fpga;
    QRadioButton *direct;
    QLabel *fpga_name;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QWidget *RoboyMotorCommand)
    {
        if (RoboyMotorCommand->objectName().isEmpty())
            RoboyMotorCommand->setObjectName(QStringLiteral("RoboyMotorCommand"));
        RoboyMotorCommand->resize(887, 778);
        label_2 = new QLabel(RoboyMotorCommand);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 161, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_2->setFont(font);
        stop_button_all = new QPushButton(RoboyMotorCommand);
        stop_button_all->setObjectName(QStringLiteral("stop_button_all"));
        stop_button_all->setGeometry(QRect(10, 700, 561, 71));
        stop_button_all->setCheckable(true);
        frame_15 = new QFrame(RoboyMotorCommand);
        frame_15->setObjectName(QStringLiteral("frame_15"));
        frame_15->setGeometry(QRect(0, 460, 581, 31));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        name_15 = new QLabel(frame_15);
        name_15->setObjectName(QStringLiteral("name_15"));
        name_15->setGeometry(QRect(10, 0, 71, 31));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        name_15->setFont(font1);
        motor_setPoint_slider_all = new QSlider(frame_15);
        motor_setPoint_slider_all->setObjectName(QStringLiteral("motor_setPoint_slider_all"));
        motor_setPoint_slider_all->setGeometry(QRect(80, 0, 201, 31));
        motor_setPoint_slider_all->setMinimum(0);
        motor_setPoint_slider_all->setMaximum(100);
        motor_setPoint_slider_all->setValue(50);
        motor_setPoint_slider_all->setOrientation(Qt::Horizontal);
        motor_setPoint_slider_all->setTickPosition(QSlider::TicksBelow);
        motor_setPoint_slider_all->setTickInterval(10);
        motor_setPoint_all = new QLineEdit(frame_15);
        motor_setPoint_all->setObjectName(QStringLiteral("motor_setPoint_all"));
        motor_setPoint_all->setGeometry(QRect(280, 0, 113, 30));
        motor_setPoint_all->setReadOnly(false);
        scale_15 = new QLabel(frame_15);
        scale_15->setObjectName(QStringLiteral("scale_15"));
        scale_15->setGeometry(QRect(400, 0, 41, 31));
        scale_15->setFont(font1);
        motor_scale = new QLineEdit(frame_15);
        motor_scale->setObjectName(QStringLiteral("motor_scale"));
        motor_scale->setGeometry(QRect(450, 0, 113, 30));
        motor_scale->setReadOnly(false);
        pos = new QRadioButton(RoboyMotorCommand);
        buttonGroup = new QButtonGroup(RoboyMotorCommand);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(pos);
        pos->setObjectName(QStringLiteral("pos"));
        pos->setGeometry(QRect(360, 0, 51, 31));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        pos->setFont(font2);
        vel = new QRadioButton(RoboyMotorCommand);
        buttonGroup->addButton(vel);
        vel->setObjectName(QStringLiteral("vel"));
        vel->setGeometry(QRect(410, 0, 41, 31));
        vel->setFont(font2);
        dis = new QRadioButton(RoboyMotorCommand);
        buttonGroup->addButton(dis);
        dis->setObjectName(QStringLiteral("dis"));
        dis->setGeometry(QRect(460, 0, 41, 31));
        dis->setFont(font2);
        dis->setChecked(true);
        motor_config_path = new QLineEdit(RoboyMotorCommand);
        motor_config_path->setObjectName(QStringLiteral("motor_config_path"));
        motor_config_path->setGeometry(QRect(10, 670, 421, 30));
        motor_config_path->setReadOnly(false);
        load_motor_config = new QPushButton(RoboyMotorCommand);
        load_motor_config->setObjectName(QStringLiteral("load_motor_config"));
        load_motor_config->setGeometry(QRect(438, 670, 131, 31));
        force = new QRadioButton(RoboyMotorCommand);
        buttonGroup->addButton(force);
        force->setObjectName(QStringLiteral("force"));
        force->setGeometry(QRect(510, 0, 61, 31));
        force->setFont(font2);
        force->setChecked(false);
        motor_command = new QScrollArea(RoboyMotorCommand);
        motor_command->setObjectName(QStringLiteral("motor_command"));
        motor_command->setGeometry(QRect(0, 30, 881, 421));
        motor_command->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 879, 419));
        motor_command->setWidget(scrollAreaWidgetContents);
        frame = new QFrame(RoboyMotorCommand);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 490, 581, 171));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 131, 31));
        label_3->setFont(font);
        Kp = new QLineEdit(frame);
        Kp->setObjectName(QStringLiteral("Kp"));
        Kp->setGeometry(QRect(100, 40, 41, 31));
        name_16 = new QLabel(frame);
        name_16->setObjectName(QStringLiteral("name_16"));
        name_16->setGeometry(QRect(10, 40, 21, 31));
        name_16->setFont(font1);
        name_17 = new QLabel(frame);
        name_17->setObjectName(QStringLiteral("name_17"));
        name_17->setGeometry(QRect(10, 70, 21, 31));
        name_17->setFont(font1);
        Kd = new QLineEdit(frame);
        Kd->setObjectName(QStringLiteral("Kd"));
        Kd->setGeometry(QRect(100, 70, 41, 31));
        Ki = new QLineEdit(frame);
        Ki->setObjectName(QStringLiteral("Ki"));
        Ki->setGeometry(QRect(100, 100, 41, 31));
        name_18 = new QLabel(frame);
        name_18->setObjectName(QStringLiteral("name_18"));
        name_18->setGeometry(QRect(10, 100, 21, 31));
        name_18->setFont(font1);
        name_19 = new QLabel(frame);
        name_19->setObjectName(QStringLiteral("name_19"));
        name_19->setGeometry(QRect(10, 130, 91, 31));
        name_19->setFont(font1);
        forwardGain = new QLineEdit(frame);
        forwardGain->setObjectName(QStringLiteral("forwardGain"));
        forwardGain->setGeometry(QRect(100, 130, 41, 31));
        deadband = new QLineEdit(frame);
        deadband->setObjectName(QStringLiteral("deadband"));
        deadband->setGeometry(QRect(530, 70, 41, 31));
        name_20 = new QLabel(frame);
        name_20->setObjectName(QStringLiteral("name_20"));
        name_20->setGeometry(QRect(450, 70, 71, 31));
        name_20->setFont(font1);
        update_config = new QPushButton(frame);
        update_config->setObjectName(QStringLiteral("update_config"));
        update_config->setGeometry(QRect(440, 0, 131, 41));
        name_26 = new QLabel(frame);
        name_26->setObjectName(QStringLiteral("name_26"));
        name_26->setGeometry(QRect(400, 100, 101, 31));
        name_26->setFont(font1);
        outputPosMax = new QLineEdit(frame);
        outputPosMax->setObjectName(QStringLiteral("outputPosMax"));
        outputPosMax->setGeometry(QRect(520, 100, 51, 31));
        name_27 = new QLabel(frame);
        name_27->setObjectName(QStringLiteral("name_27"));
        name_27->setGeometry(QRect(400, 130, 111, 31));
        name_27->setFont(font1);
        outputNegMax = new QLineEdit(frame);
        outputNegMax->setObjectName(QStringLiteral("outputNegMax"));
        outputNegMax->setGeometry(QRect(520, 130, 51, 31));
        integralNegMax = new QLineEdit(frame);
        integralNegMax->setObjectName(QStringLiteral("integralNegMax"));
        integralNegMax->setGeometry(QRect(320, 130, 51, 31));
        name_30 = new QLabel(frame);
        name_30->setObjectName(QStringLiteral("name_30"));
        name_30->setGeometry(QRect(200, 100, 111, 31));
        name_30->setFont(font1);
        integralPosMax = new QLineEdit(frame);
        integralPosMax->setObjectName(QStringLiteral("integralPosMax"));
        integralPosMax->setGeometry(QRect(320, 100, 51, 31));
        name_31 = new QLabel(frame);
        name_31->setObjectName(QStringLiteral("name_31"));
        name_31->setGeometry(QRect(200, 130, 111, 31));
        name_31->setFont(font1);
        name_29 = new QLabel(frame);
        name_29->setObjectName(QStringLiteral("name_29"));
        name_29->setGeometry(QRect(210, 70, 81, 31));
        name_29->setFont(font1);
        spPosMax = new QLineEdit(frame);
        spPosMax->setObjectName(QStringLiteral("spPosMax"));
        spPosMax->setGeometry(QRect(290, 40, 81, 31));
        name_28 = new QLabel(frame);
        name_28->setObjectName(QStringLiteral("name_28"));
        name_28->setGeometry(QRect(210, 40, 81, 31));
        name_28->setFont(font1);
        spNegMax = new QLineEdit(frame);
        spNegMax->setObjectName(QStringLiteral("spNegMax"));
        spNegMax->setGeometry(QRect(290, 70, 81, 31));
        dis_motor_config = new QRadioButton(frame);
        buttonGroup_2 = new QButtonGroup(RoboyMotorCommand);
        buttonGroup_2->setObjectName(QStringLiteral("buttonGroup_2"));
        buttonGroup_2->addButton(dis_motor_config);
        dis_motor_config->setObjectName(QStringLiteral("dis_motor_config"));
        dis_motor_config->setGeometry(QRect(240, 0, 41, 31));
        dis_motor_config->setFont(font2);
        dis_motor_config->setChecked(false);
        vel_motor_config = new QRadioButton(frame);
        buttonGroup_2->addButton(vel_motor_config);
        vel_motor_config->setObjectName(QStringLiteral("vel_motor_config"));
        vel_motor_config->setGeometry(QRect(190, 0, 51, 31));
        vel_motor_config->setFont(font2);
        pos_motor_config = new QRadioButton(frame);
        buttonGroup_2->addButton(pos_motor_config);
        pos_motor_config->setObjectName(QStringLiteral("pos_motor_config"));
        pos_motor_config->setGeometry(QRect(140, 0, 51, 31));
        pos_motor_config->setFont(font2);
        pos_motor_config->setChecked(true);
        name_21 = new QLabel(frame);
        name_21->setObjectName(QStringLiteral("name_21"));
        name_21->setGeometry(QRect(420, 40, 101, 31));
        name_21->setFont(font1);
        outputDivider = new QLineEdit(frame);
        outputDivider->setObjectName(QStringLiteral("outputDivider"));
        outputDivider->setGeometry(QRect(530, 40, 41, 31));
        cur_motor_config = new QRadioButton(frame);
        buttonGroup_2->addButton(cur_motor_config);
        cur_motor_config->setObjectName(QStringLiteral("cur_motor_config"));
        cur_motor_config->setGeometry(QRect(290, 0, 81, 31));
        cur_motor_config->setFont(font2);
        dir_motor_config = new QRadioButton(frame);
        buttonGroup_2->addButton(dir_motor_config);
        dir_motor_config->setObjectName(QStringLiteral("dir_motor_config"));
        dir_motor_config->setGeometry(QRect(370, 0, 71, 31));
        dir_motor_config->setFont(font2);
        fpga = new QSpinBox(RoboyMotorCommand);
        fpga->setObjectName(QStringLiteral("fpga"));
        fpga->setGeometry(QRect(157, 0, 41, 27));
        fpga->setMinimum(3);
        fpga->setMaximum(6);
        direct = new QRadioButton(RoboyMotorCommand);
        buttonGroup->addButton(direct);
        direct->setObjectName(QStringLiteral("direct"));
        direct->setGeometry(QRect(580, 0, 71, 31));
        direct->setFont(font2);
        direct->setChecked(false);
        fpga_name = new QLabel(RoboyMotorCommand);
        fpga_name->setObjectName(QStringLiteral("fpga_name"));
        fpga_name->setGeometry(QRect(210, 0, 131, 31));
        QFont font3;
        font3.setPointSize(12);
        fpga_name->setFont(font3);

        retranslateUi(RoboyMotorCommand);

        QMetaObject::connectSlotsByName(RoboyMotorCommand);
    } // setupUi

    void retranslateUi(QWidget *RoboyMotorCommand)
    {
        RoboyMotorCommand->setWindowTitle(QApplication::translate("RoboyMotorCommand", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("RoboyMotorCommand", "MOTOR COMMAND", Q_NULLPTR));
        stop_button_all->setText(QApplication::translate("RoboyMotorCommand", "STOP", Q_NULLPTR));
        name_15->setText(QApplication::translate("RoboyMotorCommand", "all motors", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        motor_setPoint_slider_all->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        motor_setPoint_all->setText(QString());
        scale_15->setText(QApplication::translate("RoboyMotorCommand", "scale", Q_NULLPTR));
        motor_scale->setText(QApplication::translate("RoboyMotorCommand", "1", Q_NULLPTR));
        pos->setText(QApplication::translate("RoboyMotorCommand", "pos", Q_NULLPTR));
        vel->setText(QApplication::translate("RoboyMotorCommand", "vel", Q_NULLPTR));
        dis->setText(QApplication::translate("RoboyMotorCommand", "dis", Q_NULLPTR));
        motor_config_path->setText(QApplication::translate("RoboyMotorCommand", "/home/roboy/workspace/roboy_control/src/roboy_rqt_plugins/roboy_motor_calibration/config/roboy.yaml", Q_NULLPTR));
        load_motor_config->setText(QApplication::translate("RoboyMotorCommand", "load config", Q_NULLPTR));
        force->setText(QApplication::translate("RoboyMotorCommand", "force", Q_NULLPTR));
        label_3->setText(QApplication::translate("RoboyMotorCommand", "MOTOR CONFIG", Q_NULLPTR));
        Kp->setText(QApplication::translate("RoboyMotorCommand", "1", Q_NULLPTR));
        name_16->setText(QApplication::translate("RoboyMotorCommand", "Kp", Q_NULLPTR));
        name_17->setText(QApplication::translate("RoboyMotorCommand", "Kd", Q_NULLPTR));
        Kd->setText(QApplication::translate("RoboyMotorCommand", "0", Q_NULLPTR));
        Ki->setText(QApplication::translate("RoboyMotorCommand", "0", Q_NULLPTR));
        name_18->setText(QApplication::translate("RoboyMotorCommand", "Ki", Q_NULLPTR));
        name_19->setText(QApplication::translate("RoboyMotorCommand", "forwardGain", Q_NULLPTR));
        forwardGain->setText(QApplication::translate("RoboyMotorCommand", "0", Q_NULLPTR));
        deadband->setText(QApplication::translate("RoboyMotorCommand", "0", Q_NULLPTR));
        name_20->setText(QApplication::translate("RoboyMotorCommand", "deadband", Q_NULLPTR));
        update_config->setText(QApplication::translate("RoboyMotorCommand", "update config", Q_NULLPTR));
        name_26->setText(QApplication::translate("RoboyMotorCommand", "outputPosMax", Q_NULLPTR));
        outputPosMax->setText(QApplication::translate("RoboyMotorCommand", "1000", Q_NULLPTR));
        name_27->setText(QApplication::translate("RoboyMotorCommand", "outputNegMax", Q_NULLPTR));
        outputNegMax->setText(QApplication::translate("RoboyMotorCommand", "-1000", Q_NULLPTR));
        integralNegMax->setText(QApplication::translate("RoboyMotorCommand", "-1000", Q_NULLPTR));
        name_30->setText(QApplication::translate("RoboyMotorCommand", "integralPosMax", Q_NULLPTR));
        integralPosMax->setText(QApplication::translate("RoboyMotorCommand", "1000", Q_NULLPTR));
        name_31->setText(QApplication::translate("RoboyMotorCommand", "integralNegMax", Q_NULLPTR));
        name_29->setText(QApplication::translate("RoboyMotorCommand", "spNegMax", Q_NULLPTR));
        spPosMax->setText(QApplication::translate("RoboyMotorCommand", "1000000", Q_NULLPTR));
        name_28->setText(QApplication::translate("RoboyMotorCommand", "spPosMax", Q_NULLPTR));
        spNegMax->setText(QApplication::translate("RoboyMotorCommand", "-1000000", Q_NULLPTR));
        dis_motor_config->setText(QApplication::translate("RoboyMotorCommand", "dis", Q_NULLPTR));
        vel_motor_config->setText(QApplication::translate("RoboyMotorCommand", "vel", Q_NULLPTR));
        pos_motor_config->setText(QApplication::translate("RoboyMotorCommand", "pos", Q_NULLPTR));
        name_21->setText(QApplication::translate("RoboyMotorCommand", "outputDivider", Q_NULLPTR));
        outputDivider->setText(QApplication::translate("RoboyMotorCommand", "5", Q_NULLPTR));
        cur_motor_config->setText(QApplication::translate("RoboyMotorCommand", "current", Q_NULLPTR));
        dir_motor_config->setText(QApplication::translate("RoboyMotorCommand", "direct", Q_NULLPTR));
        direct->setText(QApplication::translate("RoboyMotorCommand", "direct", Q_NULLPTR));
        fpga_name->setText(QApplication::translate("RoboyMotorCommand", "shoulder_left", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RoboyMotorCommand: public Ui_RoboyMotorCommand {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOY_MOTOR_COMMAND_H
