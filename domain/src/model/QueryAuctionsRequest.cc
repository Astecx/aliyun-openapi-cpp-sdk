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

#include <alibabacloud/domain/model/QueryAuctionsRequest.h>

using AlibabaCloud::Domain::Model::QueryAuctionsRequest;

QueryAuctionsRequest::QueryAuctionsRequest() :
	RpcServiceRequest("domain", "2018-02-08", "QueryAuctions")
{
	setMethod(HttpRequest::Method::Post);
}

QueryAuctionsRequest::~QueryAuctionsRequest()
{}

int QueryAuctionsRequest::getPageSize()const
{
	return pageSize_;
}

void QueryAuctionsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

int QueryAuctionsRequest::getCurrentPage()const
{
	return currentPage_;
}

void QueryAuctionsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setBodyParameter("CurrentPage", std::to_string(currentPage));
}

std::string QueryAuctionsRequest::getStatus()const
{
	return status_;
}

void QueryAuctionsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setBodyParameter("Status", status);
}

