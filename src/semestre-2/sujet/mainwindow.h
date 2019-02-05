#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include <QGraphicsEllipseItem>
#include <QGraphicsView>
#include <QTimer>
#include "array.h"

class NumberGraphicsItem : public QGraphicsEllipseItem
{
public:
	explicit NumberGraphicsItem(const int number, QGraphicsItem* parent=nullptr);

	void paint(QPainter* painter, const QStyleOptionGraphicsItem *option,
			   QWidget *widget=nullptr) override;

	void displayDefault();
	void displayReadenState();
	void displayWrittenState();
private:
	QString text;
	int number;
};

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);

	void resizeEvent(QResizeEvent*);

	~MainWindow();

public slots:
	void update_scene();

private:
	QGraphicsScene scene;
	QGraphicsView view;

	QTimer timer;

	QVector<NumberGraphicsItem*> numberItems;
	Array numbers;
};

#endif // MAINWINDOW_H
