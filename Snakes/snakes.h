#ifndef SNAKES_H
#define SNAKES_H

#include <QtWidgets/QMainWindow>
#include "ui_snakes.h"
#include "QtPrintSupport\qtprintsupportglobal.h"

#include <stdlib.h>
#include <string>
#include "qcustomplot.h"
#include "qvector.h"
#include "boost\python.hpp"
#include "ScriptException.h"

class Snakes : public QMainWindow
{
	Q_OBJECT

private:
	std::list<QString> scriptFileNames;

public:
	Snakes(QWidget *parent = 0);
	~Snakes();

private slots:
	void on_quitButton_clicked();
	void on_drawButton_clicked();
	void on_browseButton_clicked();
	void on_loadScriptButton_clicked();
	void on_scriptListWidget_itemClicked(QListWidgetItem *item);
	void on_scriptListWidget_itemDoubleClicked(QListWidgetItem *item);

private:
	Ui::SnakesClass ui;

	std::vector<double> calculateOutput(std::vector<double> input, QString scriptFileName);
	void drawPlot(std::vector<double> inputX, std::vector<double> inputY);
	void quitApplication();

};

#endif // SNAKES_H
