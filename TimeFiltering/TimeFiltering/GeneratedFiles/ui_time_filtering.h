/********************************************************************************
** Form generated from reading UI file 'time_filtering.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIME_FILTERING_H
#define UI_TIME_FILTERING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CTimeFilteringClass
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *InputParGroupBox;
    QGridLayout *gridLayout;
    QLabel *Par1Label;
    QDoubleSpinBox *Par1DoubleSpinBox;
    QLabel *Par2Label;
    QDoubleSpinBox *Par2DoubleSpinBox;
    QLabel *Par3Label;
    QDoubleSpinBox *Par3DoubleSpinBox;
    QLabel *Par4Label;
    QDoubleSpinBox *Par4DoubleSpinBox;
    QLabel *Par5Label;
    QDoubleSpinBox *Par5DoubleSpinBox;
    QLabel *Par6Label;
    QDoubleSpinBox *Par6DoubleSpinBox;
    QLabel *Par8Label;
    QDoubleSpinBox *Par8DoubleSpinBox;
    QLabel *Par9Label;
    QDoubleSpinBox *Par9DoubleSpinBox;
    QLabel *Par10Label;
    QDoubleSpinBox *Par10DoubleSpinBox;
    QLabel *Par11Label;
    QDoubleSpinBox *Par11DoubleSpinBox;
    QGroupBox *TimeFilterFactorPArGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *Par7Label;
    QLabel *Par12Label;
    QDoubleSpinBox *Par12DoubleSpinBox;
    QLabel *Par13Label;
    QDoubleSpinBox *Par13DoubleSpinBox;
    QDoubleSpinBox *Par7DoubleSpinBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *OutputFile1Label;
    QLineEdit *OutputFile1LineEdit;
    QPushButton *OutputFile1PushButton;
    QLabel *OutputFile2Label;
    QLineEdit *OutputFile2LineEdit;
    QPushButton *OutputFile2PushButton;
    QLabel *OutputFile3Label;
    QLineEdit *OutputFile3LineEdit;
    QPushButton *OutputFile3PushButton;
    QLabel *OutputFile4Label;
    QLineEdit *OutputFile4LineEdit;
    QPushButton *OutputFile4PushButton;
    QLabel *OutputFile5Label;
    QLineEdit *OutputFile5LineEdit;
    QPushButton *OutputFile5PushButton;
    QPushButton *CalPushButton;
    QPushButton *CancelPushButton;

    void setupUi(QDialog *CTimeFilteringClass)
    {
        if (CTimeFilteringClass->objectName().isEmpty())
            CTimeFilteringClass->setObjectName(QStringLiteral("CTimeFilteringClass"));
        CTimeFilteringClass->resize(548, 651);
        gridLayout_4 = new QGridLayout(CTimeFilteringClass);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        InputParGroupBox = new QGroupBox(CTimeFilteringClass);
        InputParGroupBox->setObjectName(QStringLiteral("InputParGroupBox"));
        gridLayout = new QGridLayout(InputParGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Par1Label = new QLabel(InputParGroupBox);
        Par1Label->setObjectName(QStringLiteral("Par1Label"));

        gridLayout->addWidget(Par1Label, 0, 0, 1, 1);

        Par1DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par1DoubleSpinBox->setObjectName(QStringLiteral("Par1DoubleSpinBox"));
        Par1DoubleSpinBox->setDecimals(1);

        gridLayout->addWidget(Par1DoubleSpinBox, 0, 1, 1, 1);

        Par2Label = new QLabel(InputParGroupBox);
        Par2Label->setObjectName(QStringLiteral("Par2Label"));

        gridLayout->addWidget(Par2Label, 0, 2, 1, 1);

        Par2DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par2DoubleSpinBox->setObjectName(QStringLiteral("Par2DoubleSpinBox"));
        Par2DoubleSpinBox->setDecimals(1);

        gridLayout->addWidget(Par2DoubleSpinBox, 0, 3, 1, 1);

        Par3Label = new QLabel(InputParGroupBox);
        Par3Label->setObjectName(QStringLiteral("Par3Label"));

        gridLayout->addWidget(Par3Label, 1, 0, 1, 1);

        Par3DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par3DoubleSpinBox->setObjectName(QStringLiteral("Par3DoubleSpinBox"));
        Par3DoubleSpinBox->setDecimals(1);

        gridLayout->addWidget(Par3DoubleSpinBox, 1, 1, 1, 1);

        Par4Label = new QLabel(InputParGroupBox);
        Par4Label->setObjectName(QStringLiteral("Par4Label"));

        gridLayout->addWidget(Par4Label, 1, 2, 1, 1);

        Par4DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par4DoubleSpinBox->setObjectName(QStringLiteral("Par4DoubleSpinBox"));
        Par4DoubleSpinBox->setDecimals(1);

        gridLayout->addWidget(Par4DoubleSpinBox, 1, 3, 1, 1);

        Par5Label = new QLabel(InputParGroupBox);
        Par5Label->setObjectName(QStringLiteral("Par5Label"));

        gridLayout->addWidget(Par5Label, 2, 0, 1, 1);

        Par5DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par5DoubleSpinBox->setObjectName(QStringLiteral("Par5DoubleSpinBox"));
        Par5DoubleSpinBox->setDecimals(0);
        Par5DoubleSpinBox->setMaximum(1000);

        gridLayout->addWidget(Par5DoubleSpinBox, 2, 1, 1, 1);

        Par6Label = new QLabel(InputParGroupBox);
        Par6Label->setObjectName(QStringLiteral("Par6Label"));

        gridLayout->addWidget(Par6Label, 2, 2, 1, 1);

        Par6DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par6DoubleSpinBox->setObjectName(QStringLiteral("Par6DoubleSpinBox"));
        Par6DoubleSpinBox->setDecimals(1);

        gridLayout->addWidget(Par6DoubleSpinBox, 2, 3, 1, 1);

        Par8Label = new QLabel(InputParGroupBox);
        Par8Label->setObjectName(QStringLiteral("Par8Label"));

        gridLayout->addWidget(Par8Label, 3, 0, 1, 1);

        Par8DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par8DoubleSpinBox->setObjectName(QStringLiteral("Par8DoubleSpinBox"));
        Par8DoubleSpinBox->setDecimals(1);
        Par8DoubleSpinBox->setMinimum(-100);

        gridLayout->addWidget(Par8DoubleSpinBox, 3, 1, 1, 1);

        Par9Label = new QLabel(InputParGroupBox);
        Par9Label->setObjectName(QStringLiteral("Par9Label"));

        gridLayout->addWidget(Par9Label, 3, 2, 1, 1);

        Par9DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par9DoubleSpinBox->setObjectName(QStringLiteral("Par9DoubleSpinBox"));
        Par9DoubleSpinBox->setDecimals(1);

        gridLayout->addWidget(Par9DoubleSpinBox, 3, 3, 1, 1);

        Par10Label = new QLabel(InputParGroupBox);
        Par10Label->setObjectName(QStringLiteral("Par10Label"));

        gridLayout->addWidget(Par10Label, 4, 0, 1, 1);

        Par10DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par10DoubleSpinBox->setObjectName(QStringLiteral("Par10DoubleSpinBox"));
        Par10DoubleSpinBox->setDecimals(1);

        gridLayout->addWidget(Par10DoubleSpinBox, 4, 1, 1, 1);

        Par11Label = new QLabel(InputParGroupBox);
        Par11Label->setObjectName(QStringLiteral("Par11Label"));

        gridLayout->addWidget(Par11Label, 4, 2, 1, 1);

        Par11DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par11DoubleSpinBox->setObjectName(QStringLiteral("Par11DoubleSpinBox"));
        Par11DoubleSpinBox->setDecimals(1);

        gridLayout->addWidget(Par11DoubleSpinBox, 4, 3, 1, 1);


        gridLayout_4->addWidget(InputParGroupBox, 0, 0, 1, 2);

        TimeFilterFactorPArGroupBox = new QGroupBox(CTimeFilteringClass);
        TimeFilterFactorPArGroupBox->setObjectName(QStringLiteral("TimeFilterFactorPArGroupBox"));
        gridLayout_3 = new QGridLayout(TimeFilterFactorPArGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        Par7Label = new QLabel(TimeFilterFactorPArGroupBox);
        Par7Label->setObjectName(QStringLiteral("Par7Label"));

        gridLayout_3->addWidget(Par7Label, 0, 0, 1, 1);

        Par12Label = new QLabel(TimeFilterFactorPArGroupBox);
        Par12Label->setObjectName(QStringLiteral("Par12Label"));

        gridLayout_3->addWidget(Par12Label, 1, 0, 1, 2);

        Par12DoubleSpinBox = new QDoubleSpinBox(TimeFilterFactorPArGroupBox);
        Par12DoubleSpinBox->setObjectName(QStringLiteral("Par12DoubleSpinBox"));
        Par12DoubleSpinBox->setDecimals(1);

        gridLayout_3->addWidget(Par12DoubleSpinBox, 1, 2, 1, 1);

        Par13Label = new QLabel(TimeFilterFactorPArGroupBox);
        Par13Label->setObjectName(QStringLiteral("Par13Label"));

        gridLayout_3->addWidget(Par13Label, 1, 3, 1, 1);

        Par13DoubleSpinBox = new QDoubleSpinBox(TimeFilterFactorPArGroupBox);
        Par13DoubleSpinBox->setObjectName(QStringLiteral("Par13DoubleSpinBox"));
        Par13DoubleSpinBox->setDecimals(1);

        gridLayout_3->addWidget(Par13DoubleSpinBox, 1, 4, 1, 1);

        Par7DoubleSpinBox = new QDoubleSpinBox(TimeFilterFactorPArGroupBox);
        Par7DoubleSpinBox->setObjectName(QStringLiteral("Par7DoubleSpinBox"));
        Par7DoubleSpinBox->setDecimals(0);
        Par7DoubleSpinBox->setMaximum(1000);

        gridLayout_3->addWidget(Par7DoubleSpinBox, 0, 2, 1, 1);


        gridLayout_4->addWidget(TimeFilterFactorPArGroupBox, 1, 0, 1, 2);

        groupBox_2 = new QGroupBox(CTimeFilteringClass);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        OutputFile1Label = new QLabel(groupBox_2);
        OutputFile1Label->setObjectName(QStringLiteral("OutputFile1Label"));

        gridLayout_2->addWidget(OutputFile1Label, 0, 0, 1, 1);

        OutputFile1LineEdit = new QLineEdit(groupBox_2);
        OutputFile1LineEdit->setObjectName(QStringLiteral("OutputFile1LineEdit"));

        gridLayout_2->addWidget(OutputFile1LineEdit, 0, 1, 1, 1);

        OutputFile1PushButton = new QPushButton(groupBox_2);
        OutputFile1PushButton->setObjectName(QStringLiteral("OutputFile1PushButton"));

        gridLayout_2->addWidget(OutputFile1PushButton, 0, 2, 1, 1);

        OutputFile2Label = new QLabel(groupBox_2);
        OutputFile2Label->setObjectName(QStringLiteral("OutputFile2Label"));

        gridLayout_2->addWidget(OutputFile2Label, 1, 0, 1, 1);

        OutputFile2LineEdit = new QLineEdit(groupBox_2);
        OutputFile2LineEdit->setObjectName(QStringLiteral("OutputFile2LineEdit"));

        gridLayout_2->addWidget(OutputFile2LineEdit, 1, 1, 1, 1);

        OutputFile2PushButton = new QPushButton(groupBox_2);
        OutputFile2PushButton->setObjectName(QStringLiteral("OutputFile2PushButton"));

        gridLayout_2->addWidget(OutputFile2PushButton, 1, 2, 1, 1);

        OutputFile3Label = new QLabel(groupBox_2);
        OutputFile3Label->setObjectName(QStringLiteral("OutputFile3Label"));

        gridLayout_2->addWidget(OutputFile3Label, 2, 0, 1, 1);

        OutputFile3LineEdit = new QLineEdit(groupBox_2);
        OutputFile3LineEdit->setObjectName(QStringLiteral("OutputFile3LineEdit"));

        gridLayout_2->addWidget(OutputFile3LineEdit, 2, 1, 1, 1);

        OutputFile3PushButton = new QPushButton(groupBox_2);
        OutputFile3PushButton->setObjectName(QStringLiteral("OutputFile3PushButton"));

        gridLayout_2->addWidget(OutputFile3PushButton, 2, 2, 1, 1);

        OutputFile4Label = new QLabel(groupBox_2);
        OutputFile4Label->setObjectName(QStringLiteral("OutputFile4Label"));

        gridLayout_2->addWidget(OutputFile4Label, 3, 0, 1, 1);

        OutputFile4LineEdit = new QLineEdit(groupBox_2);
        OutputFile4LineEdit->setObjectName(QStringLiteral("OutputFile4LineEdit"));

        gridLayout_2->addWidget(OutputFile4LineEdit, 3, 1, 1, 1);

        OutputFile4PushButton = new QPushButton(groupBox_2);
        OutputFile4PushButton->setObjectName(QStringLiteral("OutputFile4PushButton"));

        gridLayout_2->addWidget(OutputFile4PushButton, 3, 2, 1, 1);

        OutputFile5Label = new QLabel(groupBox_2);
        OutputFile5Label->setObjectName(QStringLiteral("OutputFile5Label"));

        gridLayout_2->addWidget(OutputFile5Label, 4, 0, 1, 1);

        OutputFile5LineEdit = new QLineEdit(groupBox_2);
        OutputFile5LineEdit->setObjectName(QStringLiteral("OutputFile5LineEdit"));

        gridLayout_2->addWidget(OutputFile5LineEdit, 4, 1, 1, 1);

        OutputFile5PushButton = new QPushButton(groupBox_2);
        OutputFile5PushButton->setObjectName(QStringLiteral("OutputFile5PushButton"));

        gridLayout_2->addWidget(OutputFile5PushButton, 4, 2, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 2, 0, 1, 2);

        CalPushButton = new QPushButton(CTimeFilteringClass);
        CalPushButton->setObjectName(QStringLiteral("CalPushButton"));

        gridLayout_4->addWidget(CalPushButton, 3, 0, 1, 1);

        CancelPushButton = new QPushButton(CTimeFilteringClass);
        CancelPushButton->setObjectName(QStringLiteral("CancelPushButton"));

        gridLayout_4->addWidget(CancelPushButton, 3, 1, 1, 1);


        retranslateUi(CTimeFilteringClass);

        QMetaObject::connectSlotsByName(CTimeFilteringClass);
    } // setupUi

    void retranslateUi(QDialog *CTimeFilteringClass)
    {
        CTimeFilteringClass->setWindowTitle(QApplication::translate("CTimeFilteringClass", "\346\227\266\345\237\237\346\273\244\346\263\242", 0));
        InputParGroupBox->setTitle(QApplication::translate("CTimeFilteringClass", "\350\276\223\345\205\245\344\277\241\345\217\267\345\217\202\346\225\260", 0));
        Par1Label->setText(QApplication::translate("CTimeFilteringClass", "f1(Hz)\357\274\232", 0));
        Par2Label->setText(QApplication::translate("CTimeFilteringClass", "f2(Hz)\357\274\232", 0));
        Par3Label->setText(QApplication::translate("CTimeFilteringClass", "f3(Hz)\357\274\232", 0));
        Par4Label->setText(QApplication::translate("CTimeFilteringClass", "f4(Hz)\357\274\232", 0));
        Par5Label->setText(QApplication::translate("CTimeFilteringClass", "N\357\274\232", 0));
        Par6Label->setText(QApplication::translate("CTimeFilteringClass", "\342\226\263t\357\274\210ms\357\274\211\357\274\232", 0));
        Par8Label->setText(QApplication::translate("CTimeFilteringClass", "\316\262\357\274\232", 0));
        Par9Label->setText(QApplication::translate("CTimeFilteringClass", "A1\357\274\232", 0));
        Par10Label->setText(QApplication::translate("CTimeFilteringClass", "A2\357\274\232", 0));
        Par11Label->setText(QApplication::translate("CTimeFilteringClass", "A3\357\274\232", 0));
        TimeFilterFactorPArGroupBox->setTitle(QApplication::translate("CTimeFilteringClass", "\350\276\223\345\205\245\346\227\266\345\237\237\346\273\244\346\263\242\345\233\240\345\255\220\345\217\202\346\225\260", 0));
        Par7Label->setText(QApplication::translate("CTimeFilteringClass", "M\357\274\232", 0));
        Par12Label->setText(QApplication::translate("CTimeFilteringClass", "Low-Cut Fre(Hz)\357\274\232", 0));
        Par13Label->setText(QApplication::translate("CTimeFilteringClass", "High-Cut Fre(Hz)\357\274\232", 0));
        groupBox_2->setTitle(QApplication::translate("CTimeFilteringClass", "\350\276\223\345\207\272\346\226\207\344\273\266", 0));
        OutputFile1Label->setText(QApplication::translate("CTimeFilteringClass", "\350\276\223\345\207\272\344\277\241\345\217\267s\357\274\232", 0));
        OutputFile1PushButton->setText(QApplication::translate("CTimeFilteringClass", ". . .", 0));
        OutputFile2Label->setText(QApplication::translate("CTimeFilteringClass", "\350\276\223\345\207\272\344\277\241\345\217\267p\357\274\232", 0));
        OutputFile2PushButton->setText(QApplication::translate("CTimeFilteringClass", ". . .", 0));
        OutputFile3Label->setText(QApplication::translate("CTimeFilteringClass", "\350\276\223\345\207\272\344\277\241\345\217\267x\357\274\232", 0));
        OutputFile3PushButton->setText(QApplication::translate("CTimeFilteringClass", ". . .", 0));
        OutputFile4Label->setText(QApplication::translate("CTimeFilteringClass", "\350\276\223\345\207\272\346\273\244\346\263\242\345\233\240\345\255\220h\357\274\232", 0));
        OutputFile4PushButton->setText(QApplication::translate("CTimeFilteringClass", ". . .", 0));
        OutputFile5Label->setText(QApplication::translate("CTimeFilteringClass", "\350\276\223\345\207\272\346\273\244\346\263\242\347\273\223\346\236\234y\357\274\232", 0));
        OutputFile5PushButton->setText(QApplication::translate("CTimeFilteringClass", ". . .", 0));
        CalPushButton->setText(QApplication::translate("CTimeFilteringClass", "\350\256\241\347\256\227", 0));
        CancelPushButton->setText(QApplication::translate("CTimeFilteringClass", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class CTimeFilteringClass: public Ui_CTimeFilteringClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIME_FILTERING_H
