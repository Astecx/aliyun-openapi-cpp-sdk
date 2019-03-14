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

#include <alibabacloud/sas-api/model/GetIpProfileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas-api;
using namespace AlibabaCloud::Sas-api::Model;

GetIpProfileResult::GetIpProfileResult() :
	ServiceResult()
{}

GetIpProfileResult::GetIpProfileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetIpProfileResult::~GetIpProfileResult()
{}

void GetIpProfileResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Ip"].isNull())
		data_.ip = dataNode["Ip"].asString();
	if(!dataNode["Info"].isNull())
		data_.info = dataNode["Info"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetIpProfileResult::getMessage()const
{
	return message_;
}

GetIpProfileResult::Data GetIpProfileResult::getData()const
{
	return data_;
}

int GetIpProfileResult::getCode()const
{
	return code_;
}

bool GetIpProfileResult::getSuccess()const
{
	return success_;
}
