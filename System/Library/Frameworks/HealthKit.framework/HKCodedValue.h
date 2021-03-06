/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HKCodedObject.h>

@class HKConcept, NSArray, HKInspectableValue, NSString;

@interface HKCodedValue : NSObject <NSSecureCoding, NSCopying, HKCodedObject> {

	HKConcept* _concept;
	NSArray* _codings;
	HKInspectableValue* _value;
	NSArray* _referenceRanges;

}

@property (nonatomic,copy,readonly) NSArray * codings;                       //@synthesize codings=_codings - In the implementation block
@property (nonatomic,copy,readonly) HKConcept * concept; 
@property (nonatomic,copy,readonly) HKInspectableValue * value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSArray * referenceRanges;               //@synthesize referenceRanges=_referenceRanges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)indexableKeyPathsWithPrefix:(id)arg1 ;
+(id)codedValueWithCodings:(id)arg1 value:(id)arg2 referenceRanges:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKConcept *)concept;
-(NSArray *)codings;
-(id)init;
-(HKInspectableValue *)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setConcept:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCodings:(id)arg1 value:(id)arg2 referenceRanges:(id)arg3 ;
-(id)chartableCodedQuantityWithError:(id*)arg1 ;
-(NSArray *)referenceRanges;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)chartableCodedQuantitySetWithDate:(id)arg1 error:(id*)arg2 ;
@end

