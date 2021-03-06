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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_BINDESLDEVICEREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_BINDESLDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT BindEslDeviceRequest : public RpcServiceRequest
			{

			public:
				BindEslDeviceRequest();
				~BindEslDeviceRequest();

				std::string getColumn()const;
				void setColumn(const std::string& column);
				std::string getStoreId()const;
				void setStoreId(const std::string& storeId);
				int getLayer()const;
				void setLayer(int layer);
				std::string getShelf()const;
				void setShelf(const std::string& shelf);
				std::string getEslBarCode()const;
				void setEslBarCode(const std::string& eslBarCode);
				std::string getItemBarCode()const;
				void setItemBarCode(const std::string& itemBarCode);

            private:
				std::string column_;
				std::string storeId_;
				int layer_;
				std::string shelf_;
				std::string eslBarCode_;
				std::string itemBarCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_BINDESLDEVICEREQUEST_H_