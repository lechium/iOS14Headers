/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:54 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSString, NSDictionary;

@interface PUSearchZeroKeywordBaseViewModel : NSObject {

	long long _itemType;
	NSString* _title;
	id _representedObject;
	id _displayInfo;

}

@property (nonatomic,readonly) long long itemType;                          //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,readonly) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) id representedObject;                        //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,readonly) id displayInfo;                              //@synthesize displayInfo=_displayInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * debugDictionary; 
-(id)initForTesting;
-(NSDictionary *)debugDictionary;
-(NSString *)title;
-(id)displayInfo;
-(long long)itemType;
-(id)initWithType:(long long)arg1 title:(id)arg2 representedObject:(id)arg3 displayInfo:(id)arg4 ;
-(id)representedObject;
-(id)description;
@end
