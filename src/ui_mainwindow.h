/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *newGameButton;
    QPushButton *exitButton;
    QLabel *logoGame;
    QPushButton *rulesButton;
    QGroupBox *rulesBox;
    QLabel *label;
    QPushButton *okButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1500, 900);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(190, 190, 190, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        MainWindow->setPalette(palette);
        MainWindow->setStyleSheet(QStringLiteral("background: url(:/theme/imageDeFond)"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        newGameButton = new QPushButton(centralWidget);
        newGameButton->setObjectName(QStringLiteral("newGameButton"));
        newGameButton->setGeometry(QRect(520, 450, 450, 171));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        newGameButton->setPalette(palette1);
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu"));
        font.setPointSize(40);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        newGameButton->setFont(font);
        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(520, 770, 450, 91));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        exitButton->setPalette(palette2);
        QFont font1;
        font1.setPointSize(40);
        exitButton->setFont(font1);
        logoGame = new QLabel(centralWidget);
        logoGame->setObjectName(QStringLiteral("logoGame"));
        logoGame->setGeometry(QRect(470, 90, 551, 291));
        logoGame->setStyleSheet(QStringLiteral("background-image: url(:/theme/transparentBackground);"));
        logoGame->setPixmap(QPixmap(QString::fromUtf8(":/theme/lo43Shot")));
        rulesButton = new QPushButton(centralWidget);
        rulesButton->setObjectName(QStringLiteral("rulesButton"));
        rulesButton->setGeometry(QRect(520, 650, 450, 91));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        rulesButton->setPalette(palette3);
        QFont font2;
        font2.setPointSize(40);
        font2.setKerning(true);
        rulesButton->setFont(font2);
        rulesBox = new QGroupBox(centralWidget);
        rulesBox->setObjectName(QStringLiteral("rulesBox"));
        rulesBox->setGeometry(QRect(340, 380, 821, 501));
        rulesBox->setStyleSheet(QStringLiteral("background-image: url(:/theme/transparentBackground);"));
        label = new QLabel(rulesBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 761, 351));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label->setPalette(palette4);
        QFont font3;
        font3.setPointSize(16);
        label->setFont(font3);
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        okButton = new QPushButton(rulesBox);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(300, 390, 211, 91));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        okButton->setPalette(palette5);
        okButton->setFont(font1);
        okButton->setStyleSheet(QStringLiteral("background-image: url(:/theme/fondBar);"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "LO43 Shot", Q_NULLPTR));
        newGameButton->setText(QApplication::translate("MainWindow", "NEW GAME", Q_NULLPTR));
        exitButton->setText(QApplication::translate("MainWindow", "EXIT", Q_NULLPTR));
        logoGame->setText(QString());
        rulesButton->setText(QApplication::translate("MainWindow", "RULES", Q_NULLPTR));
        rulesBox->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p>First, every user will have to choose a team among the 30 franchise of the NBA.</p><p>Then, the first user will have to shoot 5 times in a row. </p><p>Every shoot is composed of two phases : power and precision selection. </p><p>You will have to try to hit the higher value possible of the power bar by </p><p>clicking on the button, same with the precision bar.</p><p>The other user will shoot five times as well.</p><p>With the different values of the team, a point will be given to your team if the </p><p>result of the calcul is high enough.</p><p>The user with the higher number of point win.</p></body></html>", Q_NULLPTR));
        okButton->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
