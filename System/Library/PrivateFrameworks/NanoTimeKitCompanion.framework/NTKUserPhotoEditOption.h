/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKEditOption.h>

@interface NTKUserPhotoEditOption : NTKEditOption {

	BOOL _usesDefaultPhoto;

}

@property (assign,nonatomic) BOOL usesDefaultPhoto;              //@synthesize usesDefaultPhoto=_usesDefaultPhoto - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)optionUsingDefaultPhoto:(BOOL)arg1 forDevice:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)dailySnapshotKey;
-(id)JSONObjectRepresentation;
-(BOOL)isValidOption;
-(id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)usesDefaultPhoto;
-(void)setUsesDefaultPhoto:(BOOL)arg1 ;
@end

