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

#include <alibabacloud/ecs/model/AttachNetworkInterfaceRequest.h>

using AlibabaCloud::Ecs::Model::AttachNetworkInterfaceRequest;

AttachNetworkInterfaceRequest::AttachNetworkInterfaceRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "AttachNetworkInterface")
{}

AttachNetworkInterfaceRequest::~AttachNetworkInterfaceRequest()
{}

long AttachNetworkInterfaceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AttachNetworkInterfaceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long AttachNetworkInterfaceRequest::getCallerParentId()const
{
	return callerParentId_;
}

void AttachNetworkInterfaceRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool AttachNetworkInterfaceRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void AttachNetworkInterfaceRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string AttachNetworkInterfaceRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void AttachNetworkInterfaceRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string AttachNetworkInterfaceRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void AttachNetworkInterfaceRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string AttachNetworkInterfaceRequest::getCallerType()const
{
	return callerType_;
}

void AttachNetworkInterfaceRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string AttachNetworkInterfaceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AttachNetworkInterfaceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string AttachNetworkInterfaceRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void AttachNetworkInterfaceRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
}

std::string AttachNetworkInterfaceRequest::getSecurityToken()const
{
	return securityToken_;
}

void AttachNetworkInterfaceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string AttachNetworkInterfaceRequest::getRegionId()const
{
	return regionId_;
}

void AttachNetworkInterfaceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool AttachNetworkInterfaceRequest::getEnable()const
{
	return enable_;
}

void AttachNetworkInterfaceRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", enable ? "true" : "false");
}

std::string AttachNetworkInterfaceRequest::getRequestContent()const
{
	return requestContent_;
}

void AttachNetworkInterfaceRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string AttachNetworkInterfaceRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void AttachNetworkInterfaceRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string AttachNetworkInterfaceRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void AttachNetworkInterfaceRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long AttachNetworkInterfaceRequest::getCallerUid()const
{
	return callerUid_;
}

void AttachNetworkInterfaceRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string AttachNetworkInterfaceRequest::getApp_ip()const
{
	return app_ip_;
}

void AttachNetworkInterfaceRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string AttachNetworkInterfaceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AttachNetworkInterfaceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AttachNetworkInterfaceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AttachNetworkInterfaceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string AttachNetworkInterfaceRequest::getCallerBid()const
{
	return callerBid_;
}

void AttachNetworkInterfaceRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long AttachNetworkInterfaceRequest::getOwnerId()const
{
	return ownerId_;
}

void AttachNetworkInterfaceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool AttachNetworkInterfaceRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void AttachNetworkInterfaceRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool AttachNetworkInterfaceRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void AttachNetworkInterfaceRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool AttachNetworkInterfaceRequest::getSecurity_transport()const
{
	return security_transport_;
}

void AttachNetworkInterfaceRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string AttachNetworkInterfaceRequest::getInstanceId()const
{
	return instanceId_;
}

void AttachNetworkInterfaceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string AttachNetworkInterfaceRequest::getRequestId()const
{
	return requestId_;
}

void AttachNetworkInterfaceRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string AttachNetworkInterfaceRequest::getNetworkInterfaceId()const
{
	return networkInterfaceId_;
}

void AttachNetworkInterfaceRequest::setNetworkInterfaceId(const std::string& networkInterfaceId)
{
	networkInterfaceId_ = networkInterfaceId;
	setParameter("NetworkInterfaceId", networkInterfaceId);
}

