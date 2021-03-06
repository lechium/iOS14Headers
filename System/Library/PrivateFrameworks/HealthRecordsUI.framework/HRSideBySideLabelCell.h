/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class NSString;

@interface HRSideBySideLabelCell : WDMedicalRecordGroupableCell {

	 titleLabel;
	 detailLabel;
	 chevronView;
	 title;
	 detail;

}

@property (copy,nonatomic) NSString * title; 
@property (copy,nonatomic) NSString * detail; 
-(id)initWithReuseIdentifier:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)title;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)detail;
-(id)initWithCoder:(id)arg1 ;
-(void)setDetail:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
@end

