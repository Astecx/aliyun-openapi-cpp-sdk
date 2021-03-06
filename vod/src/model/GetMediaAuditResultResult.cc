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

#include <alibabacloud/vod/model/GetMediaAuditResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetMediaAuditResultResult::GetMediaAuditResultResult() :
	ServiceResult()
{}

GetMediaAuditResultResult::GetMediaAuditResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMediaAuditResultResult::~GetMediaAuditResultResult()
{}

void GetMediaAuditResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto mediaAuditResultNode = value["MediaAuditResult"];
	if(!mediaAuditResultNode["AbnormalModules"].isNull())
		mediaAuditResult_.abnormalModules = mediaAuditResultNode["AbnormalModules"].asString();
	if(!mediaAuditResultNode["Label"].isNull())
		mediaAuditResult_.label = mediaAuditResultNode["Label"].asString();
	if(!mediaAuditResultNode["Suggestion"].isNull())
		mediaAuditResult_.suggestion = mediaAuditResultNode["Suggestion"].asString();
	auto allAudioResultNode = mediaAuditResultNode["AudioResult"]["AudioResultItem"];
	for (auto mediaAuditResultNodeAudioResultAudioResultItem : allAudioResultNode)
	{
		MediaAuditResult::AudioResultItem audioResultItemObject;
		if(!mediaAuditResultNodeAudioResultAudioResultItem["Label"].isNull())
			audioResultItemObject.label = mediaAuditResultNodeAudioResultAudioResultItem["Label"].asString();
		if(!mediaAuditResultNodeAudioResultAudioResultItem["Scene"].isNull())
			audioResultItemObject.scene = mediaAuditResultNodeAudioResultAudioResultItem["Scene"].asString();
		if(!mediaAuditResultNodeAudioResultAudioResultItem["Score"].isNull())
			audioResultItemObject.score = mediaAuditResultNodeAudioResultAudioResultItem["Score"].asString();
		if(!mediaAuditResultNodeAudioResultAudioResultItem["Suggestion"].isNull())
			audioResultItemObject.suggestion = mediaAuditResultNodeAudioResultAudioResultItem["Suggestion"].asString();
		mediaAuditResult_.audioResult.push_back(audioResultItemObject);
	}
	auto allImageResultNode = mediaAuditResultNode["ImageResult"]["ImageResultItem"];
	for (auto mediaAuditResultNodeImageResultImageResultItem : allImageResultNode)
	{
		MediaAuditResult::ImageResultItem imageResultItemObject;
		if(!mediaAuditResultNodeImageResultImageResultItem["Label"].isNull())
			imageResultItemObject.label = mediaAuditResultNodeImageResultImageResultItem["Label"].asString();
		if(!mediaAuditResultNodeImageResultImageResultItem["Suggestion"].isNull())
			imageResultItemObject.suggestion = mediaAuditResultNodeImageResultImageResultItem["Suggestion"].asString();
		if(!mediaAuditResultNodeImageResultImageResultItem["Type"].isNull())
			imageResultItemObject.type = mediaAuditResultNodeImageResultImageResultItem["Type"].asString();
		if(!mediaAuditResultNodeImageResultImageResultItem["Url"].isNull())
			imageResultItemObject.url = mediaAuditResultNodeImageResultImageResultItem["Url"].asString();
		auto allResultNode = allImageResultNode["Result"]["ResultItem"];
		for (auto allImageResultNodeResultResultItem : allResultNode)
		{
			MediaAuditResult::ImageResultItem::ResultItem resultObject;
			if(!allImageResultNodeResultResultItem["Label"].isNull())
				resultObject.label = allImageResultNodeResultResultItem["Label"].asString();
			if(!allImageResultNodeResultResultItem["Scene"].isNull())
				resultObject.scene = allImageResultNodeResultResultItem["Scene"].asString();
			if(!allImageResultNodeResultResultItem["Score"].isNull())
				resultObject.score = allImageResultNodeResultResultItem["Score"].asString();
			if(!allImageResultNodeResultResultItem["Suggestion"].isNull())
				resultObject.suggestion = allImageResultNodeResultResultItem["Suggestion"].asString();
			imageResultItemObject.result.push_back(resultObject);
		}
		mediaAuditResult_.imageResult.push_back(imageResultItemObject);
	}
	auto allTextResultNode = mediaAuditResultNode["TextResult"]["TextResultItem"];
	for (auto mediaAuditResultNodeTextResultTextResultItem : allTextResultNode)
	{
		MediaAuditResult::TextResultItem textResultItemObject;
		if(!mediaAuditResultNodeTextResultTextResultItem["Content"].isNull())
			textResultItemObject.content = mediaAuditResultNodeTextResultTextResultItem["Content"].asString();
		if(!mediaAuditResultNodeTextResultTextResultItem["Label"].isNull())
			textResultItemObject.label = mediaAuditResultNodeTextResultTextResultItem["Label"].asString();
		if(!mediaAuditResultNodeTextResultTextResultItem["Scene"].isNull())
			textResultItemObject.scene = mediaAuditResultNodeTextResultTextResultItem["Scene"].asString();
		if(!mediaAuditResultNodeTextResultTextResultItem["Score"].isNull())
			textResultItemObject.score = mediaAuditResultNodeTextResultTextResultItem["Score"].asString();
		if(!mediaAuditResultNodeTextResultTextResultItem["Suggestion"].isNull())
			textResultItemObject.suggestion = mediaAuditResultNodeTextResultTextResultItem["Suggestion"].asString();
		if(!mediaAuditResultNodeTextResultTextResultItem["Type"].isNull())
			textResultItemObject.type = mediaAuditResultNodeTextResultTextResultItem["Type"].asString();
		mediaAuditResult_.textResult.push_back(textResultItemObject);
	}
	auto videoResultNode = mediaAuditResultNode["VideoResult"];
	if(!videoResultNode["Label"].isNull())
		mediaAuditResult_.videoResult.label = videoResultNode["Label"].asString();
	if(!videoResultNode["Suggestion"].isNull())
		mediaAuditResult_.videoResult.suggestion = videoResultNode["Suggestion"].asString();
	auto pornResultNode = videoResultNode["PornResult"];
	if(!pornResultNode["AverageScore"].isNull())
		mediaAuditResult_.videoResult.pornResult.averageScore = pornResultNode["AverageScore"].asString();
	if(!pornResultNode["Label"].isNull())
		mediaAuditResult_.videoResult.pornResult.label = pornResultNode["Label"].asString();
	if(!pornResultNode["MaxScore"].isNull())
		mediaAuditResult_.videoResult.pornResult.maxScore = pornResultNode["MaxScore"].asString();
	if(!pornResultNode["Suggestion"].isNull())
		mediaAuditResult_.videoResult.pornResult.suggestion = pornResultNode["Suggestion"].asString();
	auto allCounterListNode = pornResultNode["CounterList"]["CounterListItem"];
	for (auto pornResultNodeCounterListCounterListItem : allCounterListNode)
	{
		MediaAuditResult::VideoResult::PornResult::CounterListItem counterListItemObject;
		if(!pornResultNodeCounterListCounterListItem["Count"].isNull())
			counterListItemObject.count = std::stoi(pornResultNodeCounterListCounterListItem["Count"].asString());
		if(!pornResultNodeCounterListCounterListItem["Label"].isNull())
			counterListItemObject.label = pornResultNodeCounterListCounterListItem["Label"].asString();
		mediaAuditResult_.videoResult.pornResult.counterList.push_back(counterListItemObject);
	}
	auto allTopListNode = pornResultNode["TopList"]["TopListItem"];
	for (auto pornResultNodeTopListTopListItem : allTopListNode)
	{
		MediaAuditResult::VideoResult::PornResult::TopListItem topListItemObject;
		if(!pornResultNodeTopListTopListItem["Label"].isNull())
			topListItemObject.label = pornResultNodeTopListTopListItem["Label"].asString();
		if(!pornResultNodeTopListTopListItem["Score"].isNull())
			topListItemObject.score = pornResultNodeTopListTopListItem["Score"].asString();
		if(!pornResultNodeTopListTopListItem["Timestamp"].isNull())
			topListItemObject.timestamp = pornResultNodeTopListTopListItem["Timestamp"].asString();
		if(!pornResultNodeTopListTopListItem["Url"].isNull())
			topListItemObject.url = pornResultNodeTopListTopListItem["Url"].asString();
		mediaAuditResult_.videoResult.pornResult.topList.push_back(topListItemObject);
	}
	auto adResultNode = videoResultNode["AdResult"];
	if(!adResultNode["AverageScore"].isNull())
		mediaAuditResult_.videoResult.adResult.averageScore = adResultNode["AverageScore"].asString();
	if(!adResultNode["Label"].isNull())
		mediaAuditResult_.videoResult.adResult.label = adResultNode["Label"].asString();
	if(!adResultNode["MaxScore"].isNull())
		mediaAuditResult_.videoResult.adResult.maxScore = adResultNode["MaxScore"].asString();
	if(!adResultNode["Suggestion"].isNull())
		mediaAuditResult_.videoResult.adResult.suggestion = adResultNode["Suggestion"].asString();
	auto allCounterList1Node = adResultNode["CounterList"]["CounterListItem"];
	for (auto adResultNodeCounterListCounterListItem : allCounterList1Node)
	{
		MediaAuditResult::VideoResult::AdResult::CounterListItem3 counterListItem3Object;
		if(!adResultNodeCounterListCounterListItem["Count"].isNull())
			counterListItem3Object.count = std::stoi(adResultNodeCounterListCounterListItem["Count"].asString());
		if(!adResultNodeCounterListCounterListItem["Label"].isNull())
			counterListItem3Object.label = adResultNodeCounterListCounterListItem["Label"].asString();
		mediaAuditResult_.videoResult.adResult.counterList1.push_back(counterListItem3Object);
	}
	auto allTopList2Node = adResultNode["TopList"]["TopListItem"];
	for (auto adResultNodeTopListTopListItem : allTopList2Node)
	{
		MediaAuditResult::VideoResult::AdResult::TopListItem4 topListItem4Object;
		if(!adResultNodeTopListTopListItem["Label"].isNull())
			topListItem4Object.label = adResultNodeTopListTopListItem["Label"].asString();
		if(!adResultNodeTopListTopListItem["Score"].isNull())
			topListItem4Object.score = adResultNodeTopListTopListItem["Score"].asString();
		if(!adResultNodeTopListTopListItem["Timestamp"].isNull())
			topListItem4Object.timestamp = adResultNodeTopListTopListItem["Timestamp"].asString();
		if(!adResultNodeTopListTopListItem["Url"].isNull())
			topListItem4Object.url = adResultNodeTopListTopListItem["Url"].asString();
		mediaAuditResult_.videoResult.adResult.topList2.push_back(topListItem4Object);
	}
	auto logoResultNode = videoResultNode["LogoResult"];
	if(!logoResultNode["AverageScore"].isNull())
		mediaAuditResult_.videoResult.logoResult.averageScore = logoResultNode["AverageScore"].asString();
	if(!logoResultNode["Label"].isNull())
		mediaAuditResult_.videoResult.logoResult.label = logoResultNode["Label"].asString();
	if(!logoResultNode["MaxScore"].isNull())
		mediaAuditResult_.videoResult.logoResult.maxScore = logoResultNode["MaxScore"].asString();
	if(!logoResultNode["Suggestion"].isNull())
		mediaAuditResult_.videoResult.logoResult.suggestion = logoResultNode["Suggestion"].asString();
	auto allCounterList5Node = logoResultNode["CounterList"]["CounterListItem"];
	for (auto logoResultNodeCounterListCounterListItem : allCounterList5Node)
	{
		MediaAuditResult::VideoResult::LogoResult::CounterListItem7 counterListItem7Object;
		if(!logoResultNodeCounterListCounterListItem["Count"].isNull())
			counterListItem7Object.count = std::stoi(logoResultNodeCounterListCounterListItem["Count"].asString());
		if(!logoResultNodeCounterListCounterListItem["Label"].isNull())
			counterListItem7Object.label = logoResultNodeCounterListCounterListItem["Label"].asString();
		mediaAuditResult_.videoResult.logoResult.counterList5.push_back(counterListItem7Object);
	}
	auto allTopList6Node = logoResultNode["TopList"]["TopListItem"];
	for (auto logoResultNodeTopListTopListItem : allTopList6Node)
	{
		MediaAuditResult::VideoResult::LogoResult::TopListItem8 topListItem8Object;
		if(!logoResultNodeTopListTopListItem["Label"].isNull())
			topListItem8Object.label = logoResultNodeTopListTopListItem["Label"].asString();
		if(!logoResultNodeTopListTopListItem["Score"].isNull())
			topListItem8Object.score = logoResultNodeTopListTopListItem["Score"].asString();
		if(!logoResultNodeTopListTopListItem["Timestamp"].isNull())
			topListItem8Object.timestamp = logoResultNodeTopListTopListItem["Timestamp"].asString();
		if(!logoResultNodeTopListTopListItem["Url"].isNull())
			topListItem8Object.url = logoResultNodeTopListTopListItem["Url"].asString();
		mediaAuditResult_.videoResult.logoResult.topList6.push_back(topListItem8Object);
	}
	auto liveResultNode = videoResultNode["LiveResult"];
	if(!liveResultNode["AverageScore"].isNull())
		mediaAuditResult_.videoResult.liveResult.averageScore = liveResultNode["AverageScore"].asString();
	if(!liveResultNode["Label"].isNull())
		mediaAuditResult_.videoResult.liveResult.label = liveResultNode["Label"].asString();
	if(!liveResultNode["MaxScore"].isNull())
		mediaAuditResult_.videoResult.liveResult.maxScore = liveResultNode["MaxScore"].asString();
	if(!liveResultNode["Suggestion"].isNull())
		mediaAuditResult_.videoResult.liveResult.suggestion = liveResultNode["Suggestion"].asString();
	auto allCounterList9Node = liveResultNode["CounterList"]["CounterListItem"];
	for (auto liveResultNodeCounterListCounterListItem : allCounterList9Node)
	{
		MediaAuditResult::VideoResult::LiveResult::CounterListItem11 counterListItem11Object;
		if(!liveResultNodeCounterListCounterListItem["Count"].isNull())
			counterListItem11Object.count = std::stoi(liveResultNodeCounterListCounterListItem["Count"].asString());
		if(!liveResultNodeCounterListCounterListItem["Label"].isNull())
			counterListItem11Object.label = liveResultNodeCounterListCounterListItem["Label"].asString();
		mediaAuditResult_.videoResult.liveResult.counterList9.push_back(counterListItem11Object);
	}
	auto allTopList10Node = liveResultNode["TopList"]["TopListItem"];
	for (auto liveResultNodeTopListTopListItem : allTopList10Node)
	{
		MediaAuditResult::VideoResult::LiveResult::TopListItem12 topListItem12Object;
		if(!liveResultNodeTopListTopListItem["Label"].isNull())
			topListItem12Object.label = liveResultNodeTopListTopListItem["Label"].asString();
		if(!liveResultNodeTopListTopListItem["Score"].isNull())
			topListItem12Object.score = liveResultNodeTopListTopListItem["Score"].asString();
		if(!liveResultNodeTopListTopListItem["Timestamp"].isNull())
			topListItem12Object.timestamp = liveResultNodeTopListTopListItem["Timestamp"].asString();
		if(!liveResultNodeTopListTopListItem["Url"].isNull())
			topListItem12Object.url = liveResultNodeTopListTopListItem["Url"].asString();
		mediaAuditResult_.videoResult.liveResult.topList10.push_back(topListItem12Object);
	}
	auto terrorismResultNode = videoResultNode["TerrorismResult"];
	if(!terrorismResultNode["AverageScore"].isNull())
		mediaAuditResult_.videoResult.terrorismResult.averageScore = terrorismResultNode["AverageScore"].asString();
	if(!terrorismResultNode["Label"].isNull())
		mediaAuditResult_.videoResult.terrorismResult.label = terrorismResultNode["Label"].asString();
	if(!terrorismResultNode["MaxScore"].isNull())
		mediaAuditResult_.videoResult.terrorismResult.maxScore = terrorismResultNode["MaxScore"].asString();
	if(!terrorismResultNode["Suggestion"].isNull())
		mediaAuditResult_.videoResult.terrorismResult.suggestion = terrorismResultNode["Suggestion"].asString();
	auto allCounterList13Node = terrorismResultNode["CounterList"]["CounterListItem"];
	for (auto terrorismResultNodeCounterListCounterListItem : allCounterList13Node)
	{
		MediaAuditResult::VideoResult::TerrorismResult::CounterListItem15 counterListItem15Object;
		if(!terrorismResultNodeCounterListCounterListItem["Count"].isNull())
			counterListItem15Object.count = std::stoi(terrorismResultNodeCounterListCounterListItem["Count"].asString());
		if(!terrorismResultNodeCounterListCounterListItem["Label"].isNull())
			counterListItem15Object.label = terrorismResultNodeCounterListCounterListItem["Label"].asString();
		mediaAuditResult_.videoResult.terrorismResult.counterList13.push_back(counterListItem15Object);
	}
	auto allTopList14Node = terrorismResultNode["TopList"]["TopListItem"];
	for (auto terrorismResultNodeTopListTopListItem : allTopList14Node)
	{
		MediaAuditResult::VideoResult::TerrorismResult::TopListItem16 topListItem16Object;
		if(!terrorismResultNodeTopListTopListItem["Label"].isNull())
			topListItem16Object.label = terrorismResultNodeTopListTopListItem["Label"].asString();
		if(!terrorismResultNodeTopListTopListItem["Score"].isNull())
			topListItem16Object.score = terrorismResultNodeTopListTopListItem["Score"].asString();
		if(!terrorismResultNodeTopListTopListItem["Timestamp"].isNull())
			topListItem16Object.timestamp = terrorismResultNodeTopListTopListItem["Timestamp"].asString();
		if(!terrorismResultNodeTopListTopListItem["Url"].isNull())
			topListItem16Object.url = terrorismResultNodeTopListTopListItem["Url"].asString();
		mediaAuditResult_.videoResult.terrorismResult.topList14.push_back(topListItem16Object);
	}

}

GetMediaAuditResultResult::MediaAuditResult GetMediaAuditResultResult::getMediaAuditResult()const
{
	return mediaAuditResult_;
}

