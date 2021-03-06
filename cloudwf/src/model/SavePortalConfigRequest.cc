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

#include <alibabacloud/cloudwf/model/SavePortalConfigRequest.h>

using AlibabaCloud::Cloudwf::Model::SavePortalConfigRequest;

SavePortalConfigRequest::SavePortalConfigRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "SavePortalConfig")
{
	setMethod(HttpRequest::Method::Post);
}

SavePortalConfigRequest::~SavePortalConfigRequest()
{}

std::string SavePortalConfigRequest::getJsonData()const
{
	return jsonData_;
}

void SavePortalConfigRequest::setJsonData(const std::string& jsonData)
{
	jsonData_ = jsonData;
	setParameter("JsonData", jsonData);
}

std::string SavePortalConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SavePortalConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

