#ifndef NSFSPARADIGMOPTIONS_H
#define NSFSPARADIGMOPTIONS_H

#include <QtWidgets>
#include "abstractoptionswidget.h"

class XkorNSFSParadigmOptions : public XkorAbstractOptionsWidget
{
	Q_OBJECT
	
	private:
		QCheckBox * homeAdvantage;
		QCheckBox * showTLAs;
		QRadioButton * xkorStyleMods;
		QRadioButton * nsfsStyleMods;
		QRadioButton * noStyleMods;
		QButtonGroup * styleMods;
		
	private slots:
		void setHomeAdvantage(int x);
		void setShowTLAs(int x);
		void setStyleMods();
		
	public:
		XkorNSFSParadigmOptions(QHash<QString, QVariant> opts, QWidget * parent = 0);
		~XkorNSFSParadigmOptions();
};

#endif
