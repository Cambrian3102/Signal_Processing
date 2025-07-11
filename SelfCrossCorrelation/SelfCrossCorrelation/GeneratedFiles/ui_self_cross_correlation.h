/********************************************************************************
** Form generated from reading UI file 'self_cross_correlation.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELF_CROSS_CORRELATION_H
#define UI_SELF_CROSS_CORRELATION_H

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

class Ui_CSelfCrossCorrelationClass
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *OutputFile1Label;
    QPushButton *OutputFile1PushButton;
    QLabel *OutputFile2Label;
    QPushButton *OutputFile2PushButton;
    QLabel *OutputFile3Label;
    QPushButton *OutputFile3PushButton;
    QLabel *OutputFile4Label;
    QPushButton *OutputFile4PushButton;
    QLabel *OutputFile5Label;
    QPushButton *OutputFile5PushButton;
    QLabel *OutputFile6Label;
    QPushButton *OutputFile6PushButton;
    QLabel *OutputFile7Label;
    QLineEdit *OutputFile7LineEdit;
    QPushButton *OutputFile7PushButton;
    QLineEdit *OutputFile6LineEdit;
    QLineEdit *OutputFile5LineEdit;
    QLineEdit *OutputFile4LineEdit;
    QLineEdit *OutputFile3LineEdit;
    QLineEdit *OutputFile2LineEdit;
    QLineEdit *OutputFile1LineEdit;
    QPushButton *CalPushButton;
    QPushButton *CancelPushButton;
    QGroupBox *InputParGroupBox;
    QGridLayout *gridLayout;
    QLabel *Par1Label;
    QDoubleSpinBox *Par4DoubleSpinBox;
    QDoubleSpinBox *Par1DoubleSpinBox;
    QDoubleSpinBox *Par3DoubleSpinBox;
    QDoubleSpinBox *Par7DoubleSpinBox;
    QLabel *Par5Label;
    QDoubleSpinBox *Par2DoubleSpinBox;
    QLabel *Par3Label;
    QLabel *Par4Label;
    QLabel *Par7Label;
    QLabel *Par2Label;
    QDoubleSpinBox *Par5DoubleSpinBox;
    QLabel *Par8Label;
    QDoubleSpinBox *Par8DoubleSpinBox;
    QLabel *Par6Label;
    QDoubleSpinBox *Par6DoubleSpinBox;

    void setupUi(QDialog *CSelfCrossCorrelationClass)
    {
        if (CSelfCrossCorrelationClass->objectName().isEmpty())
            CSelfCrossCorrelationClass->setObjectName(QStringLiteral("CSelfCrossCorrelationClass"));
        CSelfCrossCorrelationClass->resize(728, 589);
        gridLayout_3 = new QGridLayout(CSelfCrossCorrelationClass);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox_2 = new QGroupBox(CSelfCrossCorrelationClass);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        OutputFile1Label = new QLabel(groupBox_2);
        OutputFile1Label->setObjectName(QStringLiteral("OutputFile1Label"));

        gridLayout_2->addWidget(OutputFile1Label, 0, 0, 1, 1);

        OutputFile1PushButton = new QPushButton(groupBox_2);
        OutputFile1PushButton->setObjectName(QStringLiteral("OutputFile1PushButton"));

        gridLayout_2->addWidget(OutputFile1PushButton, 0, 3, 1, 1);

        OutputFile2Label = new QLabel(groupBox_2);
        OutputFile2Label->setObjectName(QStringLiteral("OutputFile2Label"));

        gridLayout_2->addWidget(OutputFile2Label, 1, 0, 1, 1);

        OutputFile2PushButton = new QPushButton(groupBox_2);
        OutputFile2PushButton->setObjectName(QStringLiteral("OutputFile2PushButton"));

        gridLayout_2->addWidget(OutputFile2PushButton, 1, 3, 1, 1);

        OutputFile3Label = new QLabel(groupBox_2);
        OutputFile3Label->setObjectName(QStringLiteral("OutputFile3Label"));

        gridLayout_2->addWidget(OutputFile3Label, 2, 0, 1, 1);

        OutputFile3PushButton = new QPushButton(groupBox_2);
        OutputFile3PushButton->setObjectName(QStringLiteral("OutputFile3PushButton"));

        gridLayout_2->addWidget(OutputFile3PushButton, 2, 3, 1, 1);

        OutputFile4Label = new QLabel(groupBox_2);
        OutputFile4Label->setObjectName(QStringLiteral("OutputFile4Label"));

        gridLayout_2->addWidget(OutputFile4Label, 3, 0, 1, 1);

        OutputFile4PushButton = new QPushButton(groupBox_2);
        OutputFile4PushButton->setObjectName(QStringLiteral("OutputFile4PushButton"));

        gridLayout_2->addWidget(OutputFile4PushButton, 3, 3, 1, 1);

        OutputFile5Label = new QLabel(groupBox_2);
        OutputFile5Label->setObjectName(QStringLiteral("OutputFile5Label"));

        gridLayout_2->addWidget(OutputFile5Label, 4, 0, 1, 1);

        OutputFile5PushButton = new QPushButton(groupBox_2);
        OutputFile5PushButton->setObjectName(QStringLiteral("OutputFile5PushButton"));

        gridLayout_2->addWidget(OutputFile5PushButton, 4, 3, 1, 1);

        OutputFile6Label = new QLabel(groupBox_2);
        OutputFile6Label->setObjectName(QStringLiteral("OutputFile6Label"));

        gridLayout_2->addWidget(OutputFile6Label, 5, 0, 1, 1);

        OutputFile6PushButton = new QPushButton(groupBox_2);
        OutputFile6PushButton->setObjectName(QStringLiteral("OutputFile6PushButton"));

        gridLayout_2->addWidget(OutputFile6PushButton, 5, 3, 1, 1);

        OutputFile7Label = new QLabel(groupBox_2);
        OutputFile7Label->setObjectName(QStringLiteral("OutputFile7Label"));

        gridLayout_2->addWidget(OutputFile7Label, 6, 0, 1, 2);

        OutputFile7LineEdit = new QLineEdit(groupBox_2);
        OutputFile7LineEdit->setObjectName(QStringLiteral("OutputFile7LineEdit"));

        gridLayout_2->addWidget(OutputFile7LineEdit, 6, 2, 1, 1);

        OutputFile7PushButton = new QPushButton(groupBox_2);
        OutputFile7PushButton->setObjectName(QStringLiteral("OutputFile7PushButton"));

        gridLayout_2->addWidget(OutputFile7PushButton, 6, 3, 1, 1);

        OutputFile6LineEdit = new QLineEdit(groupBox_2);
        OutputFile6LineEdit->setObjectName(QStringLiteral("OutputFile6LineEdit"));

        gridLayout_2->addWidget(OutputFile6LineEdit, 5, 2, 1, 1);

        OutputFile5LineEdit = new QLineEdit(groupBox_2);
        OutputFile5LineEdit->setObjectName(QStringLiteral("OutputFile5LineEdit"));

        gridLayout_2->addWidget(OutputFile5LineEdit, 4, 2, 1, 1);

        OutputFile4LineEdit = new QLineEdit(groupBox_2);
        OutputFile4LineEdit->setObjectName(QStringLiteral("OutputFile4LineEdit"));

        gridLayout_2->addWidget(OutputFile4LineEdit, 3, 2, 1, 1);

        OutputFile3LineEdit = new QLineEdit(groupBox_2);
        OutputFile3LineEdit->setObjectName(QStringLiteral("OutputFile3LineEdit"));

        gridLayout_2->addWidget(OutputFile3LineEdit, 2, 2, 1, 1);

        OutputFile2LineEdit = new QLineEdit(groupBox_2);
        OutputFile2LineEdit->setObjectName(QStringLiteral("OutputFile2LineEdit"));

        gridLayout_2->addWidget(OutputFile2LineEdit, 1, 2, 1, 1);

        OutputFile1LineEdit = new QLineEdit(groupBox_2);
        OutputFile1LineEdit->setObjectName(QStringLiteral("OutputFile1LineEdit"));

        gridLayout_2->addWidget(OutputFile1LineEdit, 0, 2, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 2);

        CalPushButton = new QPushButton(CSelfCrossCorrelationClass);
        CalPushButton->setObjectName(QStringLiteral("CalPushButton"));

        gridLayout_3->addWidget(CalPushButton, 2, 0, 1, 1);

        CancelPushButton = new QPushButton(CSelfCrossCorrelationClass);
        CancelPushButton->setObjectName(QStringLiteral("CancelPushButton"));

        gridLayout_3->addWidget(CancelPushButton, 2, 1, 1, 1);

        InputParGroupBox = new QGroupBox(CSelfCrossCorrelationClass);
        InputParGroupBox->setObjectName(QStringLiteral("InputParGroupBox"));
        gridLayout = new QGridLayout(InputParGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Par1Label = new QLabel(InputParGroupBox);
        Par1Label->setObjectName(QStringLiteral("Par1Label"));

        gridLayout->addWidget(Par1Label, 0, 0, 1, 1);

        Par4DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par4DoubleSpinBox->setObjectName(QStringLiteral("Par4DoubleSpinBox"));
        Par4DoubleSpinBox->setDecimals(1);

        gridLayout->addWidget(Par4DoubleSpinBox, 1, 3, 1, 1);

        Par1DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par1DoubleSpinBox->setObjectName(QStringLiteral("Par1DoubleSpinBox"));
        Par1DoubleSpinBox->setDecimals(1);

        gridLayout->addWidget(Par1DoubleSpinBox, 0, 1, 1, 1);

        Par3DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par3DoubleSpinBox->setObjectName(QStringLiteral("Par3DoubleSpinBox"));
        Par3DoubleSpinBox->setDecimals(1);

        gridLayout->addWidget(Par3DoubleSpinBox, 1, 1, 1, 1);

        Par7DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par7DoubleSpinBox->setObjectName(QStringLiteral("Par7DoubleSpinBox"));
        Par7DoubleSpinBox->setDecimals(1);
        Par7DoubleSpinBox->setMinimum(-100);

        gridLayout->addWidget(Par7DoubleSpinBox, 3, 1, 1, 1);

        Par5Label = new QLabel(InputParGroupBox);
        Par5Label->setObjectName(QStringLiteral("Par5Label"));

        gridLayout->addWidget(Par5Label, 2, 0, 1, 1);

        Par2DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par2DoubleSpinBox->setObjectName(QStringLiteral("Par2DoubleSpinBox"));
        Par2DoubleSpinBox->setDecimals(1);

        gridLayout->addWidget(Par2DoubleSpinBox, 0, 3, 1, 1);

        Par3Label = new QLabel(InputParGroupBox);
        Par3Label->setObjectName(QStringLiteral("Par3Label"));

        gridLayout->addWidget(Par3Label, 1, 0, 1, 1);

        Par4Label = new QLabel(InputParGroupBox);
        Par4Label->setObjectName(QStringLiteral("Par4Label"));

        gridLayout->addWidget(Par4Label, 1, 2, 1, 1);

        Par7Label = new QLabel(InputParGroupBox);
        Par7Label->setObjectName(QStringLiteral("Par7Label"));

        gridLayout->addWidget(Par7Label, 3, 0, 1, 1);

        Par2Label = new QLabel(InputParGroupBox);
        Par2Label->setObjectName(QStringLiteral("Par2Label"));

        gridLayout->addWidget(Par2Label, 0, 2, 1, 1);

        Par5DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par5DoubleSpinBox->setObjectName(QStringLiteral("Par5DoubleSpinBox"));
        Par5DoubleSpinBox->setDecimals(0);
        Par5DoubleSpinBox->setMaximum(10000);

        gridLayout->addWidget(Par5DoubleSpinBox, 2, 1, 1, 1);

        Par8Label = new QLabel(InputParGroupBox);
        Par8Label->setObjectName(QStringLiteral("Par8Label"));

        gridLayout->addWidget(Par8Label, 3, 2, 1, 1);

        Par8DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par8DoubleSpinBox->setObjectName(QStringLiteral("Par8DoubleSpinBox"));
        Par8DoubleSpinBox->setDecimals(1);

        gridLayout->addWidget(Par8DoubleSpinBox, 3, 3, 1, 1);

        Par6Label = new QLabel(InputParGroupBox);
        Par6Label->setObjectName(QStringLiteral("Par6Label"));

        gridLayout->addWidget(Par6Label, 2, 2, 1, 1);

        Par6DoubleSpinBox = new QDoubleSpinBox(InputParGroupBox);
        Par6DoubleSpinBox->setObjectName(QStringLiteral("Par6DoubleSpinBox"));
        Par6DoubleSpinBox->setDecimals(0);
        Par6DoubleSpinBox->setMaximum(10000);

        gridLayout->addWidget(Par6DoubleSpinBox, 2, 3, 1, 1);


        gridLayout_3->addWidget(InputParGroupBox, 0, 0, 1, 2);


        retranslateUi(CSelfCrossCorrelationClass);

        QMetaObject::connectSlotsByName(CSelfCrossCorrelationClass);
    } // setupUi

    void retranslateUi(QDialog *CSelfCrossCorrelationClass)
    {
        CSelfCrossCorrelationClass->setWindowTitle(QApplication::translate("CSelfCrossCorrelationClass", "\350\207\252\347\233\270\345\205\263-\344\272\222\347\233\270\345\205\263", 0));
        groupBox_2->setTitle(QApplication::translate("CSelfCrossCorrelationClass", "\350\276\223\345\207\272\346\226\207\344\273\266", 0));
        OutputFile1Label->setText(QApplication::translate("CSelfCrossCorrelationClass", "\350\276\223\345\207\272\345\221\250\346\234\237\344\277\241\345\217\267F0\357\274\232", 0));
        OutputFile1PushButton->setText(QApplication::translate("CSelfCrossCorrelationClass", ". . .", 0));
        OutputFile2Label->setText(QApplication::translate("CSelfCrossCorrelationClass", "\350\276\223\345\207\272\351\235\236\345\221\250\346\234\237\344\277\241\345\217\267F1\357\274\232", 0));
        OutputFile2PushButton->setText(QApplication::translate("CSelfCrossCorrelationClass", ". . .", 0));
        OutputFile3Label->setText(QApplication::translate("CSelfCrossCorrelationClass", "\350\276\223\345\207\272\344\277\241\345\217\267F0\347\232\204\350\207\252\347\233\270\345\205\263\357\274\232", 0));
        OutputFile3PushButton->setText(QApplication::translate("CSelfCrossCorrelationClass", ". . .", 0));
        OutputFile4Label->setText(QApplication::translate("CSelfCrossCorrelationClass", "\350\276\223\345\207\272\344\277\241\345\217\267F1\347\232\204\350\207\252\347\233\270\345\205\263\357\274\232", 0));
        OutputFile4PushButton->setText(QApplication::translate("CSelfCrossCorrelationClass", ". . .", 0));
        OutputFile5Label->setText(QApplication::translate("CSelfCrossCorrelationClass", "\350\276\223\345\207\272F0\344\270\216F1\347\232\204\344\272\222\347\233\270\345\205\263\357\274\232", 0));
        OutputFile5PushButton->setText(QApplication::translate("CSelfCrossCorrelationClass", ". . .", 0));
        OutputFile6Label->setText(QApplication::translate("CSelfCrossCorrelationClass", "\350\276\223\345\207\272F1\344\270\216F0\347\232\204\344\272\222\347\233\270\345\205\263\357\274\232", 0));
        OutputFile6PushButton->setText(QApplication::translate("CSelfCrossCorrelationClass", ". . .", 0));
        OutputFile7Label->setText(QApplication::translate("CSelfCrossCorrelationClass", "\350\276\223\345\207\272F0\344\270\216F1\344\272\222\347\233\270\345\205\263\347\232\204\347\277\273\350\275\254\357\274\232", 0));
        OutputFile7PushButton->setText(QApplication::translate("CSelfCrossCorrelationClass", ". . .", 0));
        CalPushButton->setText(QApplication::translate("CSelfCrossCorrelationClass", "\350\256\241\347\256\227", 0));
        CancelPushButton->setText(QApplication::translate("CSelfCrossCorrelationClass", "\345\217\226\346\266\210", 0));
        InputParGroupBox->setTitle(QApplication::translate("CSelfCrossCorrelationClass", "\350\276\223\345\205\245\344\277\241\345\217\267\345\217\202\346\225\260", 0));
        Par1Label->setText(QApplication::translate("CSelfCrossCorrelationClass", "f0(Hz)\357\274\232", 0));
        Par5Label->setText(QApplication::translate("CSelfCrossCorrelationClass", "N0\357\274\232", 0));
        Par3Label->setText(QApplication::translate("CSelfCrossCorrelationClass", "A0\357\274\232", 0));
        Par4Label->setText(QApplication::translate("CSelfCrossCorrelationClass", "A1\357\274\232", 0));
        Par7Label->setText(QApplication::translate("CSelfCrossCorrelationClass", "\316\262\357\274\232", 0));
        Par2Label->setText(QApplication::translate("CSelfCrossCorrelationClass", "f1(Hz)\357\274\232", 0));
        Par8Label->setText(QApplication::translate("CSelfCrossCorrelationClass", "\342\226\263t\357\274\210ms\357\274\211\357\274\232", 0));
        Par6Label->setText(QApplication::translate("CSelfCrossCorrelationClass", "N1\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class CSelfCrossCorrelationClass: public Ui_CSelfCrossCorrelationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELF_CROSS_CORRELATION_H
