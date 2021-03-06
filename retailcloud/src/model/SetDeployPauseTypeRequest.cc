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

#include <alibabacloud/retailcloud/model/SetDeployPauseTypeRequest.h>

using AlibabaCloud::Retailcloud::Model::SetDeployPauseTypeRequest;

SetDeployPauseTypeRequest::SetDeployPauseTypeRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "SetDeployPauseType")
{
	setMethod(HttpRequest::Method::Post);
}

SetDeployPauseTypeRequest::~SetDeployPauseTypeRequest()
{}

std::string SetDeployPauseTypeRequest::getDeployPauseType()const
{
	return deployPauseType_;
}

void SetDeployPauseTypeRequest::setDeployPauseType(const std::string& deployPauseType)
{
	deployPauseType_ = deployPauseType;
	setParameter("DeployPauseType", deployPauseType);
}

long SetDeployPauseTypeRequest::getDeployOrderId()const
{
	return deployOrderId_;
}

void SetDeployPauseTypeRequest::setDeployOrderId(long deployOrderId)
{
	deployOrderId_ = deployOrderId;
	setParameter("DeployOrderId", std::to_string(deployOrderId));
}

