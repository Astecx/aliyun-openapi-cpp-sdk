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

#include <alibabacloud/bssopenapi/model/QueryPrepaidCardsRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryPrepaidCardsRequest;

QueryPrepaidCardsRequest::QueryPrepaidCardsRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "QueryPrepaidCards")
{}

QueryPrepaidCardsRequest::~QueryPrepaidCardsRequest()
{}

std::string QueryPrepaidCardsRequest::getExpiryTimeEnd()const
{
	return expiryTimeEnd_;
}

void QueryPrepaidCardsRequest::setExpiryTimeEnd(const std::string& expiryTimeEnd)
{
	expiryTimeEnd_ = expiryTimeEnd;
	setCoreParameter("ExpiryTimeEnd", expiryTimeEnd);
}

std::string QueryPrepaidCardsRequest::getExpiryTimeStart()const
{
	return expiryTimeStart_;
}

void QueryPrepaidCardsRequest::setExpiryTimeStart(const std::string& expiryTimeStart)
{
	expiryTimeStart_ = expiryTimeStart;
	setCoreParameter("ExpiryTimeStart", expiryTimeStart);
}

bool QueryPrepaidCardsRequest::getEffectiveOrNot()const
{
	return effectiveOrNot_;
}

void QueryPrepaidCardsRequest::setEffectiveOrNot(bool effectiveOrNot)
{
	effectiveOrNot_ = effectiveOrNot;
	setCoreParameter("EffectiveOrNot", effectiveOrNot ? "true" : "false");
}
