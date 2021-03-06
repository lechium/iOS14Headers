/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, WLKContinueWatchingCollection;

@interface WLKContinueWatchingResponse : NSObject {

	NSArray* _items;
	WLKContinueWatchingCollection* _featured;

}

@property (nonatomic,copy,readonly) NSArray * items;                                       //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) WLKContinueWatchingCollection * featured;              //@synthesize featured=_featured - In the implementation block
-(NSArray *)items;
-(WLKContinueWatchingCollection *)featured;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
@end

