/********************************************************************************
** Form generated from reading UI file 'addnewdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWDIALOG_H
#define UI_ADDNEWDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addNewDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *addressLabel;
    QLineEdit *addressBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *fileLabel;
    QLineEdit *locationBox;
    QPushButton *locationBtn;
    QPushButton *addBtn;
    QPushButton *cancelBtn;

    void setupUi(QDialog *addNewDialog)
    {
        if (addNewDialog->objectName().isEmpty())
            addNewDialog->setObjectName(QString::fromUtf8("addNewDialog"));
        addNewDialog->resize(452, 229);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/add-logo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addNewDialog->setWindowIcon(icon);
        layoutWidget = new QWidget(addNewDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 411, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        addressLabel = new QLabel(layoutWidget);
        addressLabel->setObjectName(QString::fromUtf8("addressLabel"));
        addressLabel->setMaximumSize(QSize(16777215, 23));

        horizontalLayout_2->addWidget(addressLabel);

        addressBox = new QLineEdit(layoutWidget);
        addressBox->setObjectName(QString::fromUtf8("addressBox"));
        addressBox->setMaximumSize(QSize(16777215, 29));

        horizontalLayout_2->addWidget(addressBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        fileLabel = new QLabel(layoutWidget);
        fileLabel->setObjectName(QString::fromUtf8("fileLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileLabel->sizePolicy().hasHeightForWidth());
        fileLabel->setSizePolicy(sizePolicy);
        fileLabel->setMinimumSize(QSize(56, 0));
        fileLabel->setMaximumSize(QSize(16777215, 29));

        horizontalLayout_4->addWidget(fileLabel);

        locationBox = new QLineEdit(layoutWidget);
        locationBox->setObjectName(QString::fromUtf8("locationBox"));
        locationBox->setMaximumSize(QSize(16777215, 29));

        horizontalLayout_4->addWidget(locationBox);

        locationBtn = new QPushButton(layoutWidget);
        locationBtn->setObjectName(QString::fromUtf8("locationBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(61);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(locationBtn->sizePolicy().hasHeightForWidth());
        locationBtn->setSizePolicy(sizePolicy1);
        locationBtn->setMaximumSize(QSize(16777215, 29));

        horizontalLayout_4->addWidget(locationBtn);


        verticalLayout->addLayout(horizontalLayout_4);

        addBtn = new QPushButton(addNewDialog);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));
        addBtn->setGeometry(QRect(230, 180, 80, 29));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(68);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(addBtn->sizePolicy().hasHeightForWidth());
        addBtn->setSizePolicy(sizePolicy2);
        addBtn->setMaximumSize(QSize(16777215, 29));
        cancelBtn = new QPushButton(addNewDialog);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setGeometry(QRect(350, 180, 80, 29));
        sizePolicy2.setHeightForWidth(cancelBtn->sizePolicy().hasHeightForWidth());
        cancelBtn->setSizePolicy(sizePolicy2);
        cancelBtn->setMaximumSize(QSize(16777215, 29));

        retranslateUi(addNewDialog);
        QObject::connect(cancelBtn, SIGNAL(clicked()), addNewDialog, SLOT(close()));
        QObject::connect(addBtn, SIGNAL(clicked()), addNewDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(addNewDialog);
    } // setupUi

    void retranslateUi(QDialog *addNewDialog)
    {
        addNewDialog->setWindowTitle(QCoreApplication::translate("addNewDialog", "Add New Download", nullptr));
        addressLabel->setText(QCoreApplication::translate("addNewDialog", "Address :", nullptr));
        fileLabel->setText(QCoreApplication::translate("addNewDialog", "Location :", nullptr));
        locationBtn->setText(QCoreApplication::translate("addNewDialog", "...", nullptr));
        addBtn->setText(QCoreApplication::translate("addNewDialog", "Add", nullptr));
        cancelBtn->setText(QCoreApplication::translate("addNewDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addNewDialog: public Ui_addNewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWDIALOG_H
