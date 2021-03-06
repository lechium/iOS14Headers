/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:39 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPObject.h>
#import <TSReading/TSPCopying.h>

@class TSWPStorage;

@interface TSTRichTextPayload : TSPObject <TSPCopying> {

	TSWPStorage* mStorage;

}

@property (nonatomic,retain) TSWPStorage * storage; 
-(id)string;
-(id)initWithStorage:(id)arg1 ;
-(TSWPStorage *)storage;
-(void)setStorage:(TSWPStorage *)arg1 ;
-(void)dealloc;
-(id)copyWithContext:(id)arg1 ;
-(id)initWithContext:(id)arg1 storage:(id)arg2 ;
-(BOOL)requiresRichText;
@end

