/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FCDemoGroupConfig : NSObject <NSCopying> {

	unsigned long long _demoGroupType;
	NSString* _topicID;
	NSArray* _articleIDs;

}

@property (nonatomic,readonly) unsigned long long demoGroupType;              //@synthesize demoGroupType=_demoGroupType - In the implementation block
@property (nonatomic,copy,readonly) NSString * topicID;                       //@synthesize topicID=_topicID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * articleIDs;                     //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tagIDs; 
-(NSArray *)tagIDs;
-(NSArray *)articleIDs;
-(NSString *)topicID;
-(unsigned long long)demoGroupType;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
@end
