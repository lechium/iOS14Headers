/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:33 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class FMTimedMetadataItem;

@interface MiroBeatMetadata : NSObject {

	FMTimedMetadataItem* _metadataItem;
	long long _priority;

}

@property (nonatomic,retain) FMTimedMetadataItem * metadataItem;              //@synthesize metadataItem=_metadataItem - In the implementation block
@property (assign,nonatomic) long long priority;                              //@synthesize priority=_priority - In the implementation block
+(id)beatWithMetadataItem:(id)arg1 andPriority:(long long)arg2 ;
-(void)setPriority:(long long)arg1 ;
-(long long)priority;
-(FMTimedMetadataItem *)metadataItem;
-(id)description;
-(void)setMetadataItem:(FMTimedMetadataItem *)arg1 ;
-(id)initWithMetadataItem:(id)arg1 andPriority:(long long)arg2 ;
@end

