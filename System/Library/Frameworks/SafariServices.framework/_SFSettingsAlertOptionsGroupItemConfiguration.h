/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, NSAttributedString;


@protocol _SFSettingsAlertOptionsGroupItemConfiguration <NSObject>
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@required
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(id)arg1;
-(UIView *)accessoryView;
-(BOOL)isEnabled;
-(void)setAccessoryView:(id)arg1;
-(void)setEnabled:(BOOL)arg1;

@end

