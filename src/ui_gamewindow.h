/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GameWindow
{
public:
    QLabel *backBar;
    QProgressBar *powerBar;
    QProgressBar *precisionBar;
    QPushButton *continueButton;
    QPushButton *shotButton;
    QLabel *imgPlayer;
    QGroupBox *groupScore;
    QLabel *imageScore;
    QLabel *abr1;
    QLabel *scr1;
    QLabel *scr2;
    QLabel *abr2;
    QLabel *cliJ11;
    QLabel *cliJ12;
    QLabel *cliJ13;
    QLabel *cliJ14;
    QLabel *cliJ15;
    QLabel *cliJ23;
    QLabel *cliJ22;
    QLabel *cliJ24;
    QLabel *cliJ21;
    QLabel *cliJ25;
    QLabel *transitiontxt;
    QLabel *transition;
    QLabel *powerLabel;
    QLabel *precisionLabel;
    QLabel *powerDegrade;
    QLabel *precisionDegrade;
    QGroupBox *groupePlayer;
    QLabel *disPlayer;
    QLabel *disPower;
    QLabel *disImage;
    QLabel *disPrecision;
    QLabel *disCoach;
    QLabel *disImpact;

    void setupUi(QDialog *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName(QStringLiteral("GameWindow"));
        GameWindow->resize(1500, 900);
        GameWindow->setStyleSheet(QStringLiteral("background-image: url(:/theme/imageFondGame);"));
        backBar = new QLabel(GameWindow);
        backBar->setObjectName(QStringLiteral("backBar"));
        backBar->setGeometry(QRect(1040, 499, 650, 411));
        backBar->setStyleSheet(QStringLiteral("background-image: url(:/theme/transparentBackground);"));
        backBar->setPixmap(QPixmap(QString::fromUtf8(":/theme/fondBar")));
        powerBar = new QProgressBar(GameWindow);
        powerBar->setObjectName(QStringLiteral("powerBar"));
        powerBar->setGeometry(QRect(1110, 560, 331, 51));
        QPalette palette;
        QBrush brush(QColor(119, 119, 119, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 0));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(186, 189, 182, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush3(QColor(145, 141, 126, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush3);
        powerBar->setPalette(palette);
        powerBar->setStyleSheet(QLatin1String("background: transparent;\n"
"color: #777777"));
        powerBar->setValue(50);
        powerBar->setTextVisible(false);
        powerBar->setOrientation(Qt::Horizontal);
        precisionBar = new QProgressBar(GameWindow);
        precisionBar->setObjectName(QStringLiteral("precisionBar"));
        precisionBar->setGeometry(QRect(1110, 660, 331, 51));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush3);
        precisionBar->setPalette(palette1);
        precisionBar->setStyleSheet(QStringLiteral("background: transparent;"));
        precisionBar->setValue(50);
        precisionBar->setTextVisible(false);
        continueButton = new QPushButton(GameWindow);
        continueButton->setObjectName(QStringLiteral("continueButton"));
        continueButton->setEnabled(true);
        continueButton->setGeometry(QRect(600, 700, 301, 81));
        QPalette palette2;
        QBrush brush4(QColor(85, 87, 83, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush4);
        QBrush brush5(QColor(255, 255, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        QBrush brush6(QColor(190, 190, 190, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        continueButton->setPalette(palette2);
        QFont font;
        font.setPointSize(40);
        continueButton->setFont(font);
        continueButton->setStyleSheet(QStringLiteral("background-image: url(:/theme/imageDeFond);"));
        shotButton = new QPushButton(GameWindow);
        shotButton->setObjectName(QStringLiteral("shotButton"));
        shotButton->setGeometry(QRect(1190, 780, 161, 71));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        shotButton->setPalette(palette3);
        QFont font1;
        font1.setPointSize(30);
        shotButton->setFont(font1);
        shotButton->setStyleSheet(QStringLiteral("background-image: url(:/theme/imageDeFond);"));
        imgPlayer = new QLabel(GameWindow);
        imgPlayer->setObjectName(QStringLiteral("imgPlayer"));
        imgPlayer->setGeometry(QRect(150, 440, 221, 461));
        imgPlayer->setStyleSheet(QStringLiteral("background-image: url(:/theme/transparentBackground);"));
        imgPlayer->setPixmap(QPixmap(QString::fromUtf8(":/theme/whitePlayer")));
        groupScore = new QGroupBox(GameWindow);
        groupScore->setObjectName(QStringLiteral("groupScore"));
        groupScore->setGeometry(QRect(67, 27, 601, 131));
        groupScore->setStyleSheet(QStringLiteral("background-image: url(:/theme/transparentBackground);"));
        imageScore = new QLabel(groupScore);
        imageScore->setObjectName(QStringLiteral("imageScore"));
        imageScore->setGeometry(QRect(0, 20, 598, 110));
        imageScore->setStyleSheet(QStringLiteral("background-image: url(:/theme/transparentBackground);"));
        imageScore->setPixmap(QPixmap(QString::fromUtf8(":/theme/imgScore")));
        abr1 = new QLabel(groupScore);
        abr1->setObjectName(QStringLiteral("abr1"));
        abr1->setGeometry(QRect(20, 30, 181, 51));
        QFont font2;
        font2.setPointSize(33);
        font2.setBold(false);
        font2.setWeight(50);
        abr1->setFont(font2);
        abr1->setStyleSheet(QStringLiteral("background-image: url(:/theme/transparentBackground);"));
        scr1 = new QLabel(groupScore);
        scr1->setObjectName(QStringLiteral("scr1"));
        scr1->setGeometry(QRect(200, 10, 71, 101));
        QFont font3;
        font3.setPointSize(65);
        font3.setBold(false);
        font3.setWeight(50);
        scr1->setFont(font3);
        scr1->setStyleSheet(QStringLiteral("background-image: url(:/theme/transparentBackground);"));
        scr2 = new QLabel(groupScore);
        scr2->setObjectName(QStringLiteral("scr2"));
        scr2->setGeometry(QRect(320, 10, 71, 101));
        scr2->setFont(font3);
        scr2->setStyleSheet(QStringLiteral("background-image: url(:/theme/transparentBackground);"));
        scr2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        abr2 = new QLabel(groupScore);
        abr2->setObjectName(QStringLiteral("abr2"));
        abr2->setGeometry(QRect(400, 30, 181, 51));
        abr2->setFont(font2);
        abr2->setStyleSheet(QStringLiteral("background-image: url(:/theme/transparentBackground);"));
        abr2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cliJ11 = new QLabel(groupScore);
        cliJ11->setObjectName(QStringLiteral("cliJ11"));
        cliJ11->setGeometry(QRect(120, 110, 21, 21));
        cliJ11->setPixmap(QPixmap(QString::fromUtf8(":/theme/blackVoyant")));
        cliJ12 = new QLabel(groupScore);
        cliJ12->setObjectName(QStringLiteral("cliJ12"));
        cliJ12->setGeometry(QRect(150, 110, 21, 21));
        cliJ12->setPixmap(QPixmap(QString::fromUtf8(":/theme/blackVoyant")));
        cliJ13 = new QLabel(groupScore);
        cliJ13->setObjectName(QStringLiteral("cliJ13"));
        cliJ13->setGeometry(QRect(180, 110, 21, 21));
        cliJ13->setPixmap(QPixmap(QString::fromUtf8(":/theme/blackVoyant")));
        cliJ14 = new QLabel(groupScore);
        cliJ14->setObjectName(QStringLiteral("cliJ14"));
        cliJ14->setGeometry(QRect(210, 110, 21, 21));
        cliJ14->setPixmap(QPixmap(QString::fromUtf8(":/theme/blackVoyant")));
        cliJ15 = new QLabel(groupScore);
        cliJ15->setObjectName(QStringLiteral("cliJ15"));
        cliJ15->setGeometry(QRect(240, 110, 21, 21));
        cliJ15->setPixmap(QPixmap(QString::fromUtf8(":/theme/blackVoyant")));
        cliJ23 = new QLabel(groupScore);
        cliJ23->setObjectName(QStringLiteral("cliJ23"));
        cliJ23->setGeometry(QRect(390, 110, 21, 21));
        cliJ23->setPixmap(QPixmap(QString::fromUtf8(":/theme/blackVoyant")));
        cliJ22 = new QLabel(groupScore);
        cliJ22->setObjectName(QStringLiteral("cliJ22"));
        cliJ22->setGeometry(QRect(360, 110, 21, 21));
        cliJ22->setPixmap(QPixmap(QString::fromUtf8(":/theme/blackVoyant")));
        cliJ24 = new QLabel(groupScore);
        cliJ24->setObjectName(QStringLiteral("cliJ24"));
        cliJ24->setGeometry(QRect(420, 110, 21, 21));
        cliJ24->setPixmap(QPixmap(QString::fromUtf8(":/theme/blackVoyant")));
        cliJ21 = new QLabel(groupScore);
        cliJ21->setObjectName(QStringLiteral("cliJ21"));
        cliJ21->setGeometry(QRect(330, 110, 21, 21));
        cliJ21->setPixmap(QPixmap(QString::fromUtf8(":/theme/blackVoyant")));
        cliJ25 = new QLabel(groupScore);
        cliJ25->setObjectName(QStringLiteral("cliJ25"));
        cliJ25->setGeometry(QRect(450, 110, 21, 21));
        cliJ25->setPixmap(QPixmap(QString::fromUtf8(":/theme/blackVoyant")));
        transitiontxt = new QLabel(GameWindow);
        transitiontxt->setObjectName(QStringLiteral("transitiontxt"));
        transitiontxt->setEnabled(true);
        transitiontxt->setGeometry(QRect(0, 0, 1500, 900));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        transitiontxt->setPalette(palette4);
        QFont font4;
        font4.setPointSize(72);
        transitiontxt->setFont(font4);
        transitiontxt->setStyleSheet(QStringLiteral("background-image: url(:/theme/transparentBackground);"));
        transitiontxt->setAlignment(Qt::AlignCenter);
        transition = new QLabel(GameWindow);
        transition->setObjectName(QStringLiteral("transition"));
        transition->setEnabled(true);
        transition->setGeometry(QRect(0, 0, 1500, 900));
        transition->setMinimumSize(QSize(1500, 900));
        transition->setMaximumSize(QSize(1500, 900));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        transition->setPalette(palette5);
        transition->setStyleSheet(QStringLiteral("background-image: url(:/theme/imageFondGame);"));
        transition->setPixmap(QPixmap(QString::fromUtf8(":/theme/fondAroundTir")));
        powerLabel = new QLabel(GameWindow);
        powerLabel->setObjectName(QStringLiteral("powerLabel"));
        powerLabel->setGeometry(QRect(1110, 530, 401, 31));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        QBrush brush7(QColor(115, 210, 22, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Highlight, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        powerLabel->setPalette(palette6);
        QFont font5;
        font5.setPointSize(15);
        powerLabel->setFont(font5);
        powerLabel->setFrameShape(QFrame::NoFrame);
        powerLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        precisionLabel = new QLabel(GameWindow);
        precisionLabel->setObjectName(QStringLiteral("precisionLabel"));
        precisionLabel->setGeometry(QRect(1110, 630, 401, 31));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette7.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Highlight, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        precisionLabel->setPalette(palette7);
        precisionLabel->setFont(font5);
        precisionLabel->setStyleSheet(QStringLiteral("background-image: url(:/theme/transparentBackground);background-image: url(:/theme/transparentBackground);"));
        precisionLabel->setFrameShape(QFrame::NoFrame);
        precisionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        powerDegrade = new QLabel(GameWindow);
        powerDegrade->setObjectName(QStringLiteral("powerDegrade"));
        powerDegrade->setGeometry(QRect(1110, 560, 331, 51));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette8.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette8.setBrush(QPalette::Inactive, QPalette::Highlight, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        powerDegrade->setPalette(palette8);
        powerDegrade->setFont(font5);
        powerDegrade->setFrameShape(QFrame::NoFrame);
        powerDegrade->setPixmap(QPixmap(QString::fromUtf8(":/theme/degradeBar")));
        powerDegrade->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        precisionDegrade = new QLabel(GameWindow);
        precisionDegrade->setObjectName(QStringLiteral("precisionDegrade"));
        precisionDegrade->setGeometry(QRect(1110, 660, 331, 51));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette9.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette9.setBrush(QPalette::Inactive, QPalette::Highlight, brush7);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        precisionDegrade->setPalette(palette9);
        precisionDegrade->setFont(font5);
        precisionDegrade->setFrameShape(QFrame::NoFrame);
        precisionDegrade->setPixmap(QPixmap(QString::fromUtf8(":/theme/degradeBar")));
        precisionDegrade->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupePlayer = new QGroupBox(GameWindow);
        groupePlayer->setObjectName(QStringLiteral("groupePlayer"));
        groupePlayer->setGeometry(QRect(320, 775, 691, 111));
        groupePlayer->setStyleSheet(QStringLiteral("background-image: url(:/theme/transparentBackground);"));
        disPlayer = new QLabel(groupePlayer);
        disPlayer->setObjectName(QStringLiteral("disPlayer"));
        disPlayer->setGeometry(QRect(10, 20, 531, 61));
        disPlayer->setFont(font2);
        disPlayer->setStyleSheet(QStringLiteral("background-image: url(:/theme/transparentBackground);"));
        disPlayer->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        disPower = new QLabel(groupePlayer);
        disPower->setObjectName(QStringLiteral("disPower"));
        disPower->setGeometry(QRect(550, 20, 61, 61));
        disPower->setFont(font2);
        disPower->setStyleSheet(QStringLiteral("background-image: url(:/theme/transparentBackground);"));
        disPower->setAlignment(Qt::AlignCenter);
        disImage = new QLabel(groupePlayer);
        disImage->setObjectName(QStringLiteral("disImage"));
        disImage->setGeometry(QRect(0, 20, 721, 91));
        disImage->setStyleSheet(QStringLiteral("background-image: url(:/theme/transparentBackground);"));
        disImage->setPixmap(QPixmap(QString::fromUtf8(":/theme/lightGrey")));
        disPrecision = new QLabel(groupePlayer);
        disPrecision->setObjectName(QStringLiteral("disPrecision"));
        disPrecision->setGeometry(QRect(620, 20, 51, 61));
        disPrecision->setFont(font2);
        disPrecision->setStyleSheet(QStringLiteral("background-image: url(:/theme/transparentBackground);"));
        disPrecision->setAlignment(Qt::AlignCenter);
        disCoach = new QLabel(groupePlayer);
        disCoach->setObjectName(QStringLiteral("disCoach"));
        disCoach->setGeometry(QRect(11, 70, 531, 41));
        QFont font6;
        font6.setPointSize(19);
        font6.setBold(false);
        font6.setWeight(50);
        disCoach->setFont(font6);
        disCoach->setStyleSheet(QStringLiteral("background-image: url(:/theme/transparentBackground);"));
        disCoach->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        disImpact = new QLabel(groupePlayer);
        disImpact->setObjectName(QStringLiteral("disImpact"));
        disImpact->setGeometry(QRect(620, 60, 61, 61));
        disImpact->setFont(font6);
        disImpact->setStyleSheet(QStringLiteral("background-image: url(:/theme/transparentBackground);"));
        disImpact->setAlignment(Qt::AlignCenter);
        disImage->raise();
        disPlayer->raise();
        disPower->raise();
        disPrecision->raise();
        disCoach->raise();
        disImpact->raise();
        groupePlayer->raise();
        backBar->raise();
        precisionDegrade->raise();
        powerDegrade->raise();
        powerLabel->raise();
        precisionLabel->raise();
        imgPlayer->raise();
        shotButton->raise();
        powerBar->raise();
        precisionBar->raise();
        transition->raise();
        transitiontxt->raise();
        continueButton->raise();
        groupScore->raise();

        retranslateUi(GameWindow);

        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QDialog *GameWindow)
    {
        GameWindow->setWindowTitle(QApplication::translate("GameWindow", "LO43 Shot - Game", Q_NULLPTR));
        backBar->setText(QString());
        continueButton->setText(QApplication::translate("GameWindow", "CONTINUE", Q_NULLPTR));
        shotButton->setText(QApplication::translate("GameWindow", "SHOT", Q_NULLPTR));
        imgPlayer->setText(QString());
        groupScore->setTitle(QString());
        imageScore->setText(QString());
        abr1->setText(QApplication::translate("GameWindow", "ABC", Q_NULLPTR));
        scr1->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        scr2->setText(QApplication::translate("GameWindow", "0", Q_NULLPTR));
        abr2->setText(QApplication::translate("GameWindow", "DEF", Q_NULLPTR));
        cliJ11->setText(QString());
        cliJ12->setText(QString());
        cliJ13->setText(QString());
        cliJ14->setText(QString());
        cliJ15->setText(QString());
        cliJ23->setText(QString());
        cliJ22->setText(QString());
        cliJ24->setText(QString());
        cliJ21->setText(QString());
        cliJ25->setText(QString());
        transitiontxt->setText(QApplication::translate("GameWindow", "WHITE TEAM TO PLAY", Q_NULLPTR));
        transition->setText(QString());
        powerLabel->setText(QApplication::translate("GameWindow", "Power", Q_NULLPTR));
        precisionLabel->setText(QApplication::translate("GameWindow", "Precision", Q_NULLPTR));
        powerDegrade->setText(QString());
        precisionDegrade->setText(QString());
        groupePlayer->setTitle(QString());
        disPlayer->setText(QApplication::translate("GameWindow", "Kentavious Caldwell-pope", Q_NULLPTR));
        disPower->setText(QApplication::translate("GameWindow", "99", Q_NULLPTR));
        disImage->setText(QString());
        disPrecision->setText(QApplication::translate("GameWindow", "99", Q_NULLPTR));
        disCoach->setText(QApplication::translate("GameWindow", "Coach", Q_NULLPTR));
        disImpact->setText(QApplication::translate("GameWindow", "99", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
