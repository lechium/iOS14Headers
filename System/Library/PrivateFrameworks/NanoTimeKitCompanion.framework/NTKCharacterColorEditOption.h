/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKValueEditOption.h>

@class UIColor;

@interface NTKCharacterColorEditOption : NTKValueEditOption

@property (nonatomic,readonly) unsigned long long color; 
@property (nonatomic,readonly) UIColor * colorValue; 
@property (nonatomic,readonly) double desaturation; 
+(id)optionWithFaceColor:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)optionWithOption:(id)arg1 forCharacter:(unsigned long long)arg2 forDevice:(id)arg3 ;
+(id)optionByValidatingValueOfInvalidOption:(id)arg1 ;
+(id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(unsigned long long)numberOfOptionsForCharacter:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)optionAtIndex:(unsigned long long)arg1 forCharacter:(unsigned long long)arg2 forDevice:(id)arg3 ;
+(unsigned long long)indexOfOption:(id)arg1 forCharacter:(unsigned long long)arg2 forDevice:(id)arg3 ;
-(UIColor *)colorValue;
-(unsigned long long)color;
-(long long)swatchStyle;
-(double)desaturation;
-(id)_valueToFaceBundleStringDict;
@end

