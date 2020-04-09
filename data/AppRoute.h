/*
 * AppRoute.h
 *
 *  Created on: 10.03.2020
 *      Author: drichte
 */

#ifndef REPS_HERP_FRONTENDINTERFACE_DATA_APPROUTE_H_
#define REPS_HERP_FRONTENDINTERFACE_DATA_APPROUTE_H_

#include <HERP.FrontendInterface.Precompiled.h>
#include <QObject>
class HERP_FRONTEND_INTERFACE_DLL_EXPORT AppRoute :  public QObject {
	Q_OBJECT
public:

	QString routeName;
	QString viewKey;
	QString neededAuthObject;
	bool hiddenRoute;

	AppRoute();
	virtual ~AppRoute();
};

#endif /* REPS_HERP_FRONTENDPROVIDER_DATA_APPROUTE_H_ */
