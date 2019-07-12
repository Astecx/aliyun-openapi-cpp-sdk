/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_LIVE_MODEL_SETLIVELAZYPULLSTREAMINFOCONFIGREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_SETLIVELAZYPULLSTREAMINFOCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT SetLiveLazyPullStreamInfoConfigRequest : public RpcServiceRequest
			{

			public:
				SetLiveLazyPullStreamInfoConfigRequest();
				~SetLiveLazyPullStreamInfoConfigRequest();

				std::string getPullArgs()const;
				void setPullArgs(const std::string& pullArgs);
				long getCallerParentId()const;
				void setCallerParentId(long callerParentId);
				bool getProxy_original_security_transport()const;
				void setProxy_original_security_transport(bool proxy_original_security_transport);
				std::string getProxy_original_source_ip()const;
				void setProxy_original_source_ip(const std::string& proxy_original_source_ip);
				std::string getOwnerIdLoginEmail()const;
				void setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail);
				std::string getCallerType()const;
				void setCallerType(const std::string& callerType);
				std::string getEagleEyeRpcId()const;
				void setEagleEyeRpcId(const std::string& eagleEyeRpcId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getEagleEyeTraceId()const;
				void setEagleEyeTraceId(const std::string& eagleEyeTraceId);
				std::string getAppName()const;
				void setAppName(const std::string& appName);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getRequestContent()const;
				void setRequestContent(const std::string& requestContent);
				std::string getCallerBidEmail()const;
				void setCallerBidEmail(const std::string& callerBidEmail);
				std::string getLiveapiRequestFrom()const;
				void setLiveapiRequestFrom(const std::string& liveapiRequestFrom);
				std::string getCallerUidEmail()const;
				void setCallerUidEmail(const std::string& callerUidEmail);
				long getCallerUid()const;
				void setCallerUid(long callerUid);
				std::string getApp_ip()const;
				void setApp_ip(const std::string& app_ip);
				std::string getPopProduct()const;
				void setPopProduct(const std::string& popProduct);
				std::string getPullAuthKey()const;
				void setPullAuthKey(const std::string& pullAuthKey);
				std::string getPullAuthType()const;
				void setPullAuthType(const std::string& pullAuthType);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getPullDomainName()const;
				void setPullDomainName(const std::string& pullDomainName);
				std::string getCallerBid()const;
				void setCallerBid(const std::string& callerBid);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getVersion()const;
				void setVersion(const std::string& version);
				bool getProxy_trust_transport_info()const;
				void setProxy_trust_transport_info(bool proxy_trust_transport_info);
				bool getAk_mfa_present()const;
				void setAk_mfa_present(bool ak_mfa_present);
				bool getSecurity_transport()const;
				void setSecurity_transport(bool security_transport);
				std::string getPullAppName()const;
				void setPullAppName(const std::string& pullAppName);
				std::string getServiceCode()const;
				void setServiceCode(const std::string& serviceCode);
				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);
				std::string getEagleEyeUserData()const;
				void setEagleEyeUserData(const std::string& eagleEyeUserData);
				std::string getPullProtocol()const;
				void setPullProtocol(const std::string& pullProtocol);

            private:
				std::string pullArgs_;
				long callerParentId_;
				bool proxy_original_security_transport_;
				std::string proxy_original_source_ip_;
				std::string ownerIdLoginEmail_;
				std::string callerType_;
				std::string eagleEyeRpcId_;
				std::string accessKeyId_;
				std::string eagleEyeTraceId_;
				std::string appName_;
				std::string securityToken_;
				std::string regionId_;
				std::string requestContent_;
				std::string callerBidEmail_;
				std::string liveapiRequestFrom_;
				std::string callerUidEmail_;
				long callerUid_;
				std::string app_ip_;
				std::string popProduct_;
				std::string pullAuthKey_;
				std::string pullAuthType_;
				std::string domainName_;
				std::string pullDomainName_;
				std::string callerBid_;
				long ownerId_;
				std::string version_;
				bool proxy_trust_transport_info_;
				bool ak_mfa_present_;
				bool security_transport_;
				std::string pullAppName_;
				std::string serviceCode_;
				std::string requestId_;
				std::string eagleEyeUserData_;
				std::string pullProtocol_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_SETLIVELAZYPULLSTREAMINFOCONFIGREQUEST_H_