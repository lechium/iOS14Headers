/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:33 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSText.framework/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSReading/TSWPLayout.h>

@class TSWPStorage;

@interface TSWPInstructionalTextLayout : TSWPLayout

@property (nonatomic,retain) TSWPStorage * storage; 
-(void)setStorage:(TSWPStorage *)arg1 ;
-(BOOL)isInstructional;
-(id)initWithInfo:(id)arg1 storage:(id)arg2 frame:(CGRect)arg3 ;
@end

