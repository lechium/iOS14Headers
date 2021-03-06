/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MPCPlayerFeedbackCommand <MPCPlayerCommand>
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,copy,readonly) NSString * localizedShortTitle; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) BOOL value; 
@required
-(long long)presentationStyle;
-(NSString *)localizedTitle;
-(BOOL)value;
-(NSString *)localizedShortTitle;
-(id)changeValue:(BOOL)arg1;

@end

