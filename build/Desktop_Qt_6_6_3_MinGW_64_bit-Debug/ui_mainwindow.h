/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidgetemploye;
    QWidget *pageafficheremployes;
    QGridLayout *gridLayout;
    QTableView *emptable;
    QFrame *frame_8;
    QLineEdit *inputrecherche;
    QPushButton *bouttonrecherche;
    QPushButton *buttontriparnom;
    QWidget *pagesupprimer;
    QPushButton *button_supprimer;
    QLineEdit *idsupprimer;
    QLabel *label_14;
    QWidget *pageajouteremploye;
    QPushButton *bouttonajouter;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_6;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *ajouternom;
    QLineEdit *ajouterprenom;
    QLineEdit *ajoutermail;
    QLineEdit *ajoutermotdepasse;
    QComboBox *combogenre_2;
    QLineEdit *ajouternumtel;
    QLineEdit *ajouteradresse;
    QWidget *pagemodifieremloye;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *ajouternom_3;
    QLineEdit *ajouterprenom_3;
    QLineEdit *ajoutermail_3;
    QComboBox *combogenre;
    QLineEdit *ajoutermotdepasse_3;
    QLineEdit *ajouternumtel_3;
    QLineEdit *ajouteradresse_3;
    QPushButton *bouttonconfirmermodif;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *idemployemodif;
    QPushButton *bouttonconfirmeridmodif;
    QLabel *label_21;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QTextEdit *textHistorique;
    QWidget *pagestatistiques;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout;
    QPushButton *bouttonafficheremloyes;
    QPushButton *bouttonafficherajoutemploye;
    QPushButton *bouttonafficherpagemodifieremploye;
    QPushButton *bouttonafficherpagesupprimer;
    QPushButton *pushButton_6;
    QPushButton *bouttonexportpdf;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1167, 743);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidgetemploye = new QStackedWidget(centralwidget);
        stackedWidgetemploye->setObjectName("stackedWidgetemploye");
        stackedWidgetemploye->setGeometry(QRect(330, 170, 791, 471));
        stackedWidgetemploye->setStyleSheet(QString::fromUtf8("\n"
"    background: white;\n"
"    border: 1px solid lightgray;\n"
"color : black;\n"
"\n"
""));
        pageafficheremployes = new QWidget();
        pageafficheremployes->setObjectName("pageafficheremployes");
        gridLayout = new QGridLayout(pageafficheremployes);
        gridLayout->setObjectName("gridLayout");
        emptable = new QTableView(pageafficheremployes);
        emptable->setObjectName("emptable");
        emptable->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        emptable->verticalHeader()->setVisible(false);

        gridLayout->addWidget(emptable, 1, 0, 1, 1);

        frame_8 = new QFrame(pageafficheremployes);
        frame_8->setObjectName("frame_8");
        frame_8->setMinimumSize(QSize(0, 50));
        frame_8->setFrameShape(QFrame::Shape::StyledPanel);
        frame_8->setFrameShadow(QFrame::Shadow::Raised);
        inputrecherche = new QLineEdit(frame_8);
        inputrecherche->setObjectName("inputrecherche");
        inputrecherche->setGeometry(QRect(50, 10, 281, 28));
        bouttonrecherche = new QPushButton(frame_8);
        bouttonrecherche->setObjectName("bouttonrecherche");
        bouttonrecherche->setGeometry(QRect(360, 10, 91, 29));
        bouttonrecherche->setStyleSheet(QString::fromUtf8("QPushButton::hover{\n"
"background-color:rgb(110, 255, 134);\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:rgb(39, 255, 64);\n"
"}"));
        buttontriparnom = new QPushButton(frame_8);
        buttontriparnom->setObjectName("buttontriparnom");
        buttontriparnom->setGeometry(QRect(470, 10, 121, 29));
        buttontriparnom->setStyleSheet(QString::fromUtf8("QPushButton::hover{\n"
"background-color:rgb(110, 255, 134);\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:rgb(39, 255, 64);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/sorting.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttontriparnom->setIcon(icon);

        gridLayout->addWidget(frame_8, 0, 0, 1, 1);

        stackedWidgetemploye->addWidget(pageafficheremployes);
        pagesupprimer = new QWidget();
        pagesupprimer->setObjectName("pagesupprimer");
        button_supprimer = new QPushButton(pagesupprimer);
        button_supprimer->setObjectName("button_supprimer");
        button_supprimer->setGeometry(QRect(250, 220, 161, 51));
        idsupprimer = new QLineEdit(pagesupprimer);
        idsupprimer->setObjectName("idsupprimer");
        idsupprimer->setGeometry(QRect(330, 150, 201, 41));
        label_14 = new QLabel(pagesupprimer);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(160, 150, 161, 41));
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidgetemploye->addWidget(pagesupprimer);
        pageajouteremploye = new QWidget();
        pageajouteremploye->setObjectName("pageajouteremploye");
        bouttonajouter = new QPushButton(pageajouteremploye);
        bouttonajouter->setObjectName("bouttonajouter");
        bouttonajouter->setGeometry(QRect(290, 360, 161, 51));
        frame = new QFrame(pageajouteremploye);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(180, 40, 169, 291));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_7);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_8);

        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_6);

        frame_2 = new QFrame(pageajouteremploye);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(380, 40, 221, 291));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        ajouternom = new QLineEdit(frame_2);
        ajouternom->setObjectName("ajouternom");

        verticalLayout_3->addWidget(ajouternom);

        ajouterprenom = new QLineEdit(frame_2);
        ajouterprenom->setObjectName("ajouterprenom");

        verticalLayout_3->addWidget(ajouterprenom);

        ajoutermail = new QLineEdit(frame_2);
        ajoutermail->setObjectName("ajoutermail");

        verticalLayout_3->addWidget(ajoutermail);

        ajoutermotdepasse = new QLineEdit(frame_2);
        ajoutermotdepasse->setObjectName("ajoutermotdepasse");

        verticalLayout_3->addWidget(ajoutermotdepasse);

        combogenre_2 = new QComboBox(frame_2);
        combogenre_2->addItem(QString());
        combogenre_2->addItem(QString());
        combogenre_2->setObjectName("combogenre_2");

        verticalLayout_3->addWidget(combogenre_2);

        ajouternumtel = new QLineEdit(frame_2);
        ajouternumtel->setObjectName("ajouternumtel");

        verticalLayout_3->addWidget(ajouternumtel);

        ajouteradresse = new QLineEdit(frame_2);
        ajouteradresse->setObjectName("ajouteradresse");

        verticalLayout_3->addWidget(ajouteradresse);

        stackedWidgetemploye->addWidget(pageajouteremploye);
        pagemodifieremloye = new QWidget();
        pagemodifieremloye->setObjectName("pagemodifieremloye");
        frame_6 = new QFrame(pagemodifieremloye);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(540, 40, 211, 341));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        ajouternom_3 = new QLineEdit(frame_6);
        ajouternom_3->setObjectName("ajouternom_3");

        verticalLayout_4->addWidget(ajouternom_3);

        ajouterprenom_3 = new QLineEdit(frame_6);
        ajouterprenom_3->setObjectName("ajouterprenom_3");

        verticalLayout_4->addWidget(ajouterprenom_3);

        ajoutermail_3 = new QLineEdit(frame_6);
        ajoutermail_3->setObjectName("ajoutermail_3");

        verticalLayout_4->addWidget(ajoutermail_3);

        combogenre = new QComboBox(frame_6);
        combogenre->addItem(QString());
        combogenre->addItem(QString());
        combogenre->setObjectName("combogenre");

        verticalLayout_4->addWidget(combogenre);

        ajoutermotdepasse_3 = new QLineEdit(frame_6);
        ajoutermotdepasse_3->setObjectName("ajoutermotdepasse_3");

        verticalLayout_4->addWidget(ajoutermotdepasse_3);

        ajouternumtel_3 = new QLineEdit(frame_6);
        ajouternumtel_3->setObjectName("ajouternumtel_3");

        verticalLayout_4->addWidget(ajouternumtel_3);

        ajouteradresse_3 = new QLineEdit(frame_6);
        ajouteradresse_3->setObjectName("ajouteradresse_3");

        verticalLayout_4->addWidget(ajouteradresse_3);

        bouttonconfirmermodif = new QPushButton(pagemodifieremloye);
        bouttonconfirmermodif->setObjectName("bouttonconfirmermodif");
        bouttonconfirmermodif->setGeometry(QRect(440, 390, 161, 51));
        frame_7 = new QFrame(pagemodifieremloye);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(350, 40, 169, 341));
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_7);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_15 = new QLabel(frame_7);
        label_15->setObjectName("label_15");
        label_15->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_15);

        label_16 = new QLabel(frame_7);
        label_16->setObjectName("label_16");
        label_16->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_16);

        label_17 = new QLabel(frame_7);
        label_17->setObjectName("label_17");
        label_17->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_17);

        label = new QLabel(frame_7);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label);

        label_18 = new QLabel(frame_7);
        label_18->setObjectName("label_18");
        label_18->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_18);

        label_19 = new QLabel(frame_7);
        label_19->setObjectName("label_19");
        label_19->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_19);

        label_20 = new QLabel(frame_7);
        label_20->setObjectName("label_20");
        label_20->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_20);

        idemployemodif = new QLineEdit(pagemodifieremloye);
        idemployemodif->setObjectName("idemployemodif");
        idemployemodif->setGeometry(QRect(120, 40, 91, 31));
        bouttonconfirmeridmodif = new QPushButton(pagemodifieremloye);
        bouttonconfirmeridmodif->setObjectName("bouttonconfirmeridmodif");
        bouttonconfirmeridmodif->setGeometry(QRect(220, 40, 101, 31));
        label_21 = new QLabel(pagemodifieremloye);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(10, 40, 101, 31));
        label_21->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidgetemploye->addWidget(pagemodifieremloye);
        page = new QWidget();
        page->setObjectName("page");
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName("gridLayout_2");
        textHistorique = new QTextEdit(page);
        textHistorique->setObjectName("textHistorique");

        gridLayout_2->addWidget(textHistorique, 0, 0, 1, 1);

        stackedWidgetemploye->addWidget(page);
        pagestatistiques = new QWidget();
        pagestatistiques->setObjectName("pagestatistiques");
        stackedWidgetemploye->addWidget(pagestatistiques);
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(40, 210, 251, 411));
        frame_3->setStyleSheet(QString::fromUtf8("#frame_3 {\n"
"    background: transparent;\n"
"    border: none;\n"
"}\n"
"QPushButton {\n"
"    background: white;\n"
"    border: none;\n"
"color:black;\n"
"}"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame_3);
        verticalLayout->setObjectName("verticalLayout");
        bouttonafficheremloyes = new QPushButton(frame_3);
        bouttonafficheremloyes->setObjectName("bouttonafficheremloyes");
        bouttonafficheremloyes->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        bouttonafficheremloyes->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/headhunting.png"), QSize(), QIcon::Normal, QIcon::Off);
        bouttonafficheremloyes->setIcon(icon1);

        verticalLayout->addWidget(bouttonafficheremloyes);

        bouttonafficherajoutemploye = new QPushButton(frame_3);
        bouttonafficherajoutemploye->setObjectName("bouttonafficherajoutemploye");
        bouttonafficherajoutemploye->setMinimumSize(QSize(0, 50));
        bouttonafficherajoutemploye->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/add-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        bouttonafficherajoutemploye->setIcon(icon2);

        verticalLayout->addWidget(bouttonafficherajoutemploye);

        bouttonafficherpagemodifieremploye = new QPushButton(frame_3);
        bouttonafficherpagemodifieremploye->setObjectName("bouttonafficherpagemodifieremploye");
        bouttonafficherpagemodifieremploye->setMinimumSize(QSize(0, 50));
        bouttonafficherpagemodifieremploye->setFont(font);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/edit-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        bouttonafficherpagemodifieremploye->setIcon(icon3);

        verticalLayout->addWidget(bouttonafficherpagemodifieremploye);

        bouttonafficherpagesupprimer = new QPushButton(frame_3);
        bouttonafficherpagesupprimer->setObjectName("bouttonafficherpagesupprimer");
        bouttonafficherpagesupprimer->setMinimumSize(QSize(0, 50));
        bouttonafficherpagesupprimer->setFont(font);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        bouttonafficherpagesupprimer->setIcon(icon4);

        verticalLayout->addWidget(bouttonafficherpagesupprimer);

        pushButton_6 = new QPushButton(frame_3);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMinimumSize(QSize(0, 50));
        pushButton_6->setFont(font);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon5);

        verticalLayout->addWidget(pushButton_6);

        bouttonexportpdf = new QPushButton(centralwidget);
        bouttonexportpdf->setObjectName("bouttonexportpdf");
        bouttonexportpdf->setGeometry(QRect(440, 670, 151, 41));
        QFont font1;
        font1.setPointSize(12);
        bouttonexportpdf->setFont(font1);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        bouttonexportpdf->setIcon(icon6);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(630, 670, 151, 41));
        pushButton_2->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(820, 668, 131, 41));
        pushButton->setFont(font);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidgetemploye->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        bouttonrecherche->setText(QCoreApplication::translate("MainWindow", "Recherche", nullptr));
        buttontriparnom->setText(QCoreApplication::translate("MainWindow", "tri par Nom", nullptr));
        button_supprimer->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Id Produit", nullptr));
        bouttonajouter->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Prenom", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "mail", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "mot de passe", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "genre", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "num\303\251ro de t\303\251l\303\250phone", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Adresse", nullptr));
        combogenre_2->setItemText(0, QCoreApplication::translate("MainWindow", "male", nullptr));
        combogenre_2->setItemText(1, QCoreApplication::translate("MainWindow", "female", nullptr));

        combogenre->setItemText(0, QCoreApplication::translate("MainWindow", "male", nullptr));
        combogenre->setItemText(1, QCoreApplication::translate("MainWindow", "female", nullptr));

        bouttonconfirmermodif->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Prenom", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "mail", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "genre", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "mot de passe", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "num\303\251ro de t\303\251l\303\250phone", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Adresse", nullptr));
        bouttonconfirmeridmodif->setText(QCoreApplication::translate("MainWindow", "confirmer", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Id Produit", nullptr));
        bouttonafficheremloyes->setText(QCoreApplication::translate("MainWindow", "Afficher Employes", nullptr));
        bouttonafficherajoutemploye->setText(QCoreApplication::translate("MainWindow", "Ajouter Employe", nullptr));
        bouttonafficherpagemodifieremploye->setText(QCoreApplication::translate("MainWindow", "Modifier Employe", nullptr));
        bouttonafficherpagesupprimer->setText(QCoreApplication::translate("MainWindow", "Supprimer Employe", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Param\303\251tres", nullptr));
        bouttonexportpdf->setText(QCoreApplication::translate("MainWindow", "Export PDF", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Historique", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Statistiques", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
