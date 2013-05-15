/*
 * RTSPServer.h
 *
 *  Created on: May 15, 2013
 *      Author: billy
 */

#ifndef RTSPSERVER_H_
#define RTSPSERVER_H_

enum E_RTSP_DIRECTIVES {
    RTSP_OPTIONS,
    RTSP_DESCRIBE,
    RTSP_SETUP,
    RTSP_PLAY,
    RTSP_PAUSE, // not supported yet
    RTSP_RECORD, // not supported yet
    RTSP_ANNOUNCE, // not supported yet
    RTSP_TEARDOWN,
    RTSP_GET_PARAMETER, // not supported yet
    RTSP_SET_PARAMETER, // not supported yet
    RTSP_REDIRECT, // not supported yet
    RTSP_UNKNOWN
};

class RTSPServer {
public:
    RTSPServer();
    virtual ~RTSPServer();
};

#endif /* RTSPSERVER_H_ */
