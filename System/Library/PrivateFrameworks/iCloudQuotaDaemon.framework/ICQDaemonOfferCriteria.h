/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface ICQDaemonOfferCriteria : NSObject {

	NSDictionary* _serverDict;

}

@property (nonatomic,readonly) NSDictionary * serverDictionary; 
-(id)initWithServerDictionary:(id)arg1 ;
-(NSDictionary *)serverDictionary;
-(BOOL)isSatisfiedByConditions:(id)arg1 ;
@end
