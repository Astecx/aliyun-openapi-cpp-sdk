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

#include <alibabacloud/live/model/UpdateCasterSceneConfigRequest.h>

using AlibabaCloud::Live::Model::UpdateCasterSceneConfigRequest;

UpdateCasterSceneConfigRequest::UpdateCasterSceneConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "UpdateCasterSceneConfig")
{}

UpdateCasterSceneConfigRequest::~UpdateCasterSceneConfigRequest()
{}

std::vector<std::string> UpdateCasterSceneConfigRequest::getComponentId()const
{
	return componentId_;
}

void UpdateCasterSceneConfigRequest::setComponentId(const std::vector<std::string>& componentId)
{
	componentId_ = componentId;
	for(int i = 0; i!= componentId.size(); i++)
		setCoreParameter("ComponentId."+ std::to_string(i), componentId.at(i));
}

std::string UpdateCasterSceneConfigRequest::getRegionId()const
{
	return regionId_;
}

void UpdateCasterSceneConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UpdateCasterSceneConfigRequest::getCasterId()const
{
	return casterId_;
}

void UpdateCasterSceneConfigRequest::setCasterId(const std::string& casterId)
{
	casterId_ = casterId;
	setCoreParameter("CasterId", casterId);
}

std::string UpdateCasterSceneConfigRequest::getSceneId()const
{
	return sceneId_;
}

void UpdateCasterSceneConfigRequest::setSceneId(const std::string& sceneId)
{
	sceneId_ = sceneId;
	setCoreParameter("SceneId", sceneId);
}

long UpdateCasterSceneConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateCasterSceneConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateCasterSceneConfigRequest::getLayoutId()const
{
	return layoutId_;
}

void UpdateCasterSceneConfigRequest::setLayoutId(const std::string& layoutId)
{
	layoutId_ = layoutId;
	setCoreParameter("LayoutId", layoutId);
}

