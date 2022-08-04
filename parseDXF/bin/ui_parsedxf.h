/********************************************************************************
** Form generated from reading UI file 'parsedxf.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARSEDXF_H
#define UI_PARSEDXF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_parseDXF
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_openDXF;
    QPushButton *btn_moveUp;
    QPushButton *btn_moveDown;
    QListWidget *listWidget;

    void setupUi(QMainWindow *parseDXF)
    {
        if (parseDXF->objectName().isEmpty())
            parseDXF->setObjectName(QString::fromUtf8("parseDXF"));
        parseDXF->resize(762, 483);
        centralWidget = new QWidget(parseDXF);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMouseTracking(true);
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->setMouseTracking(true);
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);

        horizontalLayout->addWidget(graphicsView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        btn_openDXF = new QPushButton(centralWidget);
        btn_openDXF->setObjectName(QString::fromUtf8("btn_openDXF"));
        btn_openDXF->setMinimumSize(QSize(0, 30));
        btn_openDXF->setMaximumSize(QSize(100, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        btn_openDXF->setFont(font);

        verticalLayout->addWidget(btn_openDXF);

        btn_moveUp = new QPushButton(centralWidget);
        btn_moveUp->setObjectName(QString::fromUtf8("btn_moveUp"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_moveUp->sizePolicy().hasHeightForWidth());
        btn_moveUp->setSizePolicy(sizePolicy1);
        btn_moveUp->setMinimumSize(QSize(0, 30));
        btn_moveUp->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(btn_moveUp);

        btn_moveDown = new QPushButton(centralWidget);
        btn_moveDown->setObjectName(QString::fromUtf8("btn_moveDown"));
        btn_moveDown->setMinimumSize(QSize(0, 30));
        btn_moveDown->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(btn_moveDown);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy2);
        listWidget->setMaximumSize(QSize(100, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font1.setPointSize(10);
        listWidget->setFont(font1);

        verticalLayout->addWidget(listWidget);


        horizontalLayout->addLayout(verticalLayout);

        parseDXF->setCentralWidget(centralWidget);

        retranslateUi(parseDXF);

        QMetaObject::connectSlotsByName(parseDXF);
    } // setupUi

    void retranslateUi(QMainWindow *parseDXF)
    {
        parseDXF->setWindowTitle(QApplication::translate("parseDXF", "parseDXF", nullptr));
        btn_openDXF->setText(QApplication::translate("parseDXF", "\346\211\223\345\274\200", nullptr));
        btn_moveUp->setText(QApplication::translate("parseDXF", "\344\270\212\347\247\273", nullptr));
        btn_moveDown->setText(QApplication::translate("parseDXF", "\344\270\213\347\247\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class parseDXF: public Ui_parseDXF {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARSEDXF_H
