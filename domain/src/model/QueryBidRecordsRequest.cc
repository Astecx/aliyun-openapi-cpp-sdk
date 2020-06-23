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

#include <alibabacloud/domain/model/QueryBidRecordsRequest.h>

using AlibabaCloud::Domain::Model::QueryBidRecordsRequest;

QueryBidRecordsRequest::QueryBidRecordsRequest() :
	RpcServiceRequest("domain", "2018-02-08", "QueryBidRecords")
{
	setMethod(HttpRequest::Method::Post);
}

QueryBidRecordsRequest::~QueryBidRecordsRequest()
{}

std::string QueryBidRecordsRequest::getAuctionId()const
{
	return auctionId_;
}

void QueryBidRecordsRequest::setAuctionId(const std::string& auctionId)
{
	auctionId_ = auctionId;
	setBodyParameter("AuctionId", auctionId);
}

int QueryBidRecordsRequest::getPageSize()const
{
	return pageSize_;
}

void QueryBidRecordsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

int QueryBidRecordsRequest::getCurrentPage()const
{
	return currentPage_;
}

void QueryBidRecordsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setBodyParameter("CurrentPage", std::to_string(currentPage));
}

