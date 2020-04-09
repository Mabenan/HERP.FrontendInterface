/*
 * PluginFolder.h
 *
 *  Created on: 31.03.2020
 *      Author: drichte
 */

#ifndef REPS_HERP_FRONTENDINTERFACE_DATA_PLUGINFOLDER_H_
#define REPS_HERP_FRONTENDINTERFACE_DATA_PLUGINFOLDER_H_

#include <HERP.FrontendInterface.Precompiled.h>
#include <QObject>

class HERP_FRONTEND_INTERFACE_DLL_EXPORT PluginFolder: public QObject {
	Q_OBJECT
public:
	QString folder;
	PluginFolder(QString _folder);
	virtual ~PluginFolder();
};

#endif /* REPS_HERP_FRONTENDINTERFACE_DATA_PLUGINFOLDER_H_ */
