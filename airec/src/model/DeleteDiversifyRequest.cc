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

#include <alibabacloud/airec/model/DeleteDiversifyRequest.h>

using AlibabaCloud::Airec::Model::DeleteDiversifyRequest;

DeleteDiversifyRequest::DeleteDiversifyRequest() :
	RoaServiceRequest("airec", "2018-10-12")
{
	setResourcePath("/openapi/instances/[InstanceId]/diversifies/[Name]");
	setMethod(HttpRequest::Method::Delete);
}

DeleteDiversifyRequest::~DeleteDiversifyRequest()
{}

std::string DeleteDiversifyRequest::getInstanceId()const
{
	return instanceId_;
}

void DeleteDiversifyRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DeleteDiversifyRequest::getName()const
{
	return name_;
}

void DeleteDiversifyRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

