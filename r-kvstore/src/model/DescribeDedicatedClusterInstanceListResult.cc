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

#include <alibabacloud/r-kvstore/model/DescribeDedicatedClusterInstanceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeDedicatedClusterInstanceListResult::DescribeDedicatedClusterInstanceListResult() :
	ServiceResult()
{}

DescribeDedicatedClusterInstanceListResult::DescribeDedicatedClusterInstanceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDedicatedClusterInstanceListResult::~DescribeDedicatedClusterInstanceListResult()
{}

void DescribeDedicatedClusterInstanceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["InstancesItem"];
	for (auto valueInstancesInstancesItem : allInstancesNode)
	{
		InstancesItem instancesObject;
		if(!valueInstancesInstancesItem["CharacterType"].isNull())
			instancesObject.characterType = std::stoi(valueInstancesInstancesItem["CharacterType"].asString());
		if(!valueInstancesInstancesItem["ClusterId"].isNull())
			instancesObject.clusterId = valueInstancesInstancesItem["ClusterId"].asString();
		if(!valueInstancesInstancesItem["ClusterName"].isNull())
			instancesObject.clusterName = valueInstancesInstancesItem["ClusterName"].asString();
		if(!valueInstancesInstancesItem["EngineVersion"].isNull())
			instancesObject.engineVersion = valueInstancesInstancesItem["EngineVersion"].asString();
		if(!valueInstancesInstancesItem["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstancesItem["InstanceId"].asString();
		if(!valueInstancesInstancesItem["InstanceStatus"].isNull())
			instancesObject.instanceStatus = valueInstancesInstancesItem["InstanceStatus"].asString();
		if(!valueInstancesInstancesItem["MaintainEndTime"].isNull())
			instancesObject.maintainEndTime = valueInstancesInstancesItem["MaintainEndTime"].asString();
		if(!valueInstancesInstancesItem["MaintainStartTime"].isNull())
			instancesObject.maintainStartTime = valueInstancesInstancesItem["MaintainStartTime"].asString();
		if(!valueInstancesInstancesItem["RegionId"].isNull())
			instancesObject.regionId = valueInstancesInstancesItem["RegionId"].asString();
		if(!valueInstancesInstancesItem["VpcId"].isNull())
			instancesObject.vpcId = valueInstancesInstancesItem["VpcId"].asString();
		if(!valueInstancesInstancesItem["VswitchId"].isNull())
			instancesObject.vswitchId = valueInstancesInstancesItem["VswitchId"].asString();
		if(!valueInstancesInstancesItem["ZoneId"].isNull())
			instancesObject.zoneId = valueInstancesInstancesItem["ZoneId"].asString();
		if(!valueInstancesInstancesItem["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesInstancesItem["InstanceName"].asString();
		if(!valueInstancesInstancesItem["CustomId"].isNull())
			instancesObject.customId = valueInstancesInstancesItem["CustomId"].asString();
		if(!valueInstancesInstancesItem["InstanceClass"].isNull())
			instancesObject.instanceClass = valueInstancesInstancesItem["InstanceClass"].asString();
		if(!valueInstancesInstancesItem["Engine"].isNull())
			instancesObject.engine = valueInstancesInstancesItem["Engine"].asString();
		if(!valueInstancesInstancesItem["StorageType"].isNull())
			instancesObject.storageType = valueInstancesInstancesItem["StorageType"].asString();
		if(!valueInstancesInstancesItem["ConnectionDomain"].isNull())
			instancesObject.connectionDomain = valueInstancesInstancesItem["ConnectionDomain"].asString();
		if(!valueInstancesInstancesItem["CreateTime"].isNull())
			instancesObject.createTime = valueInstancesInstancesItem["CreateTime"].asString();
		auto allInstanceNodeListNode = allInstancesNode["InstanceNodeList"]["InstanceNodes"];
		for (auto allInstancesNodeInstanceNodeListInstanceNodes : allInstanceNodeListNode)
		{
			InstancesItem::InstanceNodes instanceNodeListObject;
			if(!allInstancesNodeInstanceNodeListInstanceNodes["NodeId"].isNull())
				instanceNodeListObject.nodeId = std::stoi(allInstancesNodeInstanceNodeListInstanceNodes["NodeId"].asString());
			if(!allInstancesNodeInstanceNodeListInstanceNodes["NodeIp"].isNull())
				instanceNodeListObject.nodeIp = allInstancesNodeInstanceNodeListInstanceNodes["NodeIp"].asString();
			if(!allInstancesNodeInstanceNodeListInstanceNodes["NodeType"].isNull())
				instanceNodeListObject.nodeType = allInstancesNodeInstanceNodeListInstanceNodes["NodeType"].asString();
			if(!allInstancesNodeInstanceNodeListInstanceNodes["Port"].isNull())
				instanceNodeListObject.port = std::stoi(allInstancesNodeInstanceNodeListInstanceNodes["Port"].asString());
			if(!allInstancesNodeInstanceNodeListInstanceNodes["Role"].isNull())
				instanceNodeListObject.role = allInstancesNodeInstanceNodeListInstanceNodes["Role"].asString();
			if(!allInstancesNodeInstanceNodeListInstanceNodes["ZoneId"].isNull())
				instanceNodeListObject.zoneId = allInstancesNodeInstanceNodeListInstanceNodes["ZoneId"].asString();
			if(!allInstancesNodeInstanceNodeListInstanceNodes["InstanceId"].isNull())
				instanceNodeListObject.instanceId = allInstancesNodeInstanceNodeListInstanceNodes["InstanceId"].asString();
			if(!allInstancesNodeInstanceNodeListInstanceNodes["DedicatedHostName"].isNull())
				instanceNodeListObject.dedicatedHostName = allInstancesNodeInstanceNodeListInstanceNodes["DedicatedHostName"].asString();
			instancesObject.instanceNodeList.push_back(instanceNodeListObject);
		}
		instances_.push_back(instancesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeDedicatedClusterInstanceListResult::InstancesItem> DescribeDedicatedClusterInstanceListResult::getInstances()const
{
	return instances_;
}

int DescribeDedicatedClusterInstanceListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDedicatedClusterInstanceListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDedicatedClusterInstanceListResult::getPageNumber()const
{
	return pageNumber_;
}
