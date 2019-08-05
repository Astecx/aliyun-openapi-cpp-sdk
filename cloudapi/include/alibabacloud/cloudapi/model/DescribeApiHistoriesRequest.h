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

#ifndef ALIBABACLOUD_CLOUDAPI_MODEL_DESCRIBEAPIHISTORIESREQUEST_H_
#define ALIBABACLOUD_CLOUDAPI_MODEL_DESCRIBEAPIHISTORIESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudapi/CloudAPIExport.h>

namespace AlibabaCloud
{
	namespace CloudAPI
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAPI_EXPORT DescribeApiHistoriesRequest : public RpcServiceRequest
			{

			public:
				DescribeApiHistoriesRequest();
				~DescribeApiHistoriesRequest();

				std::string getStageName()const;
				void setStageName(const std::string& stageName);
				std::string getApiName()const;
				void setApiName(const std::string& apiName);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getPageSize()const;
				void setPageSize(const std::string& pageSize);
				std::string getApiId()const;
				void setApiId(const std::string& apiId);
				std::string getPageNumber()const;
				void setPageNumber(const std::string& pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string stageName_;
				std::string apiName_;
				std::string securityToken_;
				std::string groupId_;
				std::string pageSize_;
				std::string apiId_;
				std::string pageNumber_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAPI_MODEL_DESCRIBEAPIHISTORIESREQUEST_H_