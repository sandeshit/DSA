/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edit
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *backbutton;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nameLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *firstNameEditBox;
    QLineEdit *lastNameeditbox;
    QLabel *genderlabel;
    QComboBox *gender;
    QLabel *DateofVisitBox;
    QLineEdit *DateofVisit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *agelabel;
    QLineEdit *Ageedit;
    QComboBox *patientType;
    QLabel *detaillabel;
    QLineEdit *detail;
    QPushButton *pushButton;

    void setupUi(QWidget *edit)
    {
        if (edit->objectName().isEmpty())
            edit->setObjectName(QString::fromUtf8("edit"));
        edit->resize(531, 424);
        verticalLayout_2 = new QVBoxLayout(edit);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        backbutton = new QPushButton(edit);
        backbutton->setObjectName(QString::fromUtf8("backbutton"));

        horizontalLayout_3->addWidget(backbutton);

        label = new QLabel(edit);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        label_2 = new QLabel(edit);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        nameLabel = new QLabel(edit);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        horizontalLayout_2->addWidget(nameLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        firstNameEditBox = new QLineEdit(edit);
        firstNameEditBox->setObjectName(QString::fromUtf8("firstNameEditBox"));

        horizontalLayout->addWidget(firstNameEditBox);

        lastNameeditbox = new QLineEdit(edit);
        lastNameeditbox->setObjectName(QString::fromUtf8("lastNameeditbox"));

        horizontalLayout->addWidget(lastNameeditbox);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_2);

        genderlabel = new QLabel(edit);
        genderlabel->setObjectName(QString::fromUtf8("genderlabel"));

        verticalLayout->addWidget(genderlabel);

        gender = new QComboBox(edit);
        gender->addItem(QString());
        gender->addItem(QString());
        gender->addItem(QString());
        gender->addItem(QString());
        gender->setObjectName(QString::fromUtf8("gender"));

        verticalLayout->addWidget(gender);

        DateofVisitBox = new QLabel(edit);
        DateofVisitBox->setObjectName(QString::fromUtf8("DateofVisitBox"));
        DateofVisitBox->setFrameShape(QFrame::NoFrame);
        DateofVisitBox->setLineWidth(1);

        verticalLayout->addWidget(DateofVisitBox);

        DateofVisit = new QLineEdit(edit);
        DateofVisit->setObjectName(QString::fromUtf8("DateofVisit"));
        DateofVisit->setMaxLength(10);

        verticalLayout->addWidget(DateofVisit);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        agelabel = new QLabel(edit);
        agelabel->setObjectName(QString::fromUtf8("agelabel"));

        horizontalLayout_4->addWidget(agelabel);

        Ageedit = new QLineEdit(edit);
        Ageedit->setObjectName(QString::fromUtf8("Ageedit"));
        Ageedit->setMaxLength(3);

        horizontalLayout_4->addWidget(Ageedit);

        patientType = new QComboBox(edit);
        patientType->addItem(QString());
        patientType->addItem(QString());
        patientType->addItem(QString());
        patientType->setObjectName(QString::fromUtf8("patientType"));

        horizontalLayout_4->addWidget(patientType);


        verticalLayout->addLayout(horizontalLayout_4);

        detaillabel = new QLabel(edit);
        detaillabel->setObjectName(QString::fromUtf8("detaillabel"));

        verticalLayout->addWidget(detaillabel);

        detail = new QLineEdit(edit);
        detail->setObjectName(QString::fromUtf8("detail"));

        verticalLayout->addWidget(detail);

        pushButton = new QPushButton(edit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(edit);

        QMetaObject::connectSlotsByName(edit);
    } // setupUi

    void retranslateUi(QWidget *edit)
    {
        edit->setWindowTitle(QCoreApplication::translate("edit", "Form", nullptr));
        backbutton->setText(QCoreApplication::translate("edit", "Back", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        nameLabel->setText(QCoreApplication::translate("edit", "Name", nullptr));
        firstNameEditBox->setPlaceholderText(QCoreApplication::translate("edit", "First name", nullptr));
        lastNameeditbox->setPlaceholderText(QCoreApplication::translate("edit", "Last name", nullptr));
        genderlabel->setText(QCoreApplication::translate("edit", "Gender", nullptr));
        gender->setItemText(0, QCoreApplication::translate("edit", "Gender", nullptr));
        gender->setItemText(1, QCoreApplication::translate("edit", "Male", nullptr));
        gender->setItemText(2, QCoreApplication::translate("edit", "Female", nullptr));
        gender->setItemText(3, QCoreApplication::translate("edit", "Others", nullptr));

        DateofVisitBox->setText(QCoreApplication::translate("edit", "Date of Visit", nullptr));
        DateofVisit->setInputMask(QString());
        DateofVisit->setText(QString());
        DateofVisit->setPlaceholderText(QCoreApplication::translate("edit", "yyyy/mm/dd", nullptr));
        agelabel->setText(QCoreApplication::translate("edit", "Age", nullptr));
        Ageedit->setInputMask(QString());
        Ageedit->setPlaceholderText(QCoreApplication::translate("edit", "age", nullptr));
        patientType->setItemText(0, QCoreApplication::translate("edit", "Patient Type", nullptr));
        patientType->setItemText(1, QCoreApplication::translate("edit", "Inpatient", nullptr));
        patientType->setItemText(2, QCoreApplication::translate("edit", "Outpatient", nullptr));

        detaillabel->setText(QCoreApplication::translate("edit", "Brief detail:", nullptr));
        pushButton->setText(QCoreApplication::translate("edit", "ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit: public Ui_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
