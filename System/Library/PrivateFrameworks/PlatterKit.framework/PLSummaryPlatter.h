/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:00 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIImage, UIView;


@protocol PLSummaryPlatter <PLPlatter>
@property (nonatomic,retain) NSString * primaryText; 
@property (nonatomic,retain) NSString * primarySubtitleText; 
@property (nonatomic,retain) NSString * secondaryText; 
@property (nonatomic,retain) NSString * summaryText; 
@property (nonatomic,retain) UIImage * thumbnail; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (assign,nonatomic) unsigned long long messageNumberOfLines; 
@required
-(UIView *)accessoryView;
-(void)setSecondaryText:(id)arg1;
-(NSString *)secondaryText;
-(void)setAccessoryView:(id)arg1;
-(void)setSummaryText:(id)arg1;
-(NSString *)summaryText;
-(unsigned long long)messageNumberOfLines;
-(void)setThumbnail:(id)arg1;
-(NSString *)primaryText;
-(void)setPrimaryText:(id)arg1;
-(UIImage *)thumbnail;
-(void)setMessageNumberOfLines:(unsigned long long)arg1;
-(NSString *)primarySubtitleText;
-(void)setPrimarySubtitleText:(id)arg1;

@end
