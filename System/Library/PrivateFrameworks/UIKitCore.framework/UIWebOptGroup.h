/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIWebSelectedItemPrivate;
@class NSArray;

@interface UIWebOptGroup : NSObject {

	id<UIWebSelectedItemPrivate> _group;
	NSArray* _options;
	long long _offset;

}

@property (nonatomic,readonly) long long offset;                              //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) id<UIWebSelectedItemPrivate> group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) NSArray * options;                               //@synthesize options=_options - In the implementation block
-(void)setGroup:(id<UIWebSelectedItemPrivate>)arg1 ;
-(void)setOptions:(NSArray *)arg1 ;
-(NSArray *)options;
-(void)dealloc;
-(long long)offset;
-(id<UIWebSelectedItemPrivate>)group;
-(id)initWithGroup:(id)arg1 itemOffset:(long long)arg2 ;
@end
