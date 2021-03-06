/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class CoreDAVMultiStatusItem, NSSet;

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask {

	CoreDAVMultiStatusItem* _multiStatus;
	NSSet* _propertiesToFind;

}

@property (nonatomic,retain) NSSet * propertiesToFind;                          //@synthesize propertiesToFind=_propertiesToFind - In the implementation block
@property (nonatomic,retain) CoreDAVMultiStatusItem * multiStatus;              //@synthesize multiStatus=_multiStatus - In the implementation block
-(CoreDAVMultiStatusItem *)multiStatus;
-(id)additionalHeaderValues;
-(id)parseHints;
-(id)description;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 ;
-(NSSet *)propertiesToFind;
-(void)updateMultiStatusFromResponse;
-(id)getTotalFailureError;
-(id)successfulValueForNameSpace:(id)arg1 elementName:(id)arg2 ;
-(void)setMultiStatus:(CoreDAVMultiStatusItem *)arg1 ;
-(void)setPropertiesToFind:(NSSet *)arg1 ;
@end

