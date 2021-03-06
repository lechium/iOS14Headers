/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class FCReadingHistory, NSString;

@interface FCFeedTransformationUnreadFirst : NSObject <FCFeedTransforming> {

	FCReadingHistory* _history;

}

@property (nonatomic,retain) FCReadingHistory * history;              //@synthesize history=_history - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithReadingHistory:(id)arg1 ;
-(FCReadingHistory *)history;
-(void)setHistory:(FCReadingHistory *)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
@end

