/********************************************************************************
** Form generated from reading UI file 'body_part.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BODY_PART_H
#define UI_BODY_PART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_body_part
{
public:
    QFrame *frame;
    QLabel *body_part_name;
    QPushButton *play;
    QPushButton *record;
    QPushButton *stop;
    QPushButton *pause;
    QLabel *label;

    void setupUi(QWidget *body_part)
    {
        if (body_part->objectName().isEmpty())
            body_part->setObjectName(QStringLiteral("body_part"));
        body_part->resize(1324, 1234);
        frame = new QFrame(body_part);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 120, 891, 91));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        body_part_name = new QLabel(frame);
        body_part_name->setObjectName(QStringLiteral("body_part_name"));
        body_part_name->setGeometry(QRect(10, 0, 201, 21));
        QFont font;
        font.setPointSize(15);
        body_part_name->setFont(font);
        play = new QPushButton(frame);
        play->setObjectName(QStringLiteral("play"));
        play->setGeometry(QRect(560, 0, 161, 91));
        record = new QPushButton(frame);
        record->setObjectName(QStringLiteral("record"));
        record->setGeometry(QRect(730, 0, 161, 91));
        stop = new QPushButton(frame);
        stop->setObjectName(QStringLiteral("stop"));
        stop->setGeometry(QRect(220, 0, 161, 91));
        pause = new QPushButton(frame);
        pause->setObjectName(QStringLiteral("pause"));
        pause->setGeometry(QRect(390, 0, 161, 91));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 201, 17));

        retranslateUi(body_part);

        QMetaObject::connectSlotsByName(body_part);
    } // setupUi

    void retranslateUi(QWidget *body_part)
    {
        body_part->setWindowTitle(QApplication::translate("body_part", "Form", Q_NULLPTR));
        body_part_name->setText(QApplication::translate("body_part", "body_part", Q_NULLPTR));
        play->setText(QApplication::translate("body_part", "PLAY", Q_NULLPTR));
        record->setText(QApplication::translate("body_part", "RECORD", Q_NULLPTR));
        stop->setText(QApplication::translate("body_part", "STOP", Q_NULLPTR));
        pause->setText(QApplication::translate("body_part", "PAUSE", Q_NULLPTR));
        label->setText(QApplication::translate("body_part", "number_of_motors: ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class body_part: public Ui_body_part {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BODY_PART_H
