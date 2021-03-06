/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SBIconAccessoryInfoProvider <NSObject>
@property (nonatomic,copy,readonly) NSString * location; 
@property (getter=isHighlighted,nonatomic,readonly) BOOL highlighted; 
@property (nonatomic,readonly) long long continuityBadgeType; 
@required
-(long long)continuityBadgeType;
-(BOOL)isHighlighted;
-(NSString *)location;

@end

