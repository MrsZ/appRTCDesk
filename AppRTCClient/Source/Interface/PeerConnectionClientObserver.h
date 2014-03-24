/* Copyright (c) 2014 Temasys Communications Pte Ltd
 
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and 
   limitations under the License.

 * PeerConnectionClientObserver.cpp
 *
 *  Created on: Nov 14, 2013
 *      Author: Francois Temasys
 */
#ifndef PEERCONNECTIONCLIENTOBSERVER
#define PEERCONNECTIONCLIENTOBSERVER

#include "talk/app/webrtc/mediastreaminterface.h"
#include "talk/base/json.h"

class PeerConnectionClientObserver
{
public:

  virtual void OnDisconnected() = 0;
  virtual bool CreatePC() = 0;
  virtual void CreateOffer() = 0;
  virtual void SetRemoteOffer(std::string type, std::string sdp) = 0;
  virtual void addIceCandidate(std::string id, std::string sdp, int label) = 0;
  virtual void SetLocalMedia(webrtc::VideoTrackInterface *video_track) = 0;
  virtual void SetRemoteMedia(webrtc::VideoTrackInterface *video_track) = 0;
  virtual void OnServerConnectionFailure() = 0;
  virtual void sendMessage(Json::Value message) = 0;

 protected:
  virtual ~PeerConnectionClientObserver() {}


};

#endif
