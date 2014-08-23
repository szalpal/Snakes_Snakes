
#include "snakes.h"


Snakes::Snakes(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//this->setStyleSheet("background-color: #b1b800;");

}

Snakes::~Snakes()
{
	
}

/**
 *	x - argument vetor
 *	y - value vector (calculated according to script)
 */
void Snakes::on_drawButton_clicked()
{
	double xMin = ui.xMinBox->value();
	double xMax = ui.xMaxBox->value();

	if (xMin >= xMax)
	{
		QMessageBox msgBox;
		msgBox.setText("Error: Xmin > Xmax !");
		msgBox.exec();
		return;
	}
	int pointsCounter = ui.pointsCounterBox->value();
	if (pointsCounter < 1)
	{
		QMessageBox msgBox;
		msgBox.setText("Error: Points counter < 1 !");
		msgBox.exec();
		return;
	}

	//Aquiring and calculating data
	double increment = (xMax - xMin) / pointsCounter;
	std::vector<double> x;
	x.push_back(xMin);
	for (int i=1; i<pointsCounter; i++)
	{
		x.push_back(x.back() + increment);
	}
	
	//TODO name of plot
	//Drawing plot
	for (std::list<QString>::iterator it = scriptFileNames.begin(); it != scriptFileNames.end(); ++it)
	{
		try {
			std::vector<double> y = calculateOutput(x, *it);
			drawPlot(x, y);
		}
		catch (ScriptException ex) {
			//Removing corrupted script file
			QByteArray byteArray = it->toLatin1();
			const char *filename = byteArray.data();
			remove(filename);
			//Removing corrupted script reference
			scriptFileNames.erase(it);

			//Error message
			QMessageBox msgBox;
			msgBox.setText("Error: failed to load script");
			msgBox.exec();
		}
	}
}

void Snakes::on_quitButton_clicked() {
	quitApplication();
}

//Choosing script
void Snakes::on_browseButton_clicked() {

	QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), QString(),
		tr("Text Files (*.txt);;Python Files (*.py)"));

	if (!fileName.isEmpty()) {
		QFile file(fileName);
		if (!file.open(QIODevice::ReadOnly)) {
			QMessageBox::critical(this, tr("Error"), tr("Could not open file"));
			return;
		}
		QTextStream in(&file);
		ui.textEdit->setText(in.readAll());
		file.close();
	}
}

void Snakes::on_loadScriptButton_clicked() {
	//Unique filenames
	time_t currentTime = time(NULL);
	std::stringstream ss;
	ss << (long)currentTime;
	std::string name = "script" + ss.str() + ".py";
	QString fileName(name.c_str());

	//Creating file with script
	if (!fileName.isEmpty()) {
		QFile file(fileName);
		if (!file.open(QIODevice::WriteOnly)) {
			//error
		}
		else {
			QTextStream stream(&file);
			stream << ui.textEdit->toPlainText();
			stream.flush();
			file.close();
		}
	}
	//Updating file name list
	this->scriptFileNames.push_back(fileName);

	//Pushing script file to scriptListWidget
	ui.scriptListWidget->addItem(fileName);
}

//Showing script in scriptWindow
void Snakes::on_scriptListWidget_itemClicked(QListWidgetItem *item)
{
	//QListWidgetItem *item = ui.scriptListWidget->currentItem();
	QString fileName = item->text();

	QFile file(fileName);
	if (!file.open(QIODevice::ReadOnly)) {
		return;
	}
	QTextStream in(&file);
	ui.textEdit->setText(in.readAll());
	file.close();
}

void Snakes::on_scriptListWidget_itemDoubleClicked(QListWidgetItem *item)
{
	//Deleting file
	//QListWidgetItem *item = ui.scriptListWidget->currentItem();
	QString fileName = item->text();
	QByteArray byteArray = fileName.toLatin1();
	const char *filename = byteArray.data();
	remove(filename);

	//Removing file reference
	ui.scriptListWidget->removeItemWidget(item);
	scriptFileNames.remove(fileName);
}

void Snakes::drawPlot(std::vector<double> inputX, std::vector<double> inputY) {

	QCustomPlot *customPlot = new QCustomPlot();
	customPlot->resize(500, 500);
	
	QVector<double> x = QVector<double>::fromStdVector(inputX);
	QVector<double> y = QVector<double>::fromStdVector(inputY);

	customPlot->addGraph();
	customPlot->graph(0)->setData(x, y);
	customPlot->xAxis->setLabel("x");
	customPlot->yAxis->setLabel("y");
	customPlot->xAxis->setRange(inputX.front(), inputX.back());
	customPlot->yAxis->setRange(inputY.front(), inputY.back());
	customPlot->replot();

	customPlot->show();
}

//TODO add input and output values names
std::vector<double> Snakes::calculateOutput(std::vector<double> input, QString scriptFileName)
{
	namespace py = boost::python;

	std::vector<double> output;

	//QString to const char*
	QByteArray byteArray = scriptFileName.toLatin1();
	const char *filename = byteArray.data();

	Py_Initialize();
	py::object main_module = py::import("__main__");
	py::object main_namespace = main_module.attr("__dict__");
	try
	{
		for (int i = 0; i < input.size(); i++)
		{
			main_namespace["inputValue"] = input[i];
			py::object noneType = py::exec_file(filename, main_namespace);
			const double res = py::extract<double>(main_namespace["outputValue"]);
			output.push_back(res);
		}
	}
	catch (...)
	{
		throw ScriptException("Failed to load script");
	}
	return output;
}

void Snakes::quitApplication()
{
	//Deleting files
	for (std::list<QString>::iterator it = scriptFileNames.begin(); it != scriptFileNames.end(); ++it)
	{
		QByteArray byteArray = it->toLatin1();
		const char *filename = byteArray.data();
		remove(filename);
	}

	qApp->quit();
}