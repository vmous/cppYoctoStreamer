/*
 * RTSPSession.h
 *
 *  Created on: May 15, 2013
 *      Author: billy
 */

#ifndef RTSPSESSION_H_
#define RTSPSESSION_H_

/**
 * The RTSP session. According to the specification (RFC2326), a session is
 * not tied to a transport-level connection, like TCP. During a session, a
 * client is allowed to open/close many reliable transport connections to
 * the server or just use a connectionless transport protocol such as UDP.
 */
class RTSPSession {
public:
    RTSPSession();
    virtual ~RTSPSession();
};

#endif /* RTSPSESSION_H_ */
