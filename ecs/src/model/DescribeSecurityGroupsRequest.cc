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

#include <alibabacloud/ecs/model/DescribeSecurityGroupsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeSecurityGroupsRequest;

DescribeSecurityGroupsRequest::DescribeSecurityGroupsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeSecurityGroups")
{}

DescribeSecurityGroupsRequest::~DescribeSecurityGroupsRequest()
{}

long DescribeSecurityGroupsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSecurityGroupsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool DescribeSecurityGroupsRequest::getDryRun()const
{
	return dryRun_;
}

void DescribeSecurityGroupsRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", std::to_string(dryRun));
}

bool DescribeSecurityGroupsRequest::getFuzzyQuery()const
{
	return fuzzyQuery_;
}

void DescribeSecurityGroupsRequest::setFuzzyQuery(bool fuzzyQuery)
{
	fuzzyQuery_ = fuzzyQuery;
	setParameter("FuzzyQuery", std::to_string(fuzzyQuery));
}

std::string DescribeSecurityGroupsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSecurityGroupsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSecurityGroupsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSecurityGroupsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeSecurityGroupsRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void DescribeSecurityGroupsRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

bool DescribeSecurityGroupsRequest::getIsQueryEcsCount()const
{
	return isQueryEcsCount_;
}

void DescribeSecurityGroupsRequest::setIsQueryEcsCount(bool isQueryEcsCount)
{
	isQueryEcsCount_ = isQueryEcsCount;
	setParameter("IsQueryEcsCount", std::to_string(isQueryEcsCount));
}

std::string DescribeSecurityGroupsRequest::getNetworkType()const
{
	return networkType_;
}

void DescribeSecurityGroupsRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setParameter("NetworkType", networkType);
}

long DescribeSecurityGroupsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSecurityGroupsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSecurityGroupsRequest::getSecurityGroupIds()const
{
	return securityGroupIds_;
}

void DescribeSecurityGroupsRequest::setSecurityGroupIds(const std::string& securityGroupIds)
{
	securityGroupIds_ = securityGroupIds;
	setParameter("SecurityGroupIds", securityGroupIds);
}

std::string DescribeSecurityGroupsRequest::getSecurityGroupName()const
{
	return securityGroupName_;
}

void DescribeSecurityGroupsRequest::setSecurityGroupName(const std::string& securityGroupName)
{
	securityGroupName_ = securityGroupName;
	setParameter("SecurityGroupName", securityGroupName);
}

int DescribeSecurityGroupsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSecurityGroupsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeSecurityGroupsRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeSecurityGroupsRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
}

std::string DescribeSecurityGroupsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeSecurityGroupsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeSecurityGroupsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSecurityGroupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeSecurityGroupsRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeSecurityGroupsRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

int DescribeSecurityGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSecurityGroupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::vector<DescribeSecurityGroupsRequest::Tag> DescribeSecurityGroupsRequest::getTag()const
{
	return tag_;
}

void DescribeSecurityGroupsRequest::setTag(const std::vector<Tag>& tag)
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

