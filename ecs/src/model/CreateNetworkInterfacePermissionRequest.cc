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

#include <alibabacloud/ecs/model/CreateNetworkInterfacePermissionRequest.h>

using AlibabaCloud::Ecs::Model::CreateNetworkInterfacePermissionRequest;

CreateNetworkInterfacePermissionRequest::CreateNetworkInterfacePermissionRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateNetworkInterfacePermission")
{}

CreateNetworkInterfacePermissionRequest::~CreateNetworkInterfacePermissionRequest()
{}

long CreateNetworkInterfacePermissionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateNetworkInterfacePermissionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long CreateNetworkInterfacePermissionRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateNetworkInterfacePermissionRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool CreateNetworkInterfacePermissionRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateNetworkInterfacePermissionRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string CreateNetworkInterfacePermissionRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateNetworkInterfacePermissionRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateNetworkInterfacePermissionRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateNetworkInterfacePermissionRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateNetworkInterfacePermissionRequest::getCallerType()const
{
	return callerType_;
}

void CreateNetworkInterfacePermissionRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string CreateNetworkInterfacePermissionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateNetworkInterfacePermissionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateNetworkInterfacePermissionRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void CreateNetworkInterfacePermissionRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
}

long CreateNetworkInterfacePermissionRequest::getAccountId()const
{
	return accountId_;
}

void CreateNetworkInterfacePermissionRequest::setAccountId(long accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", std::to_string(accountId));
}

std::string CreateNetworkInterfacePermissionRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateNetworkInterfacePermissionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateNetworkInterfacePermissionRequest::getRegionId()const
{
	return regionId_;
}

void CreateNetworkInterfacePermissionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool CreateNetworkInterfacePermissionRequest::getEnable()const
{
	return enable_;
}

void CreateNetworkInterfacePermissionRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string CreateNetworkInterfacePermissionRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateNetworkInterfacePermissionRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string CreateNetworkInterfacePermissionRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateNetworkInterfacePermissionRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateNetworkInterfacePermissionRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateNetworkInterfacePermissionRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long CreateNetworkInterfacePermissionRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateNetworkInterfacePermissionRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string CreateNetworkInterfacePermissionRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateNetworkInterfacePermissionRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string CreateNetworkInterfacePermissionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateNetworkInterfacePermissionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateNetworkInterfacePermissionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateNetworkInterfacePermissionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateNetworkInterfacePermissionRequest::getPermission()const
{
	return permission_;
}

void CreateNetworkInterfacePermissionRequest::setPermission(const std::string& permission)
{
	permission_ = permission;
	setParameter("Permission", permission);
}

std::string CreateNetworkInterfacePermissionRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateNetworkInterfacePermissionRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long CreateNetworkInterfacePermissionRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateNetworkInterfacePermissionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool CreateNetworkInterfacePermissionRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateNetworkInterfacePermissionRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool CreateNetworkInterfacePermissionRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateNetworkInterfacePermissionRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool CreateNetworkInterfacePermissionRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateNetworkInterfacePermissionRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string CreateNetworkInterfacePermissionRequest::getRequestId()const
{
	return requestId_;
}

void CreateNetworkInterfacePermissionRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string CreateNetworkInterfacePermissionRequest::getNetworkInterfaceId()const
{
	return networkInterfaceId_;
}

void CreateNetworkInterfacePermissionRequest::setNetworkInterfaceId(const std::string& networkInterfaceId)
{
	networkInterfaceId_ = networkInterfaceId;
	setParameter("NetworkInterfaceId", networkInterfaceId);
}

