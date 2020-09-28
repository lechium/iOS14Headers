/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HKElectrocardiogram, NSString, NSDateComponents, UIColor;


@protocol HRElectrocardiogramReportDataSource <NSObject>
@property (nonatomic,readonly) HKElectrocardiogram * sample; 
@property (nonatomic,readonly) long long activeAlgorithmVersion; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSDateComponents * dateOfBirthComponents; 
@property (nonatomic,readonly) UIColor * tintColor; 
@required
-(NSString *)lastName;
-(HKElectrocardiogram *)sample;
-(NSString *)firstName;
-(UIColor *)tintColor;
-(NSDateComponents *)dateOfBirthComponents;
-(long long)activeAlgorithmVersion;

@end
