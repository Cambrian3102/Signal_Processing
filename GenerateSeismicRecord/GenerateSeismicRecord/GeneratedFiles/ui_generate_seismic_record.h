/********************************************************************************
** Form generated from reading UI file 'generate_seismic_record.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATE_SEISMIC_RECORD_H
#define UI_GENERATE_SEISMIC_RECORD_H

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
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_CGenerateSeismicRecordClass
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *InputLayerParGroupBox;
    QGridLayout *gridLayout;
    QLabel *Par1Label;
    QDoubleSpinBox *Par1DoubleSpinBox;
    QLabel *Par2Label;
    QDoubleSpinBox *Par2DoubleSpinBox;
    QLabel *Par16Label;
    QDoubleSpinBox *Par16DoubleSpinBox;
    QLabel *Par3Label;
    QDoubleSpinBox *Par3DoubleSpinBox;
    QLabel *Par4Label;
    QDoubleSpinBox *Par4DoubleSpinBox;
    QLabel *Par17Label;
    QDoubleSpinBox *Par17DoubleSpinBox;
    QLabel *Par5Label;
    QDoubleSpinBox *Par5DoubleSpinBox;
    QLabel *Par6Label;
    QDoubleSpinBox *Par6DoubleSpinBox;
    QLabel *Par18Label;
    QDoubleSpinBox *Par18DoubleSpinBox;
    QLabel *Par7Label;
    QDoubleSpinBox *Par7DoubleSpinBox;
    QLabel *Par8Label;
    QDoubleSpinBox *Par8DoubleSpinBox;
    QLabel *Par19Label;
    QDoubleSpinBox *Par19DoubleSpinBox;
    QLabel *Par9Label;
    QDoubleSpinBox *Par9DoubleSpinBox;
    QLabel *Par10Label;
    QDoubleSpinBox *Par10DoubleSpinBox;
    QLabel *Par20Label;
    QDoubleSpinBox *Par20DoubleSpinBox;
    QLabel *Par11Label;
    QDoubleSpinBox *Par11DoubleSpinBox;
    QLabel *Par12Label;
    QDoubleSpinBox *Par12DoubleSpinBox;
    QLabel *Par21Label;
    QDoubleSpinBox *Par21DoubleSpinBox;
    QGroupBox *RickerWaveletParGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *Par14Label;
    QDoubleSpinBox *Par14DoubleSpinBox;
    QLabel *Par13Label;
    QDoubleSpinBox *Par13DoubleSpinBox;
    QGroupBox *RandomNoisePercentGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *Par15Label;
    QDoubleSpinBox *Par15DoubleSpinBox;
    QSpacerItem *horizontalSpacer;
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
    QPushButton *CalPushButton;
    QPushButton *CancelPushButton;

    void setupUi(QDialog *CGenerateSeismicRecordClass)
    {
        if (CGenerateSeismicRecordClass->objectName().isEmpty())
            CGenerateSeismicRecordClass->setObjectName(QStringLiteral("CGenerateSeismicRecordClass"));
        CGenerateSeismicRecordClass->resize(851, 817);
        gridLayout_5 = new QGridLayout(CGenerateSeismicRecordClass);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        InputLayerParGroupBox = new QGroupBox(CGenerateSeismicRecordClass);
        InputLayerParGroupBox->setObjectName(QStringLiteral("InputLayerParGroupBox"));
        gridLayout = new QGridLayout(InputLayerParGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Par1Label = new QLabel(InputLayerParGroupBox);
        Par1Label->setObjectName(QStringLiteral("Par1Label"));

        gridLayout->addWidget(Par1Label, 0, 0, 1, 1);

        Par1DoubleSpinBox = new QDoubleSpinBox(InputLayerParGroupBox);
        Par1DoubleSpinBox->setObjectName(QStringLiteral("Par1DoubleSpinBox"));
        Par1DoubleSpinBox->setDecimals(1);
        Par1DoubleSpinBox->setMaximum(1000);

        gridLayout->addWidget(Par1DoubleSpinBox, 0, 1, 1, 1);

        Par2Label = new QLabel(InputLayerParGroupBox);
        Par2Label->setObjectName(QStringLiteral("Par2Label"));

        gridLayout->addWidget(Par2Label, 0, 2, 1, 1);

        Par2DoubleSpinBox = new QDoubleSpinBox(InputLayerParGroupBox);
        Par2DoubleSpinBox->setObjectName(QStringLiteral("Par2DoubleSpinBox"));
        Par2DoubleSpinBox->setDecimals(1);
        Par2DoubleSpinBox->setMaximum(10000);

        gridLayout->addWidget(Par2DoubleSpinBox, 0, 3, 1, 1);

        Par16Label = new QLabel(InputLayerParGroupBox);
        Par16Label->setObjectName(QStringLiteral("Par16Label"));

        gridLayout->addWidget(Par16Label, 0, 4, 1, 1);

        Par16DoubleSpinBox = new QDoubleSpinBox(InputLayerParGroupBox);
        Par16DoubleSpinBox->setObjectName(QStringLiteral("Par16DoubleSpinBox"));
        Par16DoubleSpinBox->setDecimals(1);
        Par16DoubleSpinBox->setMaximum(10000);

        gridLayout->addWidget(Par16DoubleSpinBox, 0, 5, 1, 1);

        Par3Label = new QLabel(InputLayerParGroupBox);
        Par3Label->setObjectName(QStringLiteral("Par3Label"));

        gridLayout->addWidget(Par3Label, 1, 0, 1, 1);

        Par3DoubleSpinBox = new QDoubleSpinBox(InputLayerParGroupBox);
        Par3DoubleSpinBox->setObjectName(QStringLiteral("Par3DoubleSpinBox"));
        Par3DoubleSpinBox->setDecimals(1);
        Par3DoubleSpinBox->setMaximum(1000);

        gridLayout->addWidget(Par3DoubleSpinBox, 1, 1, 1, 1);

        Par4Label = new QLabel(InputLayerParGroupBox);
        Par4Label->setObjectName(QStringLiteral("Par4Label"));

        gridLayout->addWidget(Par4Label, 1, 2, 1, 1);

        Par4DoubleSpinBox = new QDoubleSpinBox(InputLayerParGroupBox);
        Par4DoubleSpinBox->setObjectName(QStringLiteral("Par4DoubleSpinBox"));
        Par4DoubleSpinBox->setDecimals(1);
        Par4DoubleSpinBox->setMaximum(10000);

        gridLayout->addWidget(Par4DoubleSpinBox, 1, 3, 1, 1);

        Par17Label = new QLabel(InputLayerParGroupBox);
        Par17Label->setObjectName(QStringLiteral("Par17Label"));

        gridLayout->addWidget(Par17Label, 1, 4, 1, 1);

        Par17DoubleSpinBox = new QDoubleSpinBox(InputLayerParGroupBox);
        Par17DoubleSpinBox->setObjectName(QStringLiteral("Par17DoubleSpinBox"));
        Par17DoubleSpinBox->setDecimals(1);
        Par17DoubleSpinBox->setMaximum(10000);

        gridLayout->addWidget(Par17DoubleSpinBox, 1, 5, 1, 1);

        Par5Label = new QLabel(InputLayerParGroupBox);
        Par5Label->setObjectName(QStringLiteral("Par5Label"));

        gridLayout->addWidget(Par5Label, 2, 0, 1, 1);

        Par5DoubleSpinBox = new QDoubleSpinBox(InputLayerParGroupBox);
        Par5DoubleSpinBox->setObjectName(QStringLiteral("Par5DoubleSpinBox"));
        Par5DoubleSpinBox->setDecimals(1);
        Par5DoubleSpinBox->setMaximum(1000);

        gridLayout->addWidget(Par5DoubleSpinBox, 2, 1, 1, 1);

        Par6Label = new QLabel(InputLayerParGroupBox);
        Par6Label->setObjectName(QStringLiteral("Par6Label"));

        gridLayout->addWidget(Par6Label, 2, 2, 1, 1);

        Par6DoubleSpinBox = new QDoubleSpinBox(InputLayerParGroupBox);
        Par6DoubleSpinBox->setObjectName(QStringLiteral("Par6DoubleSpinBox"));
        Par6DoubleSpinBox->setDecimals(1);
        Par6DoubleSpinBox->setMaximum(10000);

        gridLayout->addWidget(Par6DoubleSpinBox, 2, 3, 1, 1);

        Par18Label = new QLabel(InputLayerParGroupBox);
        Par18Label->setObjectName(QStringLiteral("Par18Label"));

        gridLayout->addWidget(Par18Label, 2, 4, 1, 1);

        Par18DoubleSpinBox = new QDoubleSpinBox(InputLayerParGroupBox);
        Par18DoubleSpinBox->setObjectName(QStringLiteral("Par18DoubleSpinBox"));
        Par18DoubleSpinBox->setDecimals(1);
        Par18DoubleSpinBox->setMaximum(10000);

        gridLayout->addWidget(Par18DoubleSpinBox, 2, 5, 1, 1);

        Par7Label = new QLabel(InputLayerParGroupBox);
        Par7Label->setObjectName(QStringLiteral("Par7Label"));

        gridLayout->addWidget(Par7Label, 3, 0, 1, 1);

        Par7DoubleSpinBox = new QDoubleSpinBox(InputLayerParGroupBox);
        Par7DoubleSpinBox->setObjectName(QStringLiteral("Par7DoubleSpinBox"));
        Par7DoubleSpinBox->setDecimals(1);
        Par7DoubleSpinBox->setMinimum(-100);
        Par7DoubleSpinBox->setMaximum(1000);

        gridLayout->addWidget(Par7DoubleSpinBox, 3, 1, 1, 1);

        Par8Label = new QLabel(InputLayerParGroupBox);
        Par8Label->setObjectName(QStringLiteral("Par8Label"));

        gridLayout->addWidget(Par8Label, 3, 2, 1, 1);

        Par8DoubleSpinBox = new QDoubleSpinBox(InputLayerParGroupBox);
        Par8DoubleSpinBox->setObjectName(QStringLiteral("Par8DoubleSpinBox"));
        Par8DoubleSpinBox->setDecimals(1);
        Par8DoubleSpinBox->setMaximum(10000);

        gridLayout->addWidget(Par8DoubleSpinBox, 3, 3, 1, 1);

        Par19Label = new QLabel(InputLayerParGroupBox);
        Par19Label->setObjectName(QStringLiteral("Par19Label"));

        gridLayout->addWidget(Par19Label, 3, 4, 1, 1);

        Par19DoubleSpinBox = new QDoubleSpinBox(InputLayerParGroupBox);
        Par19DoubleSpinBox->setObjectName(QStringLiteral("Par19DoubleSpinBox"));
        Par19DoubleSpinBox->setDecimals(1);
        Par19DoubleSpinBox->setMaximum(10000);

        gridLayout->addWidget(Par19DoubleSpinBox, 3, 5, 1, 1);

        Par9Label = new QLabel(InputLayerParGroupBox);
        Par9Label->setObjectName(QStringLiteral("Par9Label"));

        gridLayout->addWidget(Par9Label, 4, 0, 1, 1);

        Par9DoubleSpinBox = new QDoubleSpinBox(InputLayerParGroupBox);
        Par9DoubleSpinBox->setObjectName(QStringLiteral("Par9DoubleSpinBox"));
        Par9DoubleSpinBox->setDecimals(1);
        Par9DoubleSpinBox->setMaximum(1000);

        gridLayout->addWidget(Par9DoubleSpinBox, 4, 1, 1, 1);

        Par10Label = new QLabel(InputLayerParGroupBox);
        Par10Label->setObjectName(QStringLiteral("Par10Label"));

        gridLayout->addWidget(Par10Label, 4, 2, 1, 1);

        Par10DoubleSpinBox = new QDoubleSpinBox(InputLayerParGroupBox);
        Par10DoubleSpinBox->setObjectName(QStringLiteral("Par10DoubleSpinBox"));
        Par10DoubleSpinBox->setDecimals(1);
        Par10DoubleSpinBox->setMaximum(10000);

        gridLayout->addWidget(Par10DoubleSpinBox, 4, 3, 1, 1);

        Par20Label = new QLabel(InputLayerParGroupBox);
        Par20Label->setObjectName(QStringLiteral("Par20Label"));

        gridLayout->addWidget(Par20Label, 4, 4, 1, 1);

        Par20DoubleSpinBox = new QDoubleSpinBox(InputLayerParGroupBox);
        Par20DoubleSpinBox->setObjectName(QStringLiteral("Par20DoubleSpinBox"));
        Par20DoubleSpinBox->setDecimals(1);
        Par20DoubleSpinBox->setMaximum(10000);

        gridLayout->addWidget(Par20DoubleSpinBox, 4, 5, 1, 1);

        Par11Label = new QLabel(InputLayerParGroupBox);
        Par11Label->setObjectName(QStringLiteral("Par11Label"));

        gridLayout->addWidget(Par11Label, 5, 0, 1, 1);

        Par11DoubleSpinBox = new QDoubleSpinBox(InputLayerParGroupBox);
        Par11DoubleSpinBox->setObjectName(QStringLiteral("Par11DoubleSpinBox"));
        Par11DoubleSpinBox->setDecimals(1);
        Par11DoubleSpinBox->setMaximum(1000);

        gridLayout->addWidget(Par11DoubleSpinBox, 5, 1, 1, 1);

        Par12Label = new QLabel(InputLayerParGroupBox);
        Par12Label->setObjectName(QStringLiteral("Par12Label"));

        gridLayout->addWidget(Par12Label, 5, 2, 1, 1);

        Par12DoubleSpinBox = new QDoubleSpinBox(InputLayerParGroupBox);
        Par12DoubleSpinBox->setObjectName(QStringLiteral("Par12DoubleSpinBox"));
        Par12DoubleSpinBox->setDecimals(1);
        Par12DoubleSpinBox->setMaximum(10000);

        gridLayout->addWidget(Par12DoubleSpinBox, 5, 3, 1, 1);

        Par21Label = new QLabel(InputLayerParGroupBox);
        Par21Label->setObjectName(QStringLiteral("Par21Label"));

        gridLayout->addWidget(Par21Label, 5, 4, 1, 1);

        Par21DoubleSpinBox = new QDoubleSpinBox(InputLayerParGroupBox);
        Par21DoubleSpinBox->setObjectName(QStringLiteral("Par21DoubleSpinBox"));
        Par21DoubleSpinBox->setDecimals(1);
        Par21DoubleSpinBox->setMaximum(10000);

        gridLayout->addWidget(Par21DoubleSpinBox, 5, 5, 1, 1);


        gridLayout_5->addWidget(InputLayerParGroupBox, 0, 0, 1, 2);

        RickerWaveletParGroupBox = new QGroupBox(CGenerateSeismicRecordClass);
        RickerWaveletParGroupBox->setObjectName(QStringLiteral("RickerWaveletParGroupBox"));
        gridLayout_3 = new QGridLayout(RickerWaveletParGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        Par14Label = new QLabel(RickerWaveletParGroupBox);
        Par14Label->setObjectName(QStringLiteral("Par14Label"));

        gridLayout_3->addWidget(Par14Label, 0, 3, 1, 1);

        Par14DoubleSpinBox = new QDoubleSpinBox(RickerWaveletParGroupBox);
        Par14DoubleSpinBox->setObjectName(QStringLiteral("Par14DoubleSpinBox"));
        Par14DoubleSpinBox->setDecimals(1);
        Par14DoubleSpinBox->setMaximum(100);

        gridLayout_3->addWidget(Par14DoubleSpinBox, 0, 4, 1, 1);

        Par13Label = new QLabel(RickerWaveletParGroupBox);
        Par13Label->setObjectName(QStringLiteral("Par13Label"));

        gridLayout_3->addWidget(Par13Label, 0, 0, 1, 1);

        Par13DoubleSpinBox = new QDoubleSpinBox(RickerWaveletParGroupBox);
        Par13DoubleSpinBox->setObjectName(QStringLiteral("Par13DoubleSpinBox"));
        Par13DoubleSpinBox->setDecimals(1);

        gridLayout_3->addWidget(Par13DoubleSpinBox, 0, 2, 1, 1);


        gridLayout_5->addWidget(RickerWaveletParGroupBox, 1, 0, 1, 2);

        RandomNoisePercentGroupBox = new QGroupBox(CGenerateSeismicRecordClass);
        RandomNoisePercentGroupBox->setObjectName(QStringLiteral("RandomNoisePercentGroupBox"));
        gridLayout_4 = new QGridLayout(RandomNoisePercentGroupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        Par15Label = new QLabel(RandomNoisePercentGroupBox);
        Par15Label->setObjectName(QStringLiteral("Par15Label"));
        Par15Label->setMinimumSize(QSize(175, 0));

        gridLayout_4->addWidget(Par15Label, 0, 0, 1, 1);

        Par15DoubleSpinBox = new QDoubleSpinBox(RandomNoisePercentGroupBox);
        Par15DoubleSpinBox->setObjectName(QStringLiteral("Par15DoubleSpinBox"));
        Par15DoubleSpinBox->setMinimumSize(QSize(176, 0));
        Par15DoubleSpinBox->setDecimals(1);
        Par15DoubleSpinBox->setMaximum(1000);

        gridLayout_4->addWidget(Par15DoubleSpinBox, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 2, 1, 1);


        gridLayout_5->addWidget(RandomNoisePercentGroupBox, 2, 0, 1, 2);

        groupBox_2 = new QGroupBox(CGenerateSeismicRecordClass);
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

        gridLayout_2->addWidget(OutputFile1LineEdit, 0, 1, 1, 2);

        OutputFile1PushButton = new QPushButton(groupBox_2);
        OutputFile1PushButton->setObjectName(QStringLiteral("OutputFile1PushButton"));

        gridLayout_2->addWidget(OutputFile1PushButton, 0, 3, 1, 1);

        OutputFile2Label = new QLabel(groupBox_2);
        OutputFile2Label->setObjectName(QStringLiteral("OutputFile2Label"));

        gridLayout_2->addWidget(OutputFile2Label, 1, 0, 1, 1);

        OutputFile2LineEdit = new QLineEdit(groupBox_2);
        OutputFile2LineEdit->setObjectName(QStringLiteral("OutputFile2LineEdit"));

        gridLayout_2->addWidget(OutputFile2LineEdit, 1, 1, 1, 2);

        OutputFile2PushButton = new QPushButton(groupBox_2);
        OutputFile2PushButton->setObjectName(QStringLiteral("OutputFile2PushButton"));

        gridLayout_2->addWidget(OutputFile2PushButton, 1, 3, 1, 1);

        OutputFile3Label = new QLabel(groupBox_2);
        OutputFile3Label->setObjectName(QStringLiteral("OutputFile3Label"));

        gridLayout_2->addWidget(OutputFile3Label, 2, 0, 1, 1);

        OutputFile3LineEdit = new QLineEdit(groupBox_2);
        OutputFile3LineEdit->setObjectName(QStringLiteral("OutputFile3LineEdit"));

        gridLayout_2->addWidget(OutputFile3LineEdit, 2, 1, 1, 2);

        OutputFile3PushButton = new QPushButton(groupBox_2);
        OutputFile3PushButton->setObjectName(QStringLiteral("OutputFile3PushButton"));

        gridLayout_2->addWidget(OutputFile3PushButton, 2, 3, 1, 1);

        OutputFile4Label = new QLabel(groupBox_2);
        OutputFile4Label->setObjectName(QStringLiteral("OutputFile4Label"));

        gridLayout_2->addWidget(OutputFile4Label, 3, 0, 1, 1);

        OutputFile4LineEdit = new QLineEdit(groupBox_2);
        OutputFile4LineEdit->setObjectName(QStringLiteral("OutputFile4LineEdit"));

        gridLayout_2->addWidget(OutputFile4LineEdit, 3, 1, 1, 2);

        OutputFile4PushButton = new QPushButton(groupBox_2);
        OutputFile4PushButton->setObjectName(QStringLiteral("OutputFile4PushButton"));

        gridLayout_2->addWidget(OutputFile4PushButton, 3, 3, 1, 1);

        OutputFile5Label = new QLabel(groupBox_2);
        OutputFile5Label->setObjectName(QStringLiteral("OutputFile5Label"));

        gridLayout_2->addWidget(OutputFile5Label, 4, 0, 1, 1);

        OutputFile5LineEdit = new QLineEdit(groupBox_2);
        OutputFile5LineEdit->setObjectName(QStringLiteral("OutputFile5LineEdit"));

        gridLayout_2->addWidget(OutputFile5LineEdit, 4, 1, 1, 2);

        OutputFile5PushButton = new QPushButton(groupBox_2);
        OutputFile5PushButton->setObjectName(QStringLiteral("OutputFile5PushButton"));

        gridLayout_2->addWidget(OutputFile5PushButton, 4, 3, 1, 1);

        OutputFile6Label = new QLabel(groupBox_2);
        OutputFile6Label->setObjectName(QStringLiteral("OutputFile6Label"));

        gridLayout_2->addWidget(OutputFile6Label, 5, 0, 1, 2);

        OutputFile6LineEdit = new QLineEdit(groupBox_2);
        OutputFile6LineEdit->setObjectName(QStringLiteral("OutputFile6LineEdit"));

        gridLayout_2->addWidget(OutputFile6LineEdit, 5, 2, 1, 1);

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


        gridLayout_5->addWidget(groupBox_2, 3, 0, 1, 2);

        CalPushButton = new QPushButton(CGenerateSeismicRecordClass);
        CalPushButton->setObjectName(QStringLiteral("CalPushButton"));

        gridLayout_5->addWidget(CalPushButton, 4, 0, 1, 1);

        CancelPushButton = new QPushButton(CGenerateSeismicRecordClass);
        CancelPushButton->setObjectName(QStringLiteral("CancelPushButton"));

        gridLayout_5->addWidget(CancelPushButton, 4, 1, 1, 1);


        retranslateUi(CGenerateSeismicRecordClass);

        QMetaObject::connectSlotsByName(CGenerateSeismicRecordClass);
    } // setupUi

    void retranslateUi(QDialog *CGenerateSeismicRecordClass)
    {
        CGenerateSeismicRecordClass->setWindowTitle(QApplication::translate("CGenerateSeismicRecordClass", "\347\224\237\346\210\220\345\220\210\346\210\220\345\234\260\351\234\207\350\256\260\345\275\225", 0));
        InputLayerParGroupBox->setTitle(QApplication::translate("CGenerateSeismicRecordClass", "\350\276\223\345\205\245\345\234\260\345\261\202\345\217\202\346\225\260", 0));
        Par1Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\347\254\2541\345\261\202\345\216\232\345\272\246(m)\357\274\232", 0));
        Par2Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\347\254\2541\345\261\202\351\200\237\345\272\246(m/s)\357\274\232", 0));
        Par16Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\347\254\2541\345\261\202\345\257\206\345\272\246(kg/m3)\357\274\232", 0));
        Par3Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\347\254\2542\345\261\202\345\216\232\345\272\246(m)\357\274\232", 0));
        Par4Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\347\254\2542\345\261\202\351\200\237\345\272\246(m/s)\357\274\232", 0));
        Par17Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\347\254\2542\345\261\202\345\257\206\345\272\246(kg/m3)\357\274\232", 0));
        Par5Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\347\254\2543\345\261\202\345\216\232\345\272\246(m)\357\274\232", 0));
        Par6Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\347\254\2543\345\261\202\351\200\237\345\272\246(m/s)\357\274\232", 0));
        Par18Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\347\254\2543\345\261\202\345\257\206\345\272\246(kg/m3)\357\274\232", 0));
        Par7Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\347\254\2544\345\261\202\345\216\232\345\272\246(m)\357\274\232", 0));
        Par8Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\347\254\2544\345\261\202\351\200\237\345\272\246(m/s)\357\274\232", 0));
        Par19Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\347\254\2544\345\261\202\345\257\206\345\272\246(kg/m3)\357\274\232", 0));
        Par9Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\347\254\2545\345\261\202\345\216\232\345\272\246(m)\357\274\232", 0));
        Par10Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\347\254\2545\345\261\202\351\200\237\345\272\246(m/s)\357\274\232", 0));
        Par20Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\347\254\2545\345\261\202\345\257\206\345\272\246(kg/m3)\357\274\232", 0));
        Par11Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\347\254\2546\345\261\202\345\216\232\345\272\246(m)\357\274\232", 0));
        Par12Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\347\254\2546\345\261\202\351\200\237\345\272\246(m/s)\357\274\232", 0));
        Par21Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\347\254\2546\345\261\202\345\257\206\345\272\246(kg/m3)\357\274\232", 0));
        RickerWaveletParGroupBox->setTitle(QApplication::translate("CGenerateSeismicRecordClass", "\350\276\223\345\205\245\351\233\267\345\205\213\345\255\220\346\263\242\345\217\202\346\225\260", 0));
        Par14Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\342\226\263t\357\274\210ms\357\274\211\357\274\232", 0));
        Par13Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\345\255\220\346\263\242\344\270\273\351\242\221(Hz)\357\274\232", 0));
        RandomNoisePercentGroupBox->setTitle(QApplication::translate("CGenerateSeismicRecordClass", "\350\276\223\345\205\245\351\232\217\346\234\272\345\231\252\351\237\263\345\217\202\346\225\260", 0));
        Par15Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\345\231\252\351\237\263\345\274\272\345\272\246(%)\357\274\232", 0));
        groupBox_2->setTitle(QApplication::translate("CGenerateSeismicRecordClass", "\350\276\223\345\207\272\346\226\207\344\273\266", 0));
        OutputFile1Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\350\276\223\345\207\272\351\233\267\345\205\213\345\255\220\346\263\242b(t)\357\274\232", 0));
        OutputFile1PushButton->setText(QApplication::translate("CGenerateSeismicRecordClass", ". . .", 0));
        OutputFile2Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\350\276\223\345\207\272\351\232\217\346\234\272\345\231\252\351\237\263n(t)\357\274\232", 0));
        OutputFile2PushButton->setText(QApplication::translate("CGenerateSeismicRecordClass", ". . .", 0));
        OutputFile3Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\350\276\223\345\207\272\345\234\260\345\261\202\345\217\215\345\260\204\347\263\273\346\225\260\316\276(t)\357\274\232", 0));
        OutputFile3PushButton->setText(QApplication::translate("CGenerateSeismicRecordClass", ". . .", 0));
        OutputFile4Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\350\276\223\345\207\272\345\220\210\346\210\220\345\234\260\351\234\207\350\256\260\345\275\225x(t)\357\274\232", 0));
        OutputFile4PushButton->setText(QApplication::translate("CGenerateSeismicRecordClass", ". . .", 0));
        OutputFile5Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\350\276\223\345\207\272\351\233\267\345\205\213\345\255\220\346\263\242\346\214\257\345\271\205\350\260\261B(k)\357\274\232", 0));
        OutputFile5PushButton->setText(QApplication::translate("CGenerateSeismicRecordClass", ". . .", 0));
        OutputFile6Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\350\276\223\345\207\272\346\227\240\345\231\252\351\237\263\345\234\260\351\234\207\350\256\260\345\275\225\346\214\257\345\271\205\350\260\261S(k)\357\274\232", 0));
        OutputFile6PushButton->setText(QApplication::translate("CGenerateSeismicRecordClass", ". . .", 0));
        OutputFile7Label->setText(QApplication::translate("CGenerateSeismicRecordClass", "\350\276\223\345\207\272\345\220\253\345\231\252\351\237\263\345\234\260\351\234\207\350\256\260\345\275\225\346\214\257\345\271\205\350\260\261X(k)\357\274\232", 0));
        OutputFile7PushButton->setText(QApplication::translate("CGenerateSeismicRecordClass", ". . .", 0));
        CalPushButton->setText(QApplication::translate("CGenerateSeismicRecordClass", "\350\256\241\347\256\227", 0));
        CancelPushButton->setText(QApplication::translate("CGenerateSeismicRecordClass", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class CGenerateSeismicRecordClass: public Ui_CGenerateSeismicRecordClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATE_SEISMIC_RECORD_H
