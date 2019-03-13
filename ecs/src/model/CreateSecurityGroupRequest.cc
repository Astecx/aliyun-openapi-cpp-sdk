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

#include <alibabacloud/ecs/model/CreateSecurityGroupRequest.h>

using AlibabaCloud::Ecs::Model::CreateSecurityGroupRequest;

CreateSecurityGroupRequest::CreateSecurityGroupRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateSecurityGroup")
{}

CreateSecurityGroupRequest::~CreateSecurityGroupRequest()
{}

long CreateSecurityGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateSecurityGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateSecurityGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateSecurityGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateSecurityGroupRequest::getClientToken()const
{
	return clientToken_;
}

void CreateSecurityGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateSecurityGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateSecurityGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateSecurityGroupRequest::getDescription()const
{
	return description_;
}

void CreateSecurityGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

long CreateSecurityGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateSecurityGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateSecurityGroupRequest::getSecurityGroupName()const
{
	return securityGroupName_;
}

void CreateSecurityGroupRequest::setSecurityGroupName(const std::string& securityGroupName)
{
	securityGroupName_ = securityGroupName;
	setParameter("SecurityGroupName", securityGroupName);
}

std::string CreateSecurityGroupRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void CreateSecurityGroupRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
}

std::string CreateSecurityGroupRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateSecurityGroupRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateSecurityGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateSecurityGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateSecurityGroupRequest::getVpcId()const
{
	return vpcId_;
}

void CreateSecurityGroupRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::vector<CreateSecurityGroupRequest::Tag> CreateSecurityGroupRequest::getTag()const
{
	return tag_;
}

void CreateSecurityGroupRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setParameter(str + ".Value", obj.value);
		setParameter(str + ".Key", obj.key);
	}
}

