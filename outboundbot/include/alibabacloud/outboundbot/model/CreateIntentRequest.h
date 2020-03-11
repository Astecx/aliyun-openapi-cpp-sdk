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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATEINTENTREQUEST_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATEINTENTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/outboundbot/OutboundBotExport.h>

namespace AlibabaCloud
{
	namespace OutboundBot
	{
		namespace Model
		{
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT CreateIntentRequest : public RpcServiceRequest
			{

			public:
				CreateIntentRequest();
				~CreateIntentRequest();

				std::string getUtterances()const;
				void setUtterances(const std::string& utterances);
				std::string getKeywords()const;
				void setKeywords(const std::string& keywords);
				std::string getIntentDescription()const;
				void setIntentDescription(const std::string& intentDescription);
				std::string getScriptId()const;
				void setScriptId(const std::string& scriptId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getIntentName()const;
				void setIntentName(const std::string& intentName);

            private:
				std::string utterances_;
				std::string keywords_;
				std::string intentDescription_;
				std::string scriptId_;
				std::string instanceId_;
				std::string intentName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATEINTENTREQUEST_H_