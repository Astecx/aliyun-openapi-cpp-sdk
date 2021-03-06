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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEMONITORGROUPDYNAMICRULESRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEMONITORGROUPDYNAMICRULESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT DescribeMonitorGroupDynamicRulesResult : public ServiceResult
			{
			public:
				struct ResourceItem
				{
					struct Filter
					{
						std::string function;
						std::string value;
						std::string name;
					};
					std::vector<ResourceItem::Filter> filters;
					std::string filterRelation;
					std::string category;
					long groupId;
				};


				DescribeMonitorGroupDynamicRulesResult();
				explicit DescribeMonitorGroupDynamicRulesResult(const std::string &payload);
				~DescribeMonitorGroupDynamicRulesResult();
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				int getTotal()const;
				std::vector<ResourceItem> getResource()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int pageSize_;
				int pageNumber_;
				int total_;
				std::vector<ResourceItem> resource_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEMONITORGROUPDYNAMICRULESRESULT_H_