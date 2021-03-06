/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class NSString, NSMutableString;

@interface VPNTableCell : PSTableCell {

	NSString* _alert;
	NSString* _subtitle;
	NSMutableString* _detailText;

}

@property (retain) NSMutableString * detailText;              //@synthesize detailText=_detailText - In the implementation block
@property (retain) NSString * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
@property (retain) NSString * alert;                          //@synthesize alert=_alert - In the implementation block
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)layoutSubviews;
-(NSMutableString *)detailText;
-(void)setAlert:(NSString *)arg1 ;
-(void)setDetailText:(NSMutableString *)arg1 ;
-(NSString *)alert;
-(void)setChecked:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)updateDetail;
@end

