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

#ifndef ALIBABACLOUD_CS_MODEL_DESCRIBETEMPLATESRESULT_H_
#define ALIBABACLOUD_CS_MODEL_DESCRIBETEMPLATESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cs/CSExport.h>

namespace AlibabaCloud
{
	namespace CS
	{
		namespace Model
		{
			class ALIBABACLOUD_CS_EXPORT DescribeTemplatesResult : public ServiceResult
			{
			public:


				DescribeTemplatesResult();
				explicit DescribeTemplatesResult(const std::string &payload);
				~DescribeTemplatesResult();
				std::string get_Template()const;
				std::string getDescription()const;
				std::string getAcl()const;
				std::string getTemplate_type()const;
				std::string getTags()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string _template_;
				std::string description_;
				std::string acl_;
				std::string template_type_;
				std::string tags_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_DESCRIBETEMPLATESRESULT_H_