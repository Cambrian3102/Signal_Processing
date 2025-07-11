/********************************************************************************
** Form generated from reading UI file 'amp_spectrum_add_zeros.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMP_SPECTRUM_ADD_ZEROS_H
#define UI_AMP_SPECTRUM_ADD_ZEROS_H

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
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_CAmpSpectrumAddZerosClass
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *InputParGroupBox;
    QGridLayout *gridLayout;
    QLabel *Par0Label;
    QSpinBox *Par0SpinBox;
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
    QLabel *Par7Label;
    QDoubleSpinBox *Par7DoubleSpinBox;
    QLabel *Par8Label;
    QDoubleSpinBox *Par8DoubleSpinBox;
    QLabel *Par9Label;
    QDoubleSpinBox *Par9DoubleSpinBox;
    QLabel *Par10Label;
    QDoubleSpinBox *Par10DoubleSpinBox;
    QLabel *Par11Label;
    QDoubleSpinBox *Par11DoubleSpinBox;
    QLabel *Par12Label;
    QDoubleSpinBox *Par12DoubleSpinBox;
    QGroupBox *AddZeroParGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *Par13Label;
    QDoubleSpinBox *Par13DoubleSpinBox;
    QLabel *Par14Label;
    QDoubleSpinBox *Par14DoubleSpinBox;
    QLabel *Par15Label;
    QDoubleSpinBox *Par15DoubleSpinBox;
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
    QLabel *OutputFile6Label;
    QLineEdit *OutputFile6LineEdit;
    QPushButton *OutputFile6PushButton;
    QLabel *OutputFile7Label;
    QLineEdit *OutputFile7LineEdit;
    QPushButton *OutputFile7PushButton;
    QLabel *OutputFile8Label;
    QLineEdit *OutputFile8LineEdit;
    QPushButton *OutputFile8PushButton;
    QPushButton *CalPushButton;
    QPushButton *CancelPushButton;

    void setupUi(QDialog *CAmpSpectrumAddZerosClass)
    {
        if (CAmpSpectrumAddZerosClass->objectName().isEmpty())
            CAmpSpectrumAddZerosClass->setObjectName(QStringLiteral("CAmpSpectrumAddZerosClass"));
        CAmpSpectrumAddZerosClass->resize(709, 848);
        gridLayout_4 = new QGridLayout(CAmpSpectrumAddZerosClass);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        InputParGroupBox = new QGroupBox(CAmpSpectrumAddZerosClass);
        InputParGroupBox->setObjectName(QStringLiteral("InputParGroupBox"));
        gridLayout = new QGridLayout(InputParGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Par0Label = new QLabel(InputParGroupBox);
        Par0Label->setObjectName(QStringLiteral("Par0Label"));

        gridLayout->addWidget(Par0Label, 0, 0, 1, 1);

        Par0SpinBox = new QSpinBox(InputParGroupBox);
        Par0SpinBox->setObjectName(QStringLiteral("Par0SpinBox"));
        Par0SpinBox->setMinimum(1);
        Par0SpinBox->setMaximum(5);

        gridLayout->addWidget(Par0SpinBox, 0, 1, 1, 1);

        Par1Label = new QLabel(InputParGroupBox);
        Par1Label->setObjectName(QStringLiteral("Par1Label"));

        gridLayout->addWidget(Par1Label, 1, 0, 1, 1);

        Par1DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par1DoubleSpinBox->setObjectName(QStringLiteral("Par1DoubleSpinBox"));
        Par1DoubleSpinBox->setDecimals(1);
        Par1DoubleSpinBox->setMaximum(1000);

        gridLayout->addWidget(Par1DoubleSpinBox, 1, 1, 1, 1);

        Par2Label = new QLabel(InputParGroupBox);
        Par2Label->setObjectName(QStringLiteral("Par2Label"));

        gridLayout->addWidget(Par2Label, 1, 2, 1, 1);

        Par2DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par2DoubleSpinBox->setObjectName(QStringLiteral("Par2DoubleSpinBox"));
        Par2DoubleSpinBox->setDecimals(1);
        Par2DoubleSpinBox->setMaximum(10000);

        gridLayout->addWidget(Par2DoubleSpinBox, 1, 3, 1, 1);

        Par3Label = new QLabel(InputParGroupBox);
        Par3Label->setObjectName(QStringLiteral("Par3Label"));
        Par3Label->setEnabled(false);

        gridLayout->addWidget(Par3Label, 2, 0, 1, 1);

        Par3DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par3DoubleSpinBox->setObjectName(QStringLiteral("Par3DoubleSpinBox"));
        Par3DoubleSpinBox->setEnabled(false);
        Par3DoubleSpinBox->setDecimals(1);
        Par3DoubleSpinBox->setMaximum(1000);

        gridLayout->addWidget(Par3DoubleSpinBox, 2, 1, 1, 1);

        Par4Label = new QLabel(InputParGroupBox);
        Par4Label->setObjectName(QStringLiteral("Par4Label"));
        Par4Label->setEnabled(false);

        gridLayout->addWidget(Par4Label, 2, 2, 1, 1);

        Par4DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par4DoubleSpinBox->setObjectName(QStringLiteral("Par4DoubleSpinBox"));
        Par4DoubleSpinBox->setEnabled(false);
        Par4DoubleSpinBox->setDecimals(1);
        Par4DoubleSpinBox->setMaximum(10000);

        gridLayout->addWidget(Par4DoubleSpinBox, 2, 3, 1, 1);

        Par5Label = new QLabel(InputParGroupBox);
        Par5Label->setObjectName(QStringLiteral("Par5Label"));
        Par5Label->setEnabled(false);

        gridLayout->addWidget(Par5Label, 3, 0, 1, 1);

        Par5DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par5DoubleSpinBox->setObjectName(QStringLiteral("Par5DoubleSpinBox"));
        Par5DoubleSpinBox->setEnabled(false);
        Par5DoubleSpinBox->setDecimals(1);
        Par5DoubleSpinBox->setMaximum(1000);

        gridLayout->addWidget(Par5DoubleSpinBox, 3, 1, 1, 1);

        Par6Label = new QLabel(InputParGroupBox);
        Par6Label->setObjectName(QStringLiteral("Par6Label"));
        Par6Label->setEnabled(false);

        gridLayout->addWidget(Par6Label, 3, 2, 1, 1);

        Par6DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par6DoubleSpinBox->setObjectName(QStringLiteral("Par6DoubleSpinBox"));
        Par6DoubleSpinBox->setEnabled(false);
        Par6DoubleSpinBox->setDecimals(1);
        Par6DoubleSpinBox->setMaximum(10000);

        gridLayout->addWidget(Par6DoubleSpinBox, 3, 3, 1, 1);

        Par7Label = new QLabel(InputParGroupBox);
        Par7Label->setObjectName(QStringLiteral("Par7Label"));
        Par7Label->setEnabled(false);

        gridLayout->addWidget(Par7Label, 4, 0, 1, 1);

        Par7DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par7DoubleSpinBox->setObjectName(QStringLiteral("Par7DoubleSpinBox"));
        Par7DoubleSpinBox->setEnabled(false);
        Par7DoubleSpinBox->setDecimals(1);
        Par7DoubleSpinBox->setMinimum(-100);
        Par7DoubleSpinBox->setMaximum(1000);

        gridLayout->addWidget(Par7DoubleSpinBox, 4, 1, 1, 1);

        Par8Label = new QLabel(InputParGroupBox);
        Par8Label->setObjectName(QStringLiteral("Par8Label"));
        Par8Label->setEnabled(false);

        gridLayout->addWidget(Par8Label, 4, 2, 1, 1);

        Par8DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par8DoubleSpinBox->setObjectName(QStringLiteral("Par8DoubleSpinBox"));
        Par8DoubleSpinBox->setEnabled(false);
        Par8DoubleSpinBox->setDecimals(1);
        Par8DoubleSpinBox->setMaximum(10000);

        gridLayout->addWidget(Par8DoubleSpinBox, 4, 3, 1, 1);

        Par9Label = new QLabel(InputParGroupBox);
        Par9Label->setObjectName(QStringLiteral("Par9Label"));
        Par9Label->setEnabled(false);

        gridLayout->addWidget(Par9Label, 5, 0, 1, 1);

        Par9DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par9DoubleSpinBox->setObjectName(QStringLiteral("Par9DoubleSpinBox"));
        Par9DoubleSpinBox->setEnabled(false);
        Par9DoubleSpinBox->setDecimals(1);
        Par9DoubleSpinBox->setMaximum(1000);

        gridLayout->addWidget(Par9DoubleSpinBox, 5, 1, 1, 1);

        Par10Label = new QLabel(InputParGroupBox);
        Par10Label->setObjectName(QStringLiteral("Par10Label"));
        Par10Label->setEnabled(false);

        gridLayout->addWidget(Par10Label, 5, 2, 1, 1);

        Par10DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par10DoubleSpinBox->setObjectName(QStringLiteral("Par10DoubleSpinBox"));
        Par10DoubleSpinBox->setEnabled(false);
        Par10DoubleSpinBox->setDecimals(1);
        Par10DoubleSpinBox->setMaximum(10000);

        gridLayout->addWidget(Par10DoubleSpinBox, 5, 3, 1, 1);

        Par11Label = new QLabel(InputParGroupBox);
        Par11Label->setObjectName(QStringLiteral("Par11Label"));

        gridLayout->addWidget(Par11Label, 6, 0, 1, 1);

        Par11DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par11DoubleSpinBox->setObjectName(QStringLiteral("Par11DoubleSpinBox"));
        Par11DoubleSpinBox->setDecimals(0);
        Par11DoubleSpinBox->setMaximum(1000);

        gridLayout->addWidget(Par11DoubleSpinBox, 6, 1, 1, 1);

        Par12Label = new QLabel(InputParGroupBox);
        Par12Label->setObjectName(QStringLiteral("Par12Label"));

        gridLayout->addWidget(Par12Label, 6, 2, 1, 1);

        Par12DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par12DoubleSpinBox->setObjectName(QStringLiteral("Par12DoubleSpinBox"));
        Par12DoubleSpinBox->setDecimals(1);
        Par12DoubleSpinBox->setMaximum(100);

        gridLayout->addWidget(Par12DoubleSpinBox, 6, 3, 1, 1);


        gridLayout_4->addWidget(InputParGroupBox, 0, 0, 1, 2);

        AddZeroParGroupBox = new QGroupBox(CAmpSpectrumAddZerosClass);
        AddZeroParGroupBox->setObjectName(QStringLiteral("AddZeroParGroupBox"));
        gridLayout_3 = new QGridLayout(AddZeroParGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        Par13Label = new QLabel(AddZeroParGroupBox);
        Par13Label->setObjectName(QStringLiteral("Par13Label"));

        gridLayout_3->addWidget(Par13Label, 0, 0, 1, 1);

        Par13DoubleSpinBox = new QDoubleSpinBox(AddZeroParGroupBox);
        Par13DoubleSpinBox->setObjectName(QStringLiteral("Par13DoubleSpinBox"));
        Par13DoubleSpinBox->setDecimals(0);
        Par13DoubleSpinBox->setMaximum(100000);

        gridLayout_3->addWidget(Par13DoubleSpinBox, 0, 1, 1, 1);

        Par14Label = new QLabel(AddZeroParGroupBox);
        Par14Label->setObjectName(QStringLiteral("Par14Label"));

        gridLayout_3->addWidget(Par14Label, 0, 2, 1, 1);

        Par14DoubleSpinBox = new QDoubleSpinBox(AddZeroParGroupBox);
        Par14DoubleSpinBox->setObjectName(QStringLiteral("Par14DoubleSpinBox"));
        Par14DoubleSpinBox->setDecimals(0);
        Par14DoubleSpinBox->setMaximum(100000);

        gridLayout_3->addWidget(Par14DoubleSpinBox, 0, 3, 1, 1);

        Par15Label = new QLabel(AddZeroParGroupBox);
        Par15Label->setObjectName(QStringLiteral("Par15Label"));

        gridLayout_3->addWidget(Par15Label, 1, 0, 1, 1);

        Par15DoubleSpinBox = new QDoubleSpinBox(AddZeroParGroupBox);
        Par15DoubleSpinBox->setObjectName(QStringLiteral("Par15DoubleSpinBox"));
        Par15DoubleSpinBox->setDecimals(0);
        Par15DoubleSpinBox->setMaximum(5);

        gridLayout_3->addWidget(Par15DoubleSpinBox, 1, 1, 1, 1);


        gridLayout_4->addWidget(AddZeroParGroupBox, 1, 0, 1, 2);

        groupBox_2 = new QGroupBox(CAmpSpectrumAddZerosClass);
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

        OutputFile6Label = new QLabel(groupBox_2);
        OutputFile6Label->setObjectName(QStringLiteral("OutputFile6Label"));

        gridLayout_2->addWidget(OutputFile6Label, 5, 0, 1, 1);

        OutputFile6LineEdit = new QLineEdit(groupBox_2);
        OutputFile6LineEdit->setObjectName(QStringLiteral("OutputFile6LineEdit"));

        gridLayout_2->addWidget(OutputFile6LineEdit, 5, 1, 1, 1);

        OutputFile6PushButton = new QPushButton(groupBox_2);
        OutputFile6PushButton->setObjectName(QStringLiteral("OutputFile6PushButton"));

        gridLayout_2->addWidget(OutputFile6PushButton, 5, 2, 1, 1);

        OutputFile7Label = new QLabel(groupBox_2);
        OutputFile7Label->setObjectName(QStringLiteral("OutputFile7Label"));

        gridLayout_2->addWidget(OutputFile7Label, 6, 0, 1, 1);

        OutputFile7LineEdit = new QLineEdit(groupBox_2);
        OutputFile7LineEdit->setObjectName(QStringLiteral("OutputFile7LineEdit"));

        gridLayout_2->addWidget(OutputFile7LineEdit, 6, 1, 1, 1);

        OutputFile7PushButton = new QPushButton(groupBox_2);
        OutputFile7PushButton->setObjectName(QStringLiteral("OutputFile7PushButton"));

        gridLayout_2->addWidget(OutputFile7PushButton, 6, 2, 1, 1);

        OutputFile8Label = new QLabel(groupBox_2);
        OutputFile8Label->setObjectName(QStringLiteral("OutputFile8Label"));

        gridLayout_2->addWidget(OutputFile8Label, 7, 0, 1, 1);

        OutputFile8LineEdit = new QLineEdit(groupBox_2);
        OutputFile8LineEdit->setObjectName(QStringLiteral("OutputFile8LineEdit"));

        gridLayout_2->addWidget(OutputFile8LineEdit, 7, 1, 1, 1);

        OutputFile8PushButton = new QPushButton(groupBox_2);
        OutputFile8PushButton->setObjectName(QStringLiteral("OutputFile8PushButton"));

        gridLayout_2->addWidget(OutputFile8PushButton, 7, 2, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 2, 0, 1, 2);

        CalPushButton = new QPushButton(CAmpSpectrumAddZerosClass);
        CalPushButton->setObjectName(QStringLiteral("CalPushButton"));

        gridLayout_4->addWidget(CalPushButton, 3, 0, 1, 1);

        CancelPushButton = new QPushButton(CAmpSpectrumAddZerosClass);
        CancelPushButton->setObjectName(QStringLiteral("CancelPushButton"));

        gridLayout_4->addWidget(CancelPushButton, 3, 1, 1, 1);


        retranslateUi(CAmpSpectrumAddZerosClass);

        QMetaObject::connectSlotsByName(CAmpSpectrumAddZerosClass);
    } // setupUi

    void retranslateUi(QDialog *CAmpSpectrumAddZerosClass)
    {
        CAmpSpectrumAddZerosClass->setWindowTitle(QApplication::translate("CAmpSpectrumAddZerosClass", "\346\214\257\345\271\205\350\260\261\350\241\245\351\233\266", 0));
        InputParGroupBox->setTitle(QApplication::translate("CAmpSpectrumAddZerosClass", "\350\276\223\345\205\245\344\277\241\345\217\267\345\217\202\346\225\260", 0));
        Par0Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "\351\242\221\347\216\207\346\210\220\344\273\275\346\225\260\347\233\256M\357\274\232", 0));
        Par1Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "A1\357\274\232", 0));
        Par2Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "f1(Hz)\357\274\232", 0));
        Par3Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "A2\357\274\232", 0));
        Par4Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "f2(Hz)\357\274\232", 0));
        Par5Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "A3\357\274\232", 0));
        Par6Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "f3(Hz)\357\274\232", 0));
        Par7Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "A4\357\274\232", 0));
        Par8Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "f4(Hz)\357\274\232", 0));
        Par9Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "A5\357\274\232", 0));
        Par10Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "f5(Hz)\357\274\232", 0));
        Par11Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "\351\207\207\346\240\267\347\202\271\346\225\260N\357\274\232", 0));
        Par12Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "\351\207\207\346\240\267\351\227\264\351\232\224\342\226\263(ms)\357\274\232", 0));
        AddZeroParGroupBox->setTitle(QApplication::translate("CAmpSpectrumAddZerosClass", "\350\276\223\345\205\245\350\241\245\351\233\266\345\217\202\346\225\260", 0));
        Par13Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "\345\211\215\350\241\245\351\233\266\344\270\252\346\225\260\357\274\232", 0));
        Par14Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "\345\220\216\350\241\245\351\233\266\344\270\252\346\225\260\357\274\232", 0));
        Par15Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "\351\232\224\346\241\243\346\217\222\351\233\266\346\225\260\347\233\256\357\274\232", 0));
        groupBox_2->setTitle(QApplication::translate("CAmpSpectrumAddZerosClass", "\350\276\223\345\207\272\346\226\207\344\273\266", 0));
        OutputFile1Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "\350\276\223\345\207\272\346\227\266\345\237\237\345\220\210\346\210\220\344\277\241\345\217\267f1(n\342\226\263)\357\274\232", 0));
        OutputFile1PushButton->setText(QApplication::translate("CAmpSpectrumAddZerosClass", ". . .", 0));
        OutputFile2Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "\350\276\223\345\207\272\344\270\215\350\241\245\351\233\266\344\277\241\345\217\267\346\214\257\345\271\205\350\260\261F1(k)\357\274\232", 0));
        OutputFile2PushButton->setText(QApplication::translate("CAmpSpectrumAddZerosClass", ". . .", 0));
        OutputFile3Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "\350\276\223\345\207\272\345\211\215\350\241\245\351\233\266\344\277\241\345\217\267f2(n\342\226\263)\357\274\232", 0));
        OutputFile3PushButton->setText(QApplication::translate("CAmpSpectrumAddZerosClass", ". . .", 0));
        OutputFile4Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "\350\276\223\345\207\272\345\211\215\350\241\245\351\233\266\344\277\241\345\217\267\346\214\257\345\271\205\350\260\261F2(k)\357\274\232", 0));
        OutputFile4PushButton->setText(QApplication::translate("CAmpSpectrumAddZerosClass", ". . .", 0));
        OutputFile5Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "\350\276\223\345\207\272\345\220\216\350\241\245\351\233\266\344\277\241\345\217\267f3(n\342\226\263)\357\274\232", 0));
        OutputFile5PushButton->setText(QApplication::translate("CAmpSpectrumAddZerosClass", ". . .", 0));
        OutputFile6Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "\350\276\223\345\207\272\345\220\216\350\241\245\351\233\266\344\277\241\345\217\267\346\214\257\345\271\205\350\260\261F3(k)\357\274\232", 0));
        OutputFile6PushButton->setText(QApplication::translate("CAmpSpectrumAddZerosClass", ". . .", 0));
        OutputFile7Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "\350\276\223\345\207\272\351\232\224\346\241\243\346\217\222\351\233\266\344\277\241\345\217\267f4(n\342\226\263)\357\274\232", 0));
        OutputFile7PushButton->setText(QApplication::translate("CAmpSpectrumAddZerosClass", ". . .", 0));
        OutputFile8Label->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "\350\276\223\345\207\272\351\232\224\346\241\243\346\217\222\351\233\266\344\277\241\345\217\267\346\214\257\345\271\205\350\260\261F4(k)\357\274\232", 0));
        OutputFile8PushButton->setText(QApplication::translate("CAmpSpectrumAddZerosClass", ". . .", 0));
        CalPushButton->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "\350\256\241\347\256\227", 0));
        CancelPushButton->setText(QApplication::translate("CAmpSpectrumAddZerosClass", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class CAmpSpectrumAddZerosClass: public Ui_CAmpSpectrumAddZerosClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMP_SPECTRUM_ADD_ZEROS_H
