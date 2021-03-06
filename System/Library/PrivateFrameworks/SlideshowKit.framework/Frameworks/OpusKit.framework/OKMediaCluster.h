/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:24 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface OKMediaCluster : NSObject {

	NSString* _title;
	NSMutableArray* _items;
	BOOL _isUnknown;

}

@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * items;              //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) BOOL isUnknown;                               //@synthesize isUnknown=_isUnknown - In the implementation block
-(NSMutableArray *)items;
-(void)dealloc;
-(NSString *)title;
-(id)init;
-(BOOL)isUnknown;
-(void)setTitle:(NSString *)arg1 ;
-(id)uniqueURLs;
-(void)setIsUnknown:(BOOL)arg1 ;
@end

