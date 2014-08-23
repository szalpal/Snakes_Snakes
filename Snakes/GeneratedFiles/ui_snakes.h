/********************************************************************************
** Form generated from reading UI file 'snakes.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNAKES_H
#define UI_SNAKES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SnakesClass
{
public:
    QWidget *centralWidget;
    QPushButton *quitButton;
    QPushButton *drawButton;
    QTextEdit *textEdit;
    QPushButton *browseButton;
    QPushButton *loadScriptButton;
    QDoubleSpinBox *xMinBox;
    QSpinBox *pointsCounterBox;
    QDoubleSpinBox *xMaxBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QListWidget *scriptListWidget;
    QLineEdit *inputValueNameWdget;
    QLineEdit *outputValueNameWidget;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SnakesClass)
    {
        if (SnakesClass->objectName().isEmpty())
            SnakesClass->setObjectName(QStringLiteral("SnakesClass"));
        SnakesClass->resize(837, 432);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(177, 184, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        SnakesClass->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../../Studia/ZTPR/snakes icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        SnakesClass->setWindowIcon(icon);
        SnakesClass->setAutoFillBackground(false);
        centralWidget = new QWidget(SnakesClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        quitButton = new QPushButton(centralWidget);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(530, 310, 93, 28));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        quitButton->setPalette(palette1);
        drawButton = new QPushButton(centralWidget);
        drawButton->setObjectName(QStringLiteral("drawButton"));
        drawButton->setGeometry(QRect(380, 310, 93, 28));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(40, 30, 291, 271));
        browseButton = new QPushButton(centralWidget);
        browseButton->setObjectName(QStringLiteral("browseButton"));
        browseButton->setGeometry(QRect(50, 310, 93, 28));
        loadScriptButton = new QPushButton(centralWidget);
        loadScriptButton->setObjectName(QStringLiteral("loadScriptButton"));
        loadScriptButton->setGeometry(QRect(230, 310, 91, 28));
        xMinBox = new QDoubleSpinBox(centralWidget);
        xMinBox->setObjectName(QStringLiteral("xMinBox"));
        xMinBox->setGeometry(QRect(360, 50, 91, 22));
        xMinBox->setMinimum(-100);
        xMinBox->setMaximum(100);
        xMinBox->setValue(-1);
        pointsCounterBox = new QSpinBox(centralWidget);
        pointsCounterBox->setObjectName(QStringLiteral("pointsCounterBox"));
        pointsCounterBox->setGeometry(QRect(590, 50, 51, 22));
        pointsCounterBox->setMinimum(10);
        pointsCounterBox->setMaximum(1000);
        pointsCounterBox->setValue(100);
        xMaxBox = new QDoubleSpinBox(centralWidget);
        xMaxBox->setObjectName(QStringLiteral("xMaxBox"));
        xMaxBox->setGeometry(QRect(480, 50, 91, 22));
        xMaxBox->setMinimum(-100);
        xMaxBox->setMaximum(100);
        xMaxBox->setValue(1);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(360, 30, 53, 16));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush4(QColor(170, 170, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush4);
        QBrush brush5(QColor(255, 255, 191, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush5);
        QBrush brush6(QColor(212, 212, 159, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        QBrush brush7(QColor(85, 85, 63, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush7);
        QBrush brush8(QColor(113, 113, 84, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        QBrush brush9(QColor(212, 212, 191, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        QBrush brush10(QColor(255, 255, 220, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        label->setPalette(palette2);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(480, 30, 53, 16));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        label_2->setPalette(palette3);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(590, 30, 91, 16));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush7);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        label_3->setPalette(palette4);
        scriptListWidget = new QListWidget(centralWidget);
        scriptListWidget->setObjectName(QStringLiteral("scriptListWidget"));
        scriptListWidget->setGeometry(QRect(370, 110, 291, 171));
        inputValueNameWdget = new QLineEdit(centralWidget);
        inputValueNameWdget->setObjectName(QStringLiteral("inputValueNameWdget"));
        inputValueNameWdget->setGeometry(QRect(690, 140, 113, 22));
        outputValueNameWidget = new QLineEdit(centralWidget);
        outputValueNameWidget->setObjectName(QStringLiteral("outputValueNameWidget"));
        outputValueNameWidget->setGeometry(QRect(690, 240, 113, 22));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(690, 110, 131, 16));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush7);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush8);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        label_4->setPalette(palette5);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(690, 210, 131, 16));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush7);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        label_5->setPalette(palette6);
        SnakesClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SnakesClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 837, 26));
        SnakesClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SnakesClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SnakesClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SnakesClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SnakesClass->setStatusBar(statusBar);

        retranslateUi(SnakesClass);

        QMetaObject::connectSlotsByName(SnakesClass);
    } // setupUi

    void retranslateUi(QMainWindow *SnakesClass)
    {
        SnakesClass->setWindowTitle(QApplication::translate("SnakesClass", "Snakes, snakes...", 0));
        quitButton->setText(QApplication::translate("SnakesClass", "Quit", 0));
        drawButton->setText(QApplication::translate("SnakesClass", "Draw!", 0));
        textEdit->setHtml(QApplication::translate("SnakesClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Type script here</p></body></html>", 0));
        browseButton->setText(QApplication::translate("SnakesClass", "Browse", 0));
        loadScriptButton->setText(QApplication::translate("SnakesClass", "Load Script", 0));
        label->setText(QApplication::translate("SnakesClass", "Xmin", 0));
        label_2->setText(QApplication::translate("SnakesClass", "Xmax", 0));
        label_3->setText(QApplication::translate("SnakesClass", "Points counter", 0));
        inputValueNameWdget->setText(QApplication::translate("SnakesClass", "inputValue", 0));
        outputValueNameWidget->setText(QApplication::translate("SnakesClass", "outputValue", 0));
        label_4->setText(QApplication::translate("SnakesClass", "Input Value Name", 0));
        label_5->setText(QApplication::translate("SnakesClass", "Output Value Name", 0));
    } // retranslateUi

};

namespace Ui {
    class SnakesClass: public Ui_SnakesClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNAKES_H
